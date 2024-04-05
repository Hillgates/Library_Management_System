#include "SearchBook.h"
using namespace LibraryManagementSystem;

inline System::Void SearchBook::btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ strQuery = sqlQuery();

	
	try {
		SqlConnection^ connection = StartConnection();
		SqlCommand^ command = gcnew SqlCommand(strQuery, connection);
		SqlDataAdapter^ sda = gcnew SqlDataAdapter();
		sda->SelectCommand = command;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dgvSearchResult->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message + "\nPlease contact admin if error persists.");
		//Clipboard::SetText(ex->Message);
	}
}

inline System::Void SearchBook::btnSearchMatchCase_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isMatchCase) {
		isMatchCase = false;
		this->btnSearchMatchCase->BackColor = System::Drawing::Color::LightGray;
		this->btnSearchMatchCase->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
		this->btnSearchMatchCase->FlatAppearance->BorderSize = 1;
	}
	else {
		isMatchCase = true;
		this->btnSearchMatchCase->BackColor = System::Drawing::Color::LightCoral;
		this->btnSearchMatchCase->FlatAppearance->BorderColor = System::Drawing::Color::Red;
		this->btnSearchMatchCase->FlatAppearance->BorderSize = 2;
	}
	btnSearch->PerformClick();
}

/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void LibraryManagementSystem::SearchBook::InitializeComponent(void)
{
	this->panelSearch = (gcnew System::Windows::Forms::Panel());
	this->cb3 = (gcnew System::Windows::Forms::ComboBox());
	this->cb2 = (gcnew System::Windows::Forms::ComboBox());
	this->labelSearchBy = (gcnew System::Windows::Forms::Label());
	this->cbSearchBy = (gcnew System::Windows::Forms::ComboBox());
	this->btnSearchMatchWholeWord = (gcnew System::Windows::Forms::Button());
	this->btnSearchMatchCase = (gcnew System::Windows::Forms::Button());
	this->btnSearch = (gcnew System::Windows::Forms::Button());
	this->tbSearch = (gcnew System::Windows::Forms::TextBox());
	this->panelAdmin = (gcnew System::Windows::Forms::Panel());
	this->btnBookADD = (gcnew System::Windows::Forms::Button());
	this->btnUpdate = (gcnew System::Windows::Forms::Button());
	this->btnRemove = (gcnew System::Windows::Forms::Button());
	this->panelStudent = (gcnew System::Windows::Forms::Panel());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->btnReturn = (gcnew System::Windows::Forms::Button());
	this->btnBorrow = (gcnew System::Windows::Forms::Button());
	this->errorUpdate = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->infoLabel = (gcnew System::Windows::Forms::Label());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->bookAddAmountTB = (gcnew System::Windows::Forms::TextBox());
	this->bookAddAmountLabel = (gcnew System::Windows::Forms::Label());
	this->labelR = (gcnew System::Windows::Forms::Label());
	this->currentBorrowDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
	this->labelB = (gcnew System::Windows::Forms::Label());
	this->currentReturnDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
	this->panelResult = (gcnew System::Windows::Forms::Panel());
	this->dgvSearchResult = (gcnew System::Windows::Forms::DataGridView());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->panelSearch->SuspendLayout();
	this->panelAdmin->SuspendLayout();
	this->panelStudent->SuspendLayout();
	this->panel1->SuspendLayout();
	this->panel2->SuspendLayout();
	this->panelResult->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchResult))->BeginInit();
	this->SuspendLayout();
	// 
	// panelSearch
	// 
	this->panelSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->panelSearch->Controls->Add(this->cb3);
	this->panelSearch->Controls->Add(this->cb2);
	this->panelSearch->Controls->Add(this->labelSearchBy);
	this->panelSearch->Controls->Add(this->cbSearchBy);
	this->panelSearch->Controls->Add(this->btnSearchMatchWholeWord);
	this->panelSearch->Controls->Add(this->btnSearchMatchCase);
	this->panelSearch->Controls->Add(this->btnSearch);
	this->panelSearch->Controls->Add(this->tbSearch);
	this->panelSearch->Location = System::Drawing::Point(12, 8);
	this->panelSearch->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
	this->panelSearch->Name = L"panelSearch";
	this->panelSearch->Size = System::Drawing::Size(463, 72);
	this->panelSearch->TabIndex = 3;
	// 
	// cb3
	// 
	this->cb3->Cursor = System::Windows::Forms::Cursors::Hand;
	this->cb3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->cb3->FormattingEnabled = true;
	this->cb3->Location = System::Drawing::Point(15, 10);
	this->cb3->Name = L"cb3";
	this->cb3->Size = System::Drawing::Size(347, 21);
	this->cb3->TabIndex = 6;
	this->cb3->Visible = false;
	// 
	// cb2
	// 
	this->cb2->Cursor = System::Windows::Forms::Cursors::Hand;
	this->cb2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->cb2->FormattingEnabled = true;
	this->cb2->Location = System::Drawing::Point(15, 9);
	this->cb2->Name = L"cb2";
	this->cb2->Size = System::Drawing::Size(347, 21);
	this->cb2->TabIndex = 5;
	this->cb2->Visible = false;
	// 
	// labelSearchBy
	// 
	this->labelSearchBy->AutoSize = true;
	this->labelSearchBy->Location = System::Drawing::Point(235, 32);
	this->labelSearchBy->Name = L"labelSearchBy";
	this->labelSearchBy->Size = System::Drawing::Size(61, 13);
	this->labelSearchBy->TabIndex = 5;
	this->labelSearchBy->Text = L"Search by: ";
	// 
	// cbSearchBy
	// 
	this->cbSearchBy->Cursor = System::Windows::Forms::Cursors::Hand;
	this->cbSearchBy->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->cbSearchBy->FormattingEnabled = true;
	this->cbSearchBy->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
		L"Title", L"Author", L"ISBN", L"Publisher", L"Category",
			L"Genre"
	});
	this->cbSearchBy->Location = System::Drawing::Point(238, 48);
	this->cbSearchBy->Name = L"cbSearchBy";
	this->cbSearchBy->Size = System::Drawing::Size(190, 21);
	this->cbSearchBy->TabIndex = 4;
	this->cbSearchBy->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchBook::cbSearchBy_SelectedIndexChanged);
	// 
	// btnSearchMatchWholeWord
	// 
	this->btnSearchMatchWholeWord->BackColor = System::Drawing::Color::LightGray;
	this->btnSearchMatchWholeWord->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnSearchMatchWholeWord->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
	this->btnSearchMatchWholeWord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnSearchMatchWholeWord->Location = System::Drawing::Point(118, 43);
	this->btnSearchMatchWholeWord->Name = L"btnSearchMatchWholeWord";
	this->btnSearchMatchWholeWord->Size = System::Drawing::Size(114, 23);
	this->btnSearchMatchWholeWord->TabIndex = 3;
	this->btnSearchMatchWholeWord->Text = L"Match Whole Word";
	this->btnSearchMatchWholeWord->UseVisualStyleBackColor = false;
	this->btnSearchMatchWholeWord->Click += gcnew System::EventHandler(this, &SearchBook::btnSearchMatchWholeWord_Click);
	// 
	// btnSearchMatchCase
	// 
	this->btnSearchMatchCase->BackColor = System::Drawing::Color::LightGray;
	this->btnSearchMatchCase->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnSearchMatchCase->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
	this->btnSearchMatchCase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnSearchMatchCase->Location = System::Drawing::Point(14, 43);
	this->btnSearchMatchCase->Name = L"btnSearchMatchCase";
	this->btnSearchMatchCase->Size = System::Drawing::Size(98, 23);
	this->btnSearchMatchCase->TabIndex = 2;
	this->btnSearchMatchCase->Text = L"Match Case";
	this->btnSearchMatchCase->UseVisualStyleBackColor = false;
	this->btnSearchMatchCase->Click += gcnew System::EventHandler(this, &SearchBook::btnSearchMatchCase_Click);
	// 
	// btnSearch
	// 
	this->btnSearch->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnSearch->Location = System::Drawing::Point(373, 7);
	this->btnSearch->Margin = System::Windows::Forms::Padding(8);
	this->btnSearch->Name = L"btnSearch";
	this->btnSearch->Size = System::Drawing::Size(56, 24);
	this->btnSearch->TabIndex = 1;
	this->btnSearch->Text = L"Search";
	this->btnSearch->UseVisualStyleBackColor = true;
	this->btnSearch->Click += gcnew System::EventHandler(this, &SearchBook::btnSearch_Click);
	// 
	// tbSearch
	// 
	this->tbSearch->Location = System::Drawing::Point(15, 10);
	this->tbSearch->Margin = System::Windows::Forms::Padding(8);
	this->tbSearch->Name = L"tbSearch";
	this->tbSearch->Size = System::Drawing::Size(347, 20);
	this->tbSearch->TabIndex = 0;
	// 
	// panelAdmin
	// 
	this->panelAdmin->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->panelAdmin->Controls->Add(this->btnBookADD);
	this->panelAdmin->Controls->Add(this->btnUpdate);
	this->panelAdmin->Controls->Add(this->btnRemove);
	this->panelAdmin->Location = System::Drawing::Point(481, 8);
	this->panelAdmin->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
	this->panelAdmin->Name = L"panelAdmin";
	this->panelAdmin->Size = System::Drawing::Size(114, 120);
	this->panelAdmin->TabIndex = 5;
	this->panelAdmin->Visible = false;
	// 
	// btnBookADD
	// 
	this->btnBookADD->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnBookADD->Location = System::Drawing::Point(12, 6);
	this->btnBookADD->Name = L"btnBookADD";
	this->btnBookADD->Size = System::Drawing::Size(86, 31);
	this->btnBookADD->TabIndex = 2;
	this->btnBookADD->Text = L"Add a Book";
	this->btnBookADD->UseVisualStyleBackColor = true;
	this->btnBookADD->Click += gcnew System::EventHandler(this, &SearchBook::btnBookADD_Click);
	// 
	// btnUpdate
	// 
	this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnUpdate->Location = System::Drawing::Point(12, 43);
	this->btnUpdate->Name = L"btnUpdate";
	this->btnUpdate->Size = System::Drawing::Size(86, 31);
	this->btnUpdate->TabIndex = 0;
	this->btnUpdate->Text = L"Update";
	this->btnUpdate->UseVisualStyleBackColor = true;
	this->btnUpdate->Click += gcnew System::EventHandler(this, &SearchBook::btnUpdate_Click);
	// 
	// btnRemove
	// 
	this->btnRemove->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnRemove->Location = System::Drawing::Point(12, 83);
	this->btnRemove->Name = L"btnRemove";
	this->btnRemove->Size = System::Drawing::Size(86, 32);
	this->btnRemove->TabIndex = 1;
	this->btnRemove->Text = L"Remove";
	this->btnRemove->UseVisualStyleBackColor = true;
	this->btnRemove->Click += gcnew System::EventHandler(this, &SearchBook::btnRemove_Click);
	// 
	// panelStudent
	// 
	this->panelStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->panelStudent->Controls->Add(this->button1);
	this->panelStudent->Controls->Add(this->btnReturn);
	this->panelStudent->Controls->Add(this->btnBorrow);
	this->panelStudent->Location = System::Drawing::Point(601, 9);
	this->panelStudent->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
	this->panelStudent->Name = L"panelStudent";
	this->panelStudent->Size = System::Drawing::Size(114, 119);
	this->panelStudent->TabIndex = 6;
	this->panelStudent->Visible = false;
	// 
	// button1
	// 
	this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
	this->button1->Location = System::Drawing::Point(15, 42);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(86, 30);
	this->button1->TabIndex = 2;
	this->button1->Text = L"Book a \'Book\'";
	this->button1->UseVisualStyleBackColor = true;
	// 
	// btnReturn
	// 
	this->btnReturn->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnReturn->Location = System::Drawing::Point(17, 82);
	this->btnReturn->Name = L"btnReturn";
	this->btnReturn->Size = System::Drawing::Size(86, 30);
	this->btnReturn->TabIndex = 1;
	this->btnReturn->Text = L"Return Book";
	this->btnReturn->UseVisualStyleBackColor = true;
	this->btnReturn->Click += gcnew System::EventHandler(this, &SearchBook::btnReturn_Click);
	// 
	// btnBorrow
	// 
	this->btnBorrow->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnBorrow->Location = System::Drawing::Point(15, 2);
	this->btnBorrow->Name = L"btnBorrow";
	this->btnBorrow->Size = System::Drawing::Size(86, 30);
	this->btnBorrow->TabIndex = 0;
	this->btnBorrow->Text = L"Borrow Book";
	this->btnBorrow->UseVisualStyleBackColor = true;
	this->btnBorrow->Click += gcnew System::EventHandler(this, &SearchBook::btnBorrow_Click);
	// 
	// errorUpdate
	// 
	this->errorUpdate->AutoSize = true;
	this->errorUpdate->ForeColor = System::Drawing::Color::Red;
	this->errorUpdate->Location = System::Drawing::Point(9, 1);
	this->errorUpdate->Name = L"errorUpdate";
	this->errorUpdate->Size = System::Drawing::Size(63, 13);
	this->errorUpdate->TabIndex = 9;
	this->errorUpdate->Text = L"errorUpdate";
	this->errorUpdate->Visible = false;
	// 
	// panel1
	// 
	this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->panel1->Controls->Add(this->infoLabel);
	this->panel1->Controls->Add(this->errorUpdate);
	this->panel1->Location = System::Drawing::Point(12, 83);
	this->panel1->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(463, 45);
	this->panel1->TabIndex = 11;
	// 
	// infoLabel
	// 
	this->infoLabel->AutoSize = true;
	this->infoLabel->ForeColor = System::Drawing::Color::Green;
	this->infoLabel->Location = System::Drawing::Point(14, 24);
	this->infoLabel->Name = L"infoLabel";
	this->infoLabel->Size = System::Drawing::Size(31, 13);
	this->infoLabel->TabIndex = 10;
	this->infoLabel->Text = L"Info: ";
	this->infoLabel->Visible = false;
	// 
	// panel2
	// 
	this->panel2->Controls->Add(this->bookAddAmountTB);
	this->panel2->Controls->Add(this->panel1);
	this->panel2->Controls->Add(this->bookAddAmountLabel);
	this->panel2->Controls->Add(this->labelR);
	this->panel2->Controls->Add(this->currentBorrowDatePicker);
	this->panel2->Controls->Add(this->labelB);
	this->panel2->Controls->Add(this->panelStudent);
	this->panel2->Controls->Add(this->panelAdmin);
	this->panel2->Controls->Add(this->panelSearch);
	this->panel2->Controls->Add(this->currentReturnDatePicker);
	this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel2->Location = System::Drawing::Point(0, 0);
	this->panel2->Margin = System::Windows::Forms::Padding(0);
	this->panel2->MaximumSize = System::Drawing::Size(0, 192);
	this->panel2->MinimumSize = System::Drawing::Size(736, 192);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(736, 192);
	this->panel2->TabIndex = 12;
	// 
	// bookAddAmountTB
	// 
	this->bookAddAmountTB->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->bookAddAmountTB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->bookAddAmountTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->bookAddAmountTB->Location = System::Drawing::Point(402, 148);
	this->bookAddAmountTB->Name = L"bookAddAmountTB";
	this->bookAddAmountTB->Size = System::Drawing::Size(50, 26);
	this->bookAddAmountTB->TabIndex = 45;
	this->bookAddAmountTB->Visible = false;
	// 
	// bookAddAmountLabel
	// 
	this->bookAddAmountLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->bookAddAmountLabel->AutoSize = true;
	this->bookAddAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->bookAddAmountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->bookAddAmountLabel->Location = System::Drawing::Point(326, 141);
	this->bookAddAmountLabel->Name = L"bookAddAmountLabel";
	this->bookAddAmountLabel->Size = System::Drawing::Size(70, 39);
	this->bookAddAmountLabel->TabIndex = 43;
	this->bookAddAmountLabel->Text = L"Enter amount\r\n of books  to\r\n add";
	this->bookAddAmountLabel->Visible = false;
	// 
	// labelR
	// 
	this->labelR->Anchor = System::Windows::Forms::AnchorStyles::Right;
	this->labelR->AutoSize = true;
	this->labelR->Location = System::Drawing::Point(471, 141);
	this->labelR->Name = L"labelR";
	this->labelR->Size = System::Drawing::Size(177, 13);
	this->labelR->TabIndex = 41;
	this->labelR->Text = L"Pick Date which Book was returned";
	this->labelR->Visible = false;
	// 
	// currentBorrowDatePicker
	// 
	this->currentBorrowDatePicker->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->currentBorrowDatePicker->CalendarTrailingForeColor = System::Drawing::Color::Gray;
	this->currentBorrowDatePicker->Cursor = System::Windows::Forms::Cursors::Hand;
	this->currentBorrowDatePicker->CustomFormat = L"yyyy-MM-dd";
	this->currentBorrowDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
	this->currentBorrowDatePicker->Location = System::Drawing::Point(43, 154);
	this->currentBorrowDatePicker->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
	this->currentBorrowDatePicker->Name = L"currentBorrowDatePicker";
	this->currentBorrowDatePicker->Size = System::Drawing::Size(247, 20);
	this->currentBorrowDatePicker->TabIndex = 38;
	this->currentBorrowDatePicker->Visible = false;
	this->currentBorrowDatePicker->ValueChanged += gcnew System::EventHandler(this, &SearchBook::dateTimePicker1_ValueChanged);
	// 
	// labelB
	// 
	this->labelB->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->labelB->AutoSize = true;
	this->labelB->Location = System::Drawing::Point(40, 141);
	this->labelB->Name = L"labelB";
	this->labelB->Size = System::Drawing::Size(182, 13);
	this->labelB->TabIndex = 39;
	this->labelB->Text = L"Pick Date which Book was borrowed";
	this->labelB->Visible = false;
	// 
	// currentReturnDatePicker
	// 
	this->currentReturnDatePicker->Anchor = System::Windows::Forms::AnchorStyles::Right;
	this->currentReturnDatePicker->CalendarTrailingForeColor = System::Drawing::Color::Gray;
	this->currentReturnDatePicker->Cursor = System::Windows::Forms::Cursors::Hand;
	this->currentReturnDatePicker->CustomFormat = L"yyyy-MM-dd";
	this->currentReturnDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
	this->currentReturnDatePicker->Location = System::Drawing::Point(474, 154);
	this->currentReturnDatePicker->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
	this->currentReturnDatePicker->Name = L"currentReturnDatePicker";
	this->currentReturnDatePicker->Size = System::Drawing::Size(247, 20);
	this->currentReturnDatePicker->TabIndex = 40;
	this->currentReturnDatePicker->Visible = false;
	this->currentReturnDatePicker->ValueChanged += gcnew System::EventHandler(this, &SearchBook::dateTimePicker2_ValueChanged);
	// 
	// panelResult
	// 
	this->panelResult->Controls->Add(this->dgvSearchResult);
	this->panelResult->Controls->Add(this->label1);
	this->panelResult->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panelResult->Location = System::Drawing::Point(0, 192);
	this->panelResult->Name = L"panelResult";
	this->panelResult->Size = System::Drawing::Size(736, 269);
	this->panelResult->TabIndex = 13;
	// 
	// dgvSearchResult
	// 
	this->dgvSearchResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dgvSearchResult->Dock = System::Windows::Forms::DockStyle::Fill;
	this->dgvSearchResult->Location = System::Drawing::Point(0, 13);
	this->dgvSearchResult->Name = L"dgvSearchResult";
	this->dgvSearchResult->ReadOnly = true;
	this->dgvSearchResult->Size = System::Drawing::Size(736, 256);
	this->dgvSearchResult->TabIndex = 4;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Dock = System::Windows::Forms::DockStyle::Top;
	this->label1->Location = System::Drawing::Point(0, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(34, 13);
	this->label1->TabIndex = 3;
	this->label1->Text = L"Table";
	// 
	// SearchBook
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(736, 461);
	this->Controls->Add(this->panelResult);
	this->Controls->Add(this->panel2);
	this->MinimumSize = System::Drawing::Size(752, 500);
	this->Name = L"SearchBook";
	this->Text = L"Book Search";
	this->Load += gcnew System::EventHandler(this, &SearchBook::SearchBook_Load);
	this->panelSearch->ResumeLayout(false);
	this->panelSearch->PerformLayout();
	this->panelAdmin->ResumeLayout(false);
	this->panelStudent->ResumeLayout(false);
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->panel2->ResumeLayout(false);
	this->panel2->PerformLayout();
	this->panelResult->ResumeLayout(false);
	this->panelResult->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchResult))->EndInit();
	this->ResumeLayout(false);

}

void LibraryManagementSystem::SearchBook::InititiazeMyVariables(void)
{
	//
	// Objects
	//
	book = gcnew Book();
	bb = gcnew BorrowedBooks();
	rb = gcnew ReturnedBooks();
	//
	// Booleans
	//
	isMatchCase = false;
	isMatchWholeWord = false;
	usingCombobox = false;
	borrowDateSet = false;
	returnDateSet = false;
	borrowDateShown = false;
	returnDateShown = false;
	//
	// int
	//
	totalBooks = 0;
	// 
	// Date
	//
	// currentBorrowDatePicker
	if (USING_CURRENT_TIME) {
		// on second thought... if we are using current time... 
		// then we are not gonna allow user to pick a return nor borrow date as
		// this will happen automatically
		currentBorrowDatePicker->Value = System::DateTime::Now; 
		currentReturnDatePicker->Value = System::DateTime::Now; 
	}
	else {
		currentBorrowDatePicker->MinDate = System::DateTime::Now.AddYears(-20);
		currentReturnDatePicker->MinDate = System::DateTime::Now.AddYears(-20);
		currentBorrowDatePicker->Value = System::DateTime::Now;
		currentReturnDatePicker->Value = System::DateTime::Now;
		currentBorrowDatePicker->MaxDate = System::DateTime::Now;
		currentReturnDatePicker->MaxDate = System::DateTime::Now; 
	}
	
	// Previous dates
	prevDateBorrow = currentBorrowDatePicker->Value;
	prevDateReturn = currentReturnDatePicker->Value;	
}

inline System::Void SearchBook::btnSearchMatchWholeWord_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isMatchWholeWord) {
		isMatchWholeWord = false;
		this->btnSearchMatchWholeWord->BackColor = System::Drawing::Color::LightGray;
		this->btnSearchMatchWholeWord->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
		this->btnSearchMatchWholeWord->FlatAppearance->BorderSize = 1;
	}
	else {
		isMatchWholeWord = true;
		this->btnSearchMatchWholeWord->BackColor = System::Drawing::Color::LightCoral;
		this->btnSearchMatchWholeWord->FlatAppearance->BorderColor = System::Drawing::Color::Red;
		this->btnSearchMatchWholeWord->FlatAppearance->BorderSize = 2;
	}
	btnSearch->PerformClick();
}

String^ SearchBook::sqlQuery() {
	String^ searchColumn = cbSearchBy->SelectedItem->ToString();
	String^ searchText = tbSearch->Text->Trim();

	String^ allowedColumns =
		" SELECT b.bookID AS 'Book ID', "
		" b.title AS Title, "
		" a.authorNames AS Author, "
		" p.publisherName AS Publisher, "
		" b.publicationDate, b.ISBN AS ISBN, "
		" g.genre_name AS Genre, "
		" c.categoryName AS Category, "
		" b.totalCopies AS 'Total Copies'"
		" FROM "
		" Books b "
		" INNER JOIN BookGenres g on g.genreID = b.genreID "
		" INNER JOIN Authors a ON b.authorID = a.authorID "
		" INNER JOIN Publishers p ON b.publisherID = p.publisherID "
		" INNER JOIN BookCategories c ON g.categoryID = c.categoryID ";

	String^ queryBookTitle, ^ queryISBN, ^ queryAuthor, ^ queryPublisher;

	
	// case 1 is match case
	if (isMatchCase && !isMatchWholeWord) {
		queryBookTitle =
			allowedColumns + " WHERE b.title LIKE '%" + searchText
			+ "%' ;";
		queryISBN =
			allowedColumns + " WHERE b.ISBN LIKE '%" + searchText + "%'; ";
		queryAuthor =
			allowedColumns + " WHERE a.authorNames LIKE '%" + searchText + "%'; ";
		queryPublisher =
			allowedColumns + " WHERE p.publisherName LIKE '%" + searchText + "%';";
	}
	else if (isMatchCase && isMatchWholeWord) {
		queryBookTitle =
			allowedColumns + " WHERE b.title = '" + searchText
			+ "' ;";
		queryISBN =
			allowedColumns + " WHERE b.ISBN = '" + searchText + "'; ";
		queryAuthor =
			allowedColumns + " WHERE a.authorNames = '" + searchText + "'; ";
		queryPublisher =
			allowedColumns + " WHERE p.publisherName = '" + searchText + "';";
	}
	else if (!isMatchCase && isMatchWholeWord) {
		searchText = searchText->ToLower();
		queryBookTitle =
			allowedColumns + " WHERE LOWER([title]) = '" + searchText
			+ "' ;";
		queryISBN =
			allowedColumns + " WHERE b.ISBN = '" + searchText + "'; ";
		queryAuthor =
			allowedColumns + " WHERE a.authorNames = '" + searchText + "'; ";
		queryPublisher =
			allowedColumns + " WHERE LOWER(p.publisherName) = '" + searchText + "';";
	}
	else {
		searchText = searchText->ToLower();
		queryBookTitle =
			allowedColumns + " WHERE LOWER([title]) LIKE '%" + searchText
			+ "%' ;";
		queryISBN =
			allowedColumns + " WHERE b.ISBN LIKE '%" + searchText + "%'; ";
		queryAuthor =
			allowedColumns + " WHERE a.authorNames LIKE '%" + searchText + "%'; ";
		queryPublisher =
			allowedColumns + " WHERE LOWER(p.publisherName) LIKE '%" + searchText + "%';";
	}
	

	String^ queryGenre = allowedColumns + " WHERE g.genre_name ='" + "" + "'; ";
	String^ queryCategory = allowedColumns + " WHERE c.categoryName='" + "" + "'; ";

	if (searchColumn == L"ISBN") return queryISBN;
	else if (searchColumn == L"Author") return queryAuthor;
	else if (searchColumn == L"Publisher") return queryPublisher;
	else if (searchColumn == L"Category") return queryCategory;
	else if (searchColumn == L"Genre") return queryGenre;
	else return queryBookTitle;
}

inline System::Void SearchBook::SearchBook_Load(System::Object^ sender, System::EventArgs^ e) {
	re_populateComboBox(cb2, "genre_name", "BookGenres");
	re_populateComboBox(cb3, "categoryName", "BookCategories");
	cbSearchBy->SelectedIndex = 0;
	btnSearch->PerformClick();
	if (_user->userType == "Student") {
		panelStudent->Visible = true;
		panelAdmin->Visible = false;
	}
	else {
		panelAdmin->Visible = true;
		panelStudent->Visible = false;
	}
}

inline System::Void SearchBook::cbSearchBy_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selected = cbSearchBy->SelectedItem->ToString();
	if ( selected == "Genre" ){
		this->tbSearch->Visible = false;
		this->cb2->Visible = true;
		this->cb3->Visible = false;
	}
	else if (selected == "Category") {
		this->tbSearch->Visible = false;
		this->cb2->Visible = false;
		this->cb3->Visible = true;
	}
	else {
		this->tbSearch->Visible = true;
		this->cb2->Visible = false;
		this->cb3->Visible = false;
	}
}

inline System::Void SearchBook::btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int bookID = Convert::ToInt32(dgvSearchResult->CurrentRow->Cells["Book ID"]->Value->ToString());
		errorUpdate->Visible = false;		
		UpdateBook^ updateForm = gcnew UpdateBook(bookID);
		this->Hide();
		updateForm->ShowDialog();
		this->Show();
	}
	catch (Exception^ ex) {
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
		return;
	}
}

inline System::Void SearchBook::btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int bookID = Convert::ToInt32(dgvSearchResult->CurrentRow->Cells["Book ID"]->Value->ToString());

		Book^ book = gcnew Book();
		book->InitializeVariables(bookID); 
		errorUpdate->Visible = false;

		if (book->totalBorrowed == 0) {
			WFDR conRmv = MessageBox::Show("Do you want to remove " + book->bookTitle + " by " + book->authorNames + " from the System?", "Library Management App: Remove BOOK.", MessageBoxButtons::YesNo);

			if (conRmv == WFDR::Yes) {
				String^ bid = Convert::ToString(book->bookID);
				bool ax = check_existence("DELETE FROM ReturnedBooks WHERE bookID=" + book->bookID.ToString() +
					";DELETE FROM BorrowedBooks WHERE bookID=" + book->bookID.ToString() +
					";DELETE FROM Books WHERE bookID = " + book->bookID.ToString()); 
				MessageBox::Show("Successfully removed book!" + ax.ToString(), "Library Management App: Book removed!");
			}
		}
		else if (book->totalBorrowed == 1) MessageBox::Show("One student is currently in possession of this book",
			"Library Management App: Unable to remove book!");
		else MessageBox::Show("Some of the exact same books are currently still in student's possession! \nPlease alert them to return first!",
			"Library Management System: Unable to remove book!");
	}
	catch (Exception^ ex) {
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
	}
}

inline System::Void SearchBook::btnBorrow_Click(System::Object^ sender, System::EventArgs^ e) {
	labelR->Visible = false; // only focus on Borrow components!
	currentReturnDatePicker->Visible = false;

	if (!USING_CURRENT_TIME)
		// first we must ensure that we show the datetimepicker for the borrow part
		// but only if the borrowDateShow is true else we hide it
		if (borrowDateShown) {
			currentBorrowDatePicker->MaxDate = System::DateTime::Now;

			infoLabel->Text = "INFO: Please choose the borrow date and then try borrowing again.";
			infoLabel->Visible = true;

			labelB->Visible = true;
			currentBorrowDatePicker->Visible = true;
			// since this is shown, user must then be allowed to choose a borrow date
			return; // so we terminate any further progress into this function
		}
		else {
			infoLabel->Visible = false;
			
			labelB->Visible = false;
			currentBorrowDatePicker->Visible = false;
			// if its hidden then we must definately show it next time
			borrowDateShown = true;
		}
	else {
		infoLabel->Visible = false;
		labelB->Visible = false;
		currentBorrowDatePicker->Visible = false;
		currentBorrowDatePicker->Value = System::DateTime::Now;
	}

	borrowDateSet = true;

	try {
		int bookID = Convert::ToInt32(dgvSearchResult->CurrentRow->Cells["Book ID"]->Value->ToString());
		errorUpdate->Visible = false;
		
		book->InitializeVariables(bookID); 
		bb->bookID = bookID;
		/*
			WHEN WE BORROW, WE MUST UPDATE BORROWEDBOOKS TABLE FULLY 
			THEN UPDATE RETURNEDBOOKS TABLE PARTIALLY AS WITH RETURNED='NO'
		*/
		if (book->totalBorrowed < book->totalCopies) {
			// we need to set this first
			bb->borrowedDate = currentBorrowDatePicker->Value;
			bb->getDueDate(bb->borrowedDate);
			// prompt for confirmation
			WFDR res = MessageBox::Show("Do you want to borrow the book: " + book->bookTitle + " by " + book->authorNames,
				"Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (res != WFDR::Yes) return;
			// get borrowed date (manually) use a datetimepicker -> current day is the maxdate
			// then getDueDate authomatically
			// borrow

			SqlConnection^ connection = StartConnection();
			SqlCommand^ queryCommand = gcnew SqlCommand(); 
			queryCommand->Connection = connection;  

			String^ queryBB = "INSERT INTO BorrowedBooks ([universityID], [bookID], [borrowedDate], [dueDate]) "
				" VALUES(@UserID, @BookID, @BorrowedDate, @DueDate); ";
			
			String^ selectQuery = "SELECT borrowID FROM BorrowedBooks WHERE universityID=@UserID AND bookID=@BookID; ";

			queryCommand->CommandText = queryBB + selectQuery;

			queryCommand->Parameters->AddWithValue("@UserID", _user->universityID);
			queryCommand->Parameters->AddWithValue("@BookID", bb->bookID);
			queryCommand->Parameters->AddWithValue("@BorrowedDate", bb->borrowedDate);
			queryCommand->Parameters->AddWithValue("@DueDate", bb->dueDate);

			SqlDataReader^ reader = queryCommand->ExecuteReader();

			if (reader->Read()) {
				bb->borrowID = reader->GetInt32(0);
			}
			reader->Close();
			queryCommand->CommandText = "INSERT INTO ReturnedBooks ([borrowID], [bookID], [universityID], [returned])  VALUES(@BorrowID, @BookID, @UserID, @Returned); ";
			queryCommand->Parameters->AddWithValue("@BorrowID", bb->borrowID);
			queryCommand->Parameters->AddWithValue("@Returned", "NO"); 
			
			int rowsAffected = queryCommand->ExecuteNonQuery(); 

			if (rowsAffected == 0) MessageBox::Show("???not update '_Return_Initit_'; ");
		}
		else {
			labelB->Visible = false;
			currentBorrowDatePicker->Visible = false;
			MessageBox::Show("These books are currently borrowed/booked out! \nPlease try again later!",
				"Book not available");
			return;
		}
	}
	catch (Exception^ ex) {
		labelB->Visible = false;
		currentBorrowDatePicker->Visible = false;
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
	}
}

inline System::Void SearchBook::btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
	// ensure this is a student
	if (_user->userType != "Student") return;
	
	// not part of this!
	labelB->Visible = false;
	currentBorrowDatePicker->Visible = false;

	// the return date will always be greater than the borrowed date!
	currentReturnDatePicker->MinDate = bb->borrowedDate;

	if (!USING_CURRENT_TIME) 
		// first we must ensure that we show the datetimepicker for the borrow part
		// but only if the borrowDateShow is true else we hide it
		if (returnDateShown) {
			currentReturnDatePicker->MaxDate = System::DateTime::Now;

			infoLabel->Text = "INFO: Please choose the return date and then try returning again.";
			infoLabel->Visible = true;

			labelR->Visible = true;
			currentReturnDatePicker->Visible = true;
			// since this is shown, user must then be allowed to choose a borrow date
			return; // so we terminate any further progress into this function
		}
		else {
			currentReturnDatePicker->MaxDate = DateTime::Now;
			infoLabel->Visible = false;
			labelR->Visible = false;
			currentReturnDatePicker->Visible = false;
			// if its hidden then we must definately show it next time
			returnDateShown = true;
		}
	else {
		infoLabel->Visible = false;
		labelR->Visible = false;
		currentReturnDatePicker->Visible = false;
		currentReturnDatePicker->Value = System::DateTime::Now;
	}

	returnDateSet = true;
	errorUpdate->Visible = false;

	try {
		int bookID = Convert::ToInt32(dgvSearchResult->CurrentRow->Cells["Book ID"]->Value->ToString());
		book->InitializeVariables(bookID);
		bb->InitializeVariables(bookID, _user->universityID);
		rb->InitializeVariables(bb->borrowID);

		if ((rb->returned == "NO") && (bb->universityID == _user->universityID) && (book->totalBorrowed > 0)) {
			WFDR res = MessageBox::Show("Do you want to return the book: " + book->bookTitle + " by " + book->authorNames,
				"Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (res != WFDR::Yes) return; // abort

			rb->returnDate = currentReturnDatePicker->Value;
			if (rb->returnDate > bb->dueDate) rb->returned = "LATE";
			else if (rb->returnDate > bb->borrowedDate) rb->returned = "YES";
			else {
				MessageBox::Show("Wha????");
				return;
			}
			
			// one less book!
			book->totalBorrowed = book->totalBorrowed - 1;
			

			SqlConnection^ connection = StartConnection();
			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandText = "UPDATE ReturnedBooks SET [returnDate]=@ReturnDate, [returned]=@Returned WHERE returnID=@ReturnID;"
				"UPDATE Books SET [totalBorrowed]=@TotalBorrowed WHERE bookID=@BookID";
			command->Parameters->AddWithValue("@ReturnDate", rb->returnDate);
			command->Parameters->AddWithValue("@Returned", rb->returned);
			command->Parameters->AddWithValue("@ReturnID", rb->returnID);
			command->Parameters->AddWithValue("@TotalBorrowed", book->totalBorrowed);
			command->Parameters->AddWithValue("@BookID", book->bookID);

			int rowsAffected = command->ExecuteNonQuery(); 

			connection->Close(); 
		}
		else {
			MessageBox::Show("You have not borrowed this book! :(", 
				"Invalid Return Attempt", MessageBoxButtons::OK ,MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ ex) {
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
	}
}

inline System::Void SearchBook::btnBookADD_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int bookID = Convert::ToInt32(dgvSearchResult->CurrentRow->Cells["Book ID"]->Value->ToString());
		errorUpdate->Visible = false;
		
		book->InitializeVariables(bookID);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Please ensure you are connected to the internet and have a good connection.\n" + ex->Message);
		return;
	}

	WFDR res = MessageBox::Show("Do you want to add more books of " + book->bookTitle +
		"\n\n Select 'Yes' to add this book or 'No' to add a new book!",
		"Existing or New?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (res == WFDR::No) {
		bookAddAmountLabel->Visible = false;
		bookAddAmountTB->Visible = false;
		
		AddBook^ bookAddForm = gcnew AddBook();
		this->Hide();
		bookAddForm->ShowDialog();
		this->Show();
	}
	else {
		bookAddAmountLabel->Visible = true;
		bookAddAmountTB->Visible = true;

		int x = 0;

		if (IsOnlyNumeric(bookAddAmountTB->Text)) // if we can convert this to an int wirthout an error.
			x = Convert::ToInt32(bookAddAmountTB->Text);

		totalBooks = book->totalCopies + x; 

		try {
			SqlConnection^ connection = StartConnection();
				
			SqlCommand^ queryCommand = gcnew SqlCommand();
			queryCommand->Connection = connection;

			String^ queryBB = "UPDATE Books SET [totalCopies] = @TotalCopies  WHERE bookID=@BookID; ";

			queryCommand->CommandText = queryBB;  
			queryCommand->Parameters->AddWithValue("@BookID", book->bookID); 
			queryCommand->Parameters->AddWithValue("@TotalCopies", totalBooks); 

			bookAddAmountLabel->Visible = false;
			bookAddAmountTB->Visible = false;
			
			int rowsAffected = queryCommand->ExecuteNonQuery();

			if (!rowsAffected) MessageBox::Show("Something went wrong...might not be updated");
			connection->Close();
		}
		catch (Exception^ ex) {
			errorUpdate->Text = "An error occured: " + ex->Message;
			errorUpdate->Visible = true;
		}
	}
}

inline System::Void LibraryManagementSystem::SearchBook::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	borrowDateSet = true;
}

inline System::Void LibraryManagementSystem::SearchBook::dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	returnDateSet = true;
}
