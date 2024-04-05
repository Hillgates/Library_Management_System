#pragma once
#include "../MyHeader.h"
#include "UpdateBook.h"
#include "AddBook.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SearchBook
	/// </summary>
	public ref class SearchBook : public System::Windows::Forms::Form
	{
	public:
		SearchBook(User^ _user)
		{
			InitializeComponent();
			InititiazeMyVariables();
			this->_user = _user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchBook()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panelSearch;
	private: System::Windows::Forms::Label^ labelSearchBy;
	private: System::Windows::Forms::ComboBox^ cbSearchBy;
	private: System::Windows::Forms::Button^ btnSearchMatchWholeWord;
	private: System::Windows::Forms::Button^ btnSearchMatchCase;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ tbSearch;
	private: System::Windows::Forms::ComboBox^ cb2;
	private: System::Windows::Forms::Panel^ panelAdmin;


	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Panel^ panelStudent;



	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ btnBorrow;

	private: System::Windows::Forms::Label^ errorUpdate;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelResult;






	private: System::Windows::Forms::Button^ btnBookADD;


	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ bookAddAmountLabel;
	private: System::Windows::Forms::DateTimePicker^ currentBorrowDatePicker;
	private: System::Windows::Forms::Label^ labelR;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::DateTimePicker^ currentReturnDatePicker;
	private: System::Windows::Forms::DataGridView^ dgvSearchResult;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ bookAddAmountTB;
	private: System::Windows::Forms::ComboBox^ cb3;
	private: System::Windows::Forms::Label^ infoLabel;









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
		void InititiazeMyVariables(void);
#pragma endregion
		bool isMatchCase, isMatchWholeWord, usingCombobox;
		bool borrowDateSet, returnDateSet, borrowDateShown, returnDateShown;

		User^ _user; Book^ book; BorrowedBooks^ bb; ReturnedBooks^ rb;

		int totalBooks = 0;
	
		DateTime prevDateBorrow, prevDateReturn;

		private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnSearchMatchCase_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnSearchMatchWholeWord_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::String^ sqlQuery();
		private: System::Void SearchBook_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbSearchBy_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnBorrow_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnBookADD_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
};
}
