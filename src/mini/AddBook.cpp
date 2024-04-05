#include "AddBook.h"
using namespace LibraryManagementSystem;

inline void AddBook::addNameAuthPub(String^ table, String^ field, String^ val) {
	try {
		SqlConnection^ connection = StartConnection();

		// Send the query
		String^ sqlQuery = "INSERT INTO " + table + " ([" + field + "]) " + "VALUES ('" + val + "'); ";
		SqlCommand command(sqlQuery, connection);


		// finally send
		SqlDataReader^ reader = command.ExecuteReader();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Add Book Dialog");
	}
}

inline System::Void AddBook::btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	title = tbTitle->Text->Trim()->Replace("'", "");
	author = cbAuthor->Text->Trim()->Replace("'", "");
	publisher = cbPublisher->Text->Trim()->Replace("'", "");
	isbn = tbISBN->Text->Trim();
	pubDate = dateTimePicker1->Text;
	genre = cbGenre->Text;
	category = cbCategory->Text;
	totalCopies = Convert::ToInt16(cbTotalValues->Text);

	//IsTitleFieldValid();
	IsAuthorValid();
	//IsAuthTitleMatch();
	IsPublisherValid();
	//Is_ISBNValid();

	if (!IsTitleFieldValid()) return;
	if (!IsAuthTitleMatch()) return;
	if (!Is_ISBNValid()) return;

	if (authorID == -2) {
		WFDR result = MessageBox::Show("Author: " + author + " not in the library system. Do you want to add this Author to the library System?",
			"Author not recognised.", MessageBoxButtons::YesNo);
		if (result == WFDR::Yes) {
			addNameAuthPub("Authors", "authorNames", author);
			authorID = getValueFromQuery("SELECT authorID Authors WHERE authorNames='" + author + "'");
			warningAuthorNotValid->Visible = false;
		}
		else {
			warningAuthorNotValid->Visible = true;
			return;
		}
	}
	if (publisherID == -2) {
		WFDR result = MessageBox::Show("Publisher: " + publisher + " not in the library system. Do you want to add this Publisher to the library System?",
			"Publisher not recognised.", MessageBoxButtons::YesNo);
		if (result == WFDR::Yes) {
			addNameAuthPub("Publishers", "publisherName", publisher);
			publisherID = getValueFromQuery("SELECT publisherID Publishers WHERE publisherName = '" + publisher + "'");
			warningPublisherValid->Visible = false;
		}
		else {
			warningPublisherValid->Visible = true;
			return;
		}
	}

	WFDR confirmResult = MessageBox::Show("Confirm to add Book:\n" +
		"Title: " + title + "\nAuthor: " + author /*+ "\tAuthor ID: " + authorID.ToString()*/ + "\nPublisher: " + publisher
		/*+ "\tPublisher ID: " + publisherID.ToString()*/ + "\nDate: " + pubDate + "\nISBN: " + isbn + "\nCategory: " + category
		+ "\nGenre: " + genre + "\n\nClick Ok to add book to the System", "Confirm to add Book to Library System", MessageBoxButtons::OKCancel
	);

	if (!bookAdded && (confirmResult == WFDR::OK)) {
		try {
			SqlConnection^ connection = StartConnection();

			// Send the query
			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandText = "INSERT INTO Books ([title], [authorID], [publisherID], [publicationDate],"
				" [ISBN], [genreID], [totalCopies], [totalBorrowed], [categoryID]) "
				" VALUES (@Title, @AuthorID, @PublisherID, @PublishedOn, @ISBN, @GenreID, @TotalCopies, @TotalBorrowed, @CategoryID);";
			command->Parameters->AddWithValue("@Title", title);
			command->Parameters->AddWithValue("@AuthorID", authorID);
			command->Parameters->AddWithValue("@PublisherID", publisherID);
			command->Parameters->AddWithValue("@PublishedOn", pubDate);
			command->Parameters->AddWithValue("@ISBN", isbn);
			command->Parameters->AddWithValue("@GenreID", genreID);
			command->Parameters->AddWithValue("@TotalCopies", totalCopies);
			command->Parameters->AddWithValue("@TotalBorrowed", "0");
			command->Parameters->AddWithValue("@CategoryID", categoryID);
			command->ExecuteNonQuery();
			MessageBox::Show("Book Successfully ADDED!");
			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Add Book Dialog");
		}
	}
	return;
}

inline System::Void AddBook::AddBook_Load(System::Object^ sender, System::EventArgs^ e) {
	cbTotalValues->SelectedIndex = 4;
	// authors
	re_populateComboBox(cbAuthor, L"authorNames", L"Authors");
	// publisher
	re_populateComboBox(cbPublisher, L"publisherName", L"Publishers");
	// category
	re_populateComboBox(cbCategory, L"categoryName", L"BookCategories");
	cbCategory->SelectedIndex = 0;
	// genre
	re_populateComboBox(cbGenre, L"genre_name", L"BookGenres WHERE categoryID=1");
	cbGenre->SelectedIndex = 0;
	re_populateComboBox(isbnsArray, "ISBN", "Books");
}

inline int AddBook::getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field) {
	String^ CBname = cbx->Text->Trim();

	int value = cbx->FindStringExact(CBname);

	bool NameInCB = cbx->Items->Contains(CBname);
	bool NameIsNull = String::IsNullOrEmpty(CBname);

	if (NameIsNull)
	{
		lblW->Visible = true;
		return -5; // do nothing
	}
	else if (NameInCB) {

		value = cbx->FindStringExact(CBname) + 1; // to match database ID's
		return value;
	}
	else return -2;
}

inline System::Void LibraryManagementSystem::AddBook::cbAuthor_Leave(System::Object^ sender, System::EventArgs^ e) {
	//int temp = authorID;
	authorID = getIDfromCombobox(cbAuthor, warningAuthorEmpty, "Authors", "authorNames");
	IsAuthorValid();
}

inline System::Void LibraryManagementSystem::AddBook::cbPublisher_Leave(System::Object^ sender, System::EventArgs^ e) {
	//int temp = publisherID;
	publisherID = getIDfromCombobox(cbPublisher, warningPublisherEmpty, "Publishers", "publisherName");
	IsPublisherValid();
}

inline System::Void LibraryManagementSystem::AddBook::tbISBN_Leave(System::Object^ sender, System::EventArgs^ e) {
	isbn = tbISBN->Text;
	Is_ISBNValid();
}

inline System::Void LibraryManagementSystem::AddBook::tbTitle_Leave(System::Object^ sender, System::EventArgs^ e) {
	title = tbTitle->Text->Trim()->Replace("'", "");
	IsTitleFieldValid();
}

inline System::Void LibraryManagementSystem::AddBook::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void LibraryManagementSystem::AddBook::cbAuthor_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	authorID = cbAuthor->SelectedIndex + 1;
	IsAuthorValid();
}

inline System::Void LibraryManagementSystem::AddBook::cbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	categoryID = cbCategory->SelectedIndex + 1;
	if (categoryID != 16)
		re_populateComboBox(cbGenre, L"genre_name", L"BookGenres  WHERE categoryID=" + categoryID.ToString());
	else
		re_populateComboBox(cbGenre, L"genre_name", L"BookGenres ;");
	cbGenre->SelectedIndex = 0;
}

inline System::Void LibraryManagementSystem::AddBook::cbGenre_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	genreID = cbGenre->SelectedIndex + 1;
}

inline System::Void LibraryManagementSystem::AddBook::cbAuthor_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	author = cbAuthor->Text->Trim()->Replace("'", "");
}

inline System::Void LibraryManagementSystem::AddBook::cbPublisher_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	publisher = cbPublisher->Text->Trim()->Replace("'", "");
}

inline System::Void LibraryManagementSystem::AddBook::tbTitle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	title = tbTitle->Text->Trim()->Replace("'", "");
	IsTitleFieldValid();
}

inline System::Void LibraryManagementSystem::AddBook::cbAuthor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	author = cbAuthor->Text->Trim()->Replace("'", "");
	if (author == "") {
		warningAuthorEmpty->Visible = true;
	}
	else {
		warningAuthorEmpty->Visible = false;
	}
	IsAuthorValid();
}

inline System::Void LibraryManagementSystem::AddBook::cbPublisher_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbPublisher->Text->Trim()->Replace("'", "") == "") {
		warningPublisherEmpty->Visible = true;
	}
	else {
		warningPublisherEmpty->Visible = false;
	}
	IsPublisherValid();
}

// -------------------------------------------

inline bool LibraryManagementSystem::AddBook::IsTitleFieldValid() {
	bool IsTitleEmpty = String::IsNullOrEmpty(title);
	if (IsTitleEmpty) {
		warningTitleEmpty->Visible = true;
		return false;
	}
	else {
		warningTitleEmpty->Visible = false;
		return true; // 1
	}
}

inline bool LibraryManagementSystem::AddBook::IsAuthorValid() {
	String^ authorText = cbAuthor->Text->Trim()->Replace("'", "");
	IsAuthorInDB = cbAuthor->Items->Contains(authorText); // NB: if author in DB so in CB!

	bool IsAuthorNull = String::IsNullOrEmpty(authorText); // true if author in combobox is null/empty.

	if (IsAuthorNull) {
		warningAuthorEmpty->Visible = true;
		return false;
	}
	else if (IsAuthorInDB) {
		warningAuthorEmpty->Visible = false;
		warningAuthorNotValid->Visible = false;
		AddAuthorToDB = false;
		return true; // 2
	}
	else { // author not in database but not null also
		warningAuthorEmpty->Visible = false;
		warningAuthorNotValid->Visible = true;
		AddAuthorToDB = true;
		return false;
	}
}

inline bool LibraryManagementSystem::AddBook::IsPublisherValid() {
	String^ publisherText = cbPublisher->Text->Trim()->Replace("'", "");
	IsPublisherInDB = cbPublisher->Items->Contains(publisherText);
	bool IsPublisherNull = String::IsNullOrEmpty(publisherText);


	if (IsPublisherNull) {
		warningAuthorEmpty->Visible = true;
		return false;
	}
	else if (IsPublisherInDB) {
		warningPublisherEmpty->Visible = false;
		warningPublisherValid->Visible = false;
		AddPublisherToDB = false;
		return true; // 2
	}
	else { // author not in database but not null also
		warningPublisherEmpty->Visible = false;
		warningPublisherValid->Visible = true;
		AddPublisherToDB = true;
		return false;
	}
}

inline bool LibraryManagementSystem::AddBook::IsAuthTitleMatch() {
	String^ query1 = "SELECT title, authorID FROM Books WHERE title='" + title + "' AND authorID =" + authorID + ";";
	bool IsTitleInDBsameAuthor = check_existence(query1);
	if (IsTitleInDBsameAuthor) {
		warningBookExists->Visible = true;
		return false;
	}
	else {
		warningBookExists->Visible = false;
		return true; // 3
	}
}

inline bool LibraryManagementSystem::AddBook::Is_ISBNValid() {
	bool ISBN_IsNull = String::IsNullOrEmpty(isbn);
	if (!IsOnlyNumeric(isbn)) {
		warningISBNInvalid->Visible = true;
		return false;
	}
	warningISBNInvalid->Visible = false;
	String^ query = "SELECT ISBN FROM Books WHERE ISBN = '" + isbn + "';";

	bool ISBN_InDB = (isbnsArray->Items->Contains(isbn));//check_existence(query); // = if exitsts in query

	if (ISBN_IsNull) {
		warningISBNempty->Visible = true;
		return false;
	}
	else if (ISBN_InDB) {
		warningISBNexists->Visible = true;
		return false;
	}
	else {
		warningISBNempty->Visible = false;
		warningISBNexists->Visible = false;
		return true; // 5
	}
}
