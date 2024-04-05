#pragma once
#include "../MyHeader.h"
namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for UpdateBook
	/// </summary>
	public ref class UpdateBook : public System::Windows::Forms::Form
	{
	public:
		UpdateBook(int idBook)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			book = gcnew Book();

			book->InitializeVariables(idBook);

			bookCopy = gcnew Book();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateBook()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ warningPublisherValid;

	private: System::Windows::Forms::Label^ warningAuthorNotValid;


	private: System::Windows::Forms::Label^ warningPublisherEmpty;
	private: System::Windows::Forms::Label^ warningAuthorEmpty;
	private: System::Windows::Forms::Label^ warningTitleEmpty;

	private: System::Windows::Forms::ComboBox^ cbAuthor;
	private: System::Windows::Forms::Label^ formTitle;
	private: System::Windows::Forms::ComboBox^ cbCategory;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::ComboBox^ cbGenre;
	private: System::Windows::Forms::ComboBox^ cbPublisher;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ tbTitle;

	private: System::Windows::Forms::Label^ lblCategory;
	private: System::Windows::Forms::Label^ lblGenre;

	private: System::Windows::Forms::Label^ lblDatePublished;
	private: System::Windows::Forms::Label^ lblPublishor;
	private: System::Windows::Forms::Label^ lblAuthor;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ btnTitle;
	private: System::Windows::Forms::Button^ btnAut;
	private: System::Windows::Forms::Button^ btnPubDate;





	private: System::Windows::Forms::Button^ btnPub;
	private: System::Windows::Forms::Button^ btnGen;


	private: System::Windows::Forms::Button^ btnCat;
	private: System::Windows::Forms::Label^ warningBookExists;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
		bool titleChanged = false, authorChanged = false, publisherChanged = false, 
			publishedDateChanged = false, categoryChanged = false, genreChanged = false;
		Book^ book, ^bookCopy;

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e);
		   // My Functions and variables 
		   int authorID, publisherID, categoryID, genreID;

		   String^ title, ^ author, ^ publisher, ^ pubDate;
		   String^ genre, ^ category;

		   bool AddAuthorToDB = false; // true if author is to be added to DB
		   bool AddPublisherToDB = false; // true if publisher is to be added to DB
		   bool IsAuthorInDB = false, IsPublisherInDB = false;
		   bool bookAdded = false;

		   bool isUpdatedTitle, isUpdatedAuthor, isUpdatedPublisher, isUpdatedPublishedDate, isUpdatedGenre, isUpdatedCategory;

		// Add a name (Author/Publisher) to SQL database! for tables with two fields only one being an int primary key
	private: void addNameAuthPub(String^ table, String^ field, String^ val);

	private: void sendQuery(String^ sqlQuery);

	private: System::Void UpdateNow(System::Object^ sender, System::EventArgs^ e);

	private: System::Void UpdateBook_Load(System::Object^ sender, System::EventArgs^ e);

		   // returns id else, -5 = null, -2 = name not validated
	private: int getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field);
		   // Timer!
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);

	private: System::Void SomethingHappened(System::Object^ sender, System::EventArgs^ e);

		bool IsTitleFieldValid();
		bool IsAuthorValid();
		bool IsPublisherValid();
		bool IsAuthTitleMatch();
	};
}
