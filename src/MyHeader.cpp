#include "MyHeader.h"

#ifdef _MY_HEADERS_H_

//###########################################################################//

void User::InitializeVariables(String^ universityID) {
	try {
		SqlConnection^ connection = StartConnection();

		// Send the query
		String^ sqlQuery = "SELECT * FROM Users WHERE universityID=@iduni;";
		SqlCommand command(sqlQuery, connection);
		command.Parameters->AddWithValue("@iduni", universityID);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			/*user = gcnew User;*/
			this->universityID = universityID;
			this->password = reader->GetString(2);
			this->userType = reader->GetString(1);
			this->status = reader->GetString(3);
			this->lastName = reader->GetString(4);
			this->firstName = reader->GetString(5);
			this->email = reader->GetString(6);
			this->dateOfBirth = reader->GetDateTime(7);
			this->gender = reader->GetString(8);
			this->idNumber = reader->GetString(9);
			this->phoneNumber = reader->GetString(10);
			// Check if column 12 is not null
			if (!reader->IsDBNull(11))
			{
				// Retrieve the image data from the column
				array<unsigned char>^ imageData = safe_cast<array<unsigned char>^>(reader->GetValue(11));

				// Convert the image data to a System::Drawing::Image^ object
				using namespace System::IO;

				MemoryStream^ stream = gcnew MemoryStream(imageData);
				this->image = Image::FromStream(stream);
			}
			else this->image = nullptr;

			this->blocked = reader->GetString(12);
			this->logins = reader->GetInt32(13);
			reader->Close(); 
		}
		else {
			MessageBox::Show("Cannot read data...");
		}
		connection->Close();
	}
	catch (Exception^ ex) { MessageBox::Show(ex->Message, "Library System: Login"); }
}

inline bool User::operator==(User^ other) {
	bool _0 = (this->universityID == other->universityID);

	return _0;
}

void Book::InitializeVariables(int bookID) {
	try {
		System::Data::SqlClient::SqlConnection^ connection = StartConnection();

		// Send the query
		System::String^ sqlQuery = "SELECT * FROM Books WHERE bookID=@BookId;";
		System::Data::SqlClient::SqlCommand command(sqlQuery, connection);
		command.Parameters->AddWithValue("@BookId", bookID);

		// Read contents of database
		System::Data::SqlClient::SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			/*user = gcnew User;*/
			this->bookID = bookID;
			this->bookTitle = reader->GetString(1);
			this->authorID = reader->GetInt32(2);
			this->publisherID = reader->GetInt32(3);
			this->publishedDate = reader->GetDateTime(4);
			this->bookISBN = reader->GetString(5);

			if (!reader->IsDBNull(6))
				this->genreID = reader->GetInt32(6);
			else this->genreID = 81; // unknown

			this->totalCopies = reader->GetInt32(7);
			// Check if column 12 is not null
			if (!reader->IsDBNull(8))
			{
				// Retrieve the image data from the column
				array<unsigned char>^ imageData = safe_cast<array<unsigned char>^>(reader->GetValue(8));

				// Convert the image data to a System::Drawing::Image^ object
				System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(imageData);
				this->bookImage = System::Drawing::Image::FromStream(stream);
			}
			else this->bookImage = nullptr;

			this->totalBorrowed = reader->GetInt32(9);

			if (!reader->IsDBNull(10))
				this->categoryID = reader->GetInt32(10);
			else this->categoryID = 16; // unknown

			reader->Close();

			// try to execute another query 
			// to get the genre name and category name if exists
			sqlQuery = "SELECT g.genre_name, c.categoryID, c.categoryName "
				" FROM BookGenres g "
				" INNER JOIN BookCategories c ON c.categoryID=g.categoryID "
				" WHERE genreID=@GenreID;";
			System::Data::SqlClient::SqlCommand command2(sqlQuery, connection);
			command2.Parameters->AddWithValue("@GenreID", this->genreID);

			System::Data::SqlClient::SqlDataReader^ reader2 = command2.ExecuteReader();

			if (reader2->Read()) {
				this->genreName = reader2->GetString(0);
				this->categoryID = reader2->GetInt32(1);
				this->categoryName = reader2->GetString(2);
				reader2->Close();
			}

			reader2->Close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Cannot read data...");
		}
		connection->Close();
	}
	catch (System::Exception^ ex) { System::Windows::Forms::MessageBox::Show(ex->Message, "Library System: Reading book data error..."); }
}

inline bool Book::operator==(Book^ other) {
	bool _0 = (this->bookID == other->bookID);

	return _0;
}

void BorrowedBooks::InitializeVariables(int bookID, String^ StudentID) {
	this->bookID = bookID;
	universityID = StudentID;
	try {
		SqlConnection^ connection = StartConnection();

		System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand();
		command->Connection = connection;
		command->CommandText = "SELECT * FROM BorrowedBooks WHERE bookID=@BookID AND universityID=@UserID";
		command->Parameters->AddWithValue("@BookID", bookID);
		
		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			borrowID = reader->GetInt32(0);
			borrowedDate = reader->GetDateTime(3); // must confirm this!!
			dueDate = reader->GetDateTime(4);
			reader->Close();
		}
		connection->Close();
	}
	catch (Exception^ ex) {
		ex;
		
	}
}
// Calculates the duedate by adding days on the borrow date
// Stores and returns the due date  of the current book
// Note: there is no need to assing the result of this to the dueDate member of this object!
DateTime BorrowedBooks::getDueDate(DateTime borrowedDate) {
	this->borrowedDate = borrowedDate;
	dueDate = borrowedDate.AddDays(14);
	return dueDate;
}

inline bool BorrowedBooks::operator==(BorrowedBooks^ other) {
	bool _0 = (this->borrowID == other->borrowID);
	
	return _0;
}

void ReturnedBooks::InitializeVariables(int borrowID)
{
	this->borrowID = borrowID;
	try {
		SqlConnection^ connection = StartConnection();

		SqlCommand^ command = gcnew SqlCommand();
		command->Connection = connection;
		command->CommandText = "SELECT * FROM ReturnedBooks WHERE borrowID=@BorrowID";
		command->Parameters->AddWithValue("@BorrowID", borrowID);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			this->returnID = reader->GetInt32(0);
			//
			this->bookID = reader->GetInt32(2);
			this->universityID = reader->GetString(3);
			this->returnDate = reader->GetDateTime(4);
			this->returned = reader->GetString(5);
			reader->Close();
		}
		connection->Close();
	}
	catch (Exception^ ex) {
		ex;

	}
}

bool ReturnedBooks::operator==(ReturnedBooks^ other)
{
	bool _0 = (this->returnID == other->returnID); 
	//bool _1 = (this->borrowID == other->borrowID);
	//bool _2 = (this->bookID == other->bookID);
	//bool _3 = (this->universityID == other->universityID);
	//bool _4 = (this->returnDate == other->returnDate);
	//bool _5 = (this->returned == other->returned);
	
	return _0;
}

extern inline String^ getNowMyFormat(String^ x) {
	String^ day = DateTime::Now.Day.ToString();
	String^ month = DateTime::Now.Month.ToString();
	String^ year = DateTime::Now.Year.ToString();
	return year + x + month + x + day;
}

extern inline bool check_existence(String^ sqlQuery) {
	try {
		SqlConnection^ connection = StartConnection();

		SqlCommand command(sqlQuery, connection);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) return true;
		else return false;
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occured: " + ex->Message);
		return false;
	}
}

extern inline void re_populateComboBox(ComboBox^ cbx, String^ field, String^ table) {
	try {
		SqlConnection^ connection = StartConnection();
		// clear the combobox items
		cbx->Items->Clear();

		// Send the query
		String^ sqlQuery = "SELECT " + field + " FROM " + table + "; ";
		SqlCommand command(sqlQuery, connection);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			cbx->Items->Add(reader->GetString(0));
		}
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

extern inline int getValueFromQuery(String^ sqlQuery) {
	try {
		SqlConnection^ connection = StartConnection();
		SqlCommand^ sqlCommand = gcnew SqlCommand();
		sqlCommand->Connection = connection;

		sqlCommand->CommandText = sqlQuery;
		SqlDataReader^ reader = sqlCommand->ExecuteReader();

		if (reader->Read()) {
			return reader->GetInt32(0);
		}
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return 0;
	}
	return 0;
}

extern inline bool IsNumeric(String^ str)
{
	int result;
	return Int32::TryParse(str, result);
}

extern inline bool IsOnlyNumeric(String^ str) {
	if (str->Length != 0) {
		for (int i = 0; i < str->Length; i++)
			return (IsNumeric(str[i].ToString()));
		return false;
	}
	else return false;
}

extern inline void updateOnlineStatus(String^ status, String^ UserID) {
	try {
		SqlConnection^ connection = StartConnection();
		SqlCommand^ sqlCommand = gcnew SqlCommand();
		sqlCommand->Connection = connection;

		sqlCommand->CommandText = "UPDATE Users SET [status]=@Status WHERE universityID = @UserID";
		sqlCommand->Parameters->AddWithValue("@Status", status);
		sqlCommand->Parameters->AddWithValue("@UserID", UserID);
		sqlCommand->ExecuteNonQuery();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message);
	}
}
// This will initialize this with all the data in the database
inline void Cache::Initialize() {
	//
	// array objects
	//
	books = gcnew array<Book^>(100);
	users = gcnew array<User^>(100);
	borrowedBooks = gcnew array<BorrowedBooks^>(100);
	returnedBooks = gcnew array<ReturnedBooks^>(100);

}
#endif


