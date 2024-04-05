#ifndef USING_CURRENT_TIME
#define USING_CURRENT_TIME 1
#endif

#ifndef WFDR
#define WFDR System::Windows::Forms::DialogResult
#endif // !WFDR

#ifndef _MY_HEADERS_H_
#define _MY_HEADERS_H_

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


#include "../database/database.h"


// SQL FUNCTIONS ===========================================================

// Checks if a row of the selected query exists.
// Returns true if exists
bool check_existence(String^ sqlQuery);
// Populates a combobox with values in a specific Field of a specific Table from the database
void re_populateComboBox(ComboBox^ cbx, String^ field, String^ table);
// Returns the first integer, from the first column
int getValueFromQuery(String^ sqlQuery);
// updates the users online status
void updateOnlineStatus(String^ online, String^ UserID);

// !SQL FUNCTIONS =======================================================

// Returns the current machine time in my own spacing format with default of "-"
String^ getNowMyFormat(String^ x = "-");
// Checks if a string(small) can be converted to an int
// Returns: true if the string only consists of numerical characters
bool IsNumeric(String^ str);
// Checks if a string(long) can be converted to an int
// Returns: true if the string only consists of numerical characters
bool IsOnlyNumeric(String^ str);


public ref class User {
public:
	// Initializes the object with database values
	void InitializeVariables(String^ universityID);
	bool User::operator==(User^ other);
public:
	String^ firstName, ^ lastName, ^ address, ^ email;
	DateTime^ dateOfBirth;
	String^ idNumber, ^ phoneNumber, ^ gender;
	String^ universityID; 
	String^ password; 
	String^ userType; 
	String^ status; 
	String^ blocked;
	System::Drawing::Image^ image = nullptr;
	int logins;
};

public ref class Book { 
public:
	void InitializeVariables(int bookID);
	bool operator==(Book^ other);
public:
	int bookID, authorID, publisherID, facultyID, genreID, totalCopies, totalBorrowed, categoryID;
	String^ bookTitle, ^ bookISBN, ^ categoryName, ^ genreName;
	String^ authorNames, ^ publisherNames;
	DateTime publishedDate;
	Image^ bookImage;
};

public ref class BorrowedBooks { 
public:
	BorrowedBooks() {}
	void InitializeVariables(int BookID, String^ StudentID);
	DateTime getDueDate(DateTime borrowedDate); 
	bool operator==(BorrowedBooks^ other);
public:
	int borrowID, bookID;
	DateTime borrowedDate, dueDate;
	String^ universityID;
};

public ref class ReturnedBooks { 
public:
	void InitializeVariables(int BorrowID);
	bool operator==(ReturnedBooks^ other);
public:
	int returnID, borrowID, bookID;
	DateTime returnDate;
	String^ returned, ^universityID;
	
};

public ref class Cache {
	Cache() {
		Initialize();
	}
private: void Initialize();
public:
	array<User^>^ users;
	array<Book^>^ books;
	array<BorrowedBooks^>^ borrowedBooks;
	array<ReturnedBooks^>^ returnedBooks;
	
};
#endif // !_MY_HEADERS_H_
