#include "SearchUser.h"

using namespace LibraryManagementSystem;


/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void LibraryManagementSystem::SearchUser::InitializeComponent(void)
{
	this->tbSearch = (gcnew System::Windows::Forms::TextBox());
	this->panelSearch = (gcnew System::Windows::Forms::Panel());
	this->labelSearchBy = (gcnew System::Windows::Forms::Label());
	this->cbSearchBy = (gcnew System::Windows::Forms::ComboBox());
	this->btnSearchMatchWholeWord = (gcnew System::Windows::Forms::Button());
	this->btnSearchMatchCase = (gcnew System::Windows::Forms::Button());
	this->btnSearch = (gcnew System::Windows::Forms::Button());
	this->panelAdmin = (gcnew System::Windows::Forms::Panel());
	this->btnViewUser = (gcnew System::Windows::Forms::Button());
	this->btnUpdate = (gcnew System::Windows::Forms::Button());
	this->btnRemove = (gcnew System::Windows::Forms::Button());
	this->errorUpdate = (gcnew System::Windows::Forms::Label());
	this->errorRemove = (gcnew System::Windows::Forms::Label());
	this->warningAdminM = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->panelResult = (gcnew System::Windows::Forms::Panel());
	this->dgvSearchResult = (gcnew System::Windows::Forms::DataGridView());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->panelSearch->SuspendLayout();
	this->panelAdmin->SuspendLayout();
	this->panel1->SuspendLayout();
	this->panel2->SuspendLayout();
	this->panelResult->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchResult))->BeginInit();
	this->SuspendLayout();
	// 
	// tbSearch
	// 
	this->tbSearch->Location = System::Drawing::Point(18, 8);
	this->tbSearch->Margin = System::Windows::Forms::Padding(8);
	this->tbSearch->Name = L"tbSearch";
	this->tbSearch->Size = System::Drawing::Size(305, 20);
	this->tbSearch->TabIndex = 0;
	// 
	// panelSearch
	// 
	this->panelSearch->Controls->Add(this->labelSearchBy);
	this->panelSearch->Controls->Add(this->cbSearchBy);
	this->panelSearch->Controls->Add(this->btnSearchMatchWholeWord);
	this->panelSearch->Controls->Add(this->btnSearchMatchCase);
	this->panelSearch->Controls->Add(this->btnSearch);
	this->panelSearch->Controls->Add(this->tbSearch);
	this->panelSearch->Location = System::Drawing::Point(14, 3);
	this->panelSearch->Name = L"panelSearch";
	this->panelSearch->Size = System::Drawing::Size(420, 81);
	this->panelSearch->TabIndex = 1;
	// 
	// labelSearchBy
	// 
	this->labelSearchBy->AutoSize = true;
	this->labelSearchBy->Location = System::Drawing::Point(219, 33);
	this->labelSearchBy->Name = L"labelSearchBy";
	this->labelSearchBy->Size = System::Drawing::Size(61, 13);
	this->labelSearchBy->TabIndex = 5;
	this->labelSearchBy->Text = L"Search by: ";
	// 
	// cbSearchBy
	// 
	this->cbSearchBy->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->cbSearchBy->FormattingEnabled = true;
	this->cbSearchBy->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Name", L"University ID", L"ID", L"Email", L"Phone Number" });
	this->cbSearchBy->Location = System::Drawing::Point(219, 52);
	this->cbSearchBy->Name = L"cbSearchBy";
	this->cbSearchBy->Size = System::Drawing::Size(183, 21);
	this->cbSearchBy->TabIndex = 4;
	// 
	// btnSearchMatchWholeWord
	// 
	this->btnSearchMatchWholeWord->BackColor = System::Drawing::Color::LightGray;
	this->btnSearchMatchWholeWord->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
	this->btnSearchMatchWholeWord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnSearchMatchWholeWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->btnSearchMatchWholeWord->Location = System::Drawing::Point(99, 52);
	this->btnSearchMatchWholeWord->Name = L"btnSearchMatchWholeWord";
	this->btnSearchMatchWholeWord->Size = System::Drawing::Size(114, 23);
	this->btnSearchMatchWholeWord->TabIndex = 3;
	this->btnSearchMatchWholeWord->Text = L"Match Whole Word";
	this->btnSearchMatchWholeWord->UseVisualStyleBackColor = false;
	this->btnSearchMatchWholeWord->Click += gcnew System::EventHandler(this, &SearchUser::btnSearchMatchWholeWord_Click);
	// 
	// btnSearchMatchCase
	// 
	this->btnSearchMatchCase->BackColor = System::Drawing::Color::LightGray;
	this->btnSearchMatchCase->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
	this->btnSearchMatchCase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnSearchMatchCase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->btnSearchMatchCase->Location = System::Drawing::Point(18, 52);
	this->btnSearchMatchCase->Name = L"btnSearchMatchCase";
	this->btnSearchMatchCase->Size = System::Drawing::Size(75, 23);
	this->btnSearchMatchCase->TabIndex = 2;
	this->btnSearchMatchCase->Text = L"Match Case";
	this->btnSearchMatchCase->UseVisualStyleBackColor = false;
	this->btnSearchMatchCase->Click += gcnew System::EventHandler(this, &SearchUser::btnSearchMatchCase_Click);
	// 
	// btnSearch
	// 
	this->btnSearch->Location = System::Drawing::Point(329, 5);
	this->btnSearch->Margin = System::Windows::Forms::Padding(8);
	this->btnSearch->Name = L"btnSearch";
	this->btnSearch->Size = System::Drawing::Size(73, 24);
	this->btnSearch->TabIndex = 1;
	this->btnSearch->Text = L"Search";
	this->btnSearch->UseVisualStyleBackColor = true;
	this->btnSearch->Click += gcnew System::EventHandler(this, &SearchUser::btnSearch_Click);
	// 
	// panelAdmin
	// 
	this->panelAdmin->Controls->Add(this->btnRemove);
	this->panelAdmin->Location = System::Drawing::Point(440, 3);
	this->panelAdmin->Name = L"panelAdmin";
	this->panelAdmin->Size = System::Drawing::Size(124, 58);
	this->panelAdmin->TabIndex = 6;
	// 
	// btnViewUser
	// 
	this->btnViewUser->Location = System::Drawing::Point(590, 90);
	this->btnViewUser->Name = L"btnViewUser";
	this->btnViewUser->Size = System::Drawing::Size(94, 36);
	this->btnViewUser->TabIndex = 2;
	this->btnViewUser->Text = L"View";
	this->btnViewUser->UseVisualStyleBackColor = true;
	this->btnViewUser->Click += gcnew System::EventHandler(this, &SearchUser::btnViewUser_Click);
	// 
	// btnUpdate
	// 
	this->btnUpdate->Location = System::Drawing::Point(454, 90);
	this->btnUpdate->Name = L"btnUpdate";
	this->btnUpdate->Size = System::Drawing::Size(94, 36);
	this->btnUpdate->TabIndex = 0;
	this->btnUpdate->Text = L"Update";
	this->btnUpdate->UseVisualStyleBackColor = true;
	this->btnUpdate->Click += gcnew System::EventHandler(this, &SearchUser::btnUpdate_Click);
	// 
	// btnRemove
	// 
	this->btnRemove->Location = System::Drawing::Point(14, 10);
	this->btnRemove->Name = L"btnRemove";
	this->btnRemove->Size = System::Drawing::Size(94, 36);
	this->btnRemove->TabIndex = 1;
	this->btnRemove->Text = L"Remove";
	this->btnRemove->UseVisualStyleBackColor = true;
	this->btnRemove->Click += gcnew System::EventHandler(this, &SearchUser::btnRemove_Click);
	// 
	// errorUpdate
	// 
	this->errorUpdate->AutoSize = true;
	this->errorUpdate->ForeColor = System::Drawing::Color::Red;
	this->errorUpdate->Location = System::Drawing::Point(16, 2);
	this->errorUpdate->Name = L"errorUpdate";
	this->errorUpdate->Size = System::Drawing::Size(63, 13);
	this->errorUpdate->TabIndex = 7;
	this->errorUpdate->Text = L"errorUpdate";
	this->errorUpdate->Visible = false;
	// 
	// errorRemove
	// 
	this->errorRemove->AutoSize = true;
	this->errorRemove->ForeColor = System::Drawing::Color::Red;
	this->errorRemove->Location = System::Drawing::Point(16, 19);
	this->errorRemove->Name = L"errorRemove";
	this->errorRemove->Size = System::Drawing::Size(68, 13);
	this->errorRemove->TabIndex = 8;
	this->errorRemove->Text = L"errorRemove";
	this->errorRemove->Visible = false;
	// 
	// warningAdminM
	// 
	this->warningAdminM->AutoSize = true;
	this->warningAdminM->ForeColor = System::Drawing::Color::Red;
	this->warningAdminM->Location = System::Drawing::Point(587, 9);
	this->warningAdminM->Name = L"warningAdminM";
	this->warningAdminM->Size = System::Drawing::Size(116, 39);
	this->warningAdminM->TabIndex = 9;
	this->warningAdminM->Text = L"Nope! What do you\r\nthink you are doing\?\r\nThis is the Main Admin!";
	this->warningAdminM->Visible = false;
	// 
	// panel1
	// 
	this->panel1->Controls->Add(this->errorRemove);
	this->panel1->Controls->Add(this->errorUpdate);
	this->panel1->Location = System::Drawing::Point(14, 90);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(420, 40);
	this->panel1->TabIndex = 10;
	// 
	// panel2
	// 
	this->panel2->Controls->Add(this->btnUpdate);
	this->panel2->Controls->Add(this->btnViewUser);
	this->panel2->Controls->Add(this->panel1);
	this->panel2->Controls->Add(this->warningAdminM);
	this->panel2->Controls->Add(this->panelAdmin);
	this->panel2->Controls->Add(this->panelSearch);
	this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel2->Location = System::Drawing::Point(0, 0);
	this->panel2->MaximumSize = System::Drawing::Size(736, 143);
	this->panel2->MinimumSize = System::Drawing::Size(736, 143);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(736, 143);
	this->panel2->TabIndex = 11;
	// 
	// panelResult
	// 
	this->panelResult->Controls->Add(this->dgvSearchResult);
	this->panelResult->Controls->Add(this->label1);
	this->panelResult->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panelResult->Location = System::Drawing::Point(0, 143);
	this->panelResult->Name = L"panelResult";
	this->panelResult->Size = System::Drawing::Size(736, 318);
	this->panelResult->TabIndex = 12;
	// 
	// dgvSearchResult
	// 
	this->dgvSearchResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dgvSearchResult->Dock = System::Windows::Forms::DockStyle::Fill;
	this->dgvSearchResult->Location = System::Drawing::Point(0, 13);
	this->dgvSearchResult->Name = L"dgvSearchResult";
	this->dgvSearchResult->ReadOnly = true;
	this->dgvSearchResult->Size = System::Drawing::Size(736, 305);
	this->dgvSearchResult->TabIndex = 4;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Dock = System::Windows::Forms::DockStyle::Top;
	this->label1->Location = System::Drawing::Point(0, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(35, 13);
	this->label1->TabIndex = 3;
	this->label1->Text = L"label1";
	// 
	// SearchUser
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(736, 461);
	this->Controls->Add(this->panelResult);
	this->Controls->Add(this->panel2);
	this->MinimumSize = System::Drawing::Size(752, 500);
	this->Name = L"SearchUser";
	this->Text = L"User Search";
	this->Load += gcnew System::EventHandler(this, &SearchUser::SearchStudent_Load);
	this->panelSearch->ResumeLayout(false);
	this->panelSearch->PerformLayout();
	this->panelAdmin->ResumeLayout(false);
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->panel2->ResumeLayout(false);
	this->panel2->PerformLayout();
	this->panelResult->ResumeLayout(false);
	this->panelResult->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchResult))->EndInit();
	this->ResumeLayout(false);

}

inline System::Void SearchUser::btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ strQuery =
		sqlQuery();


	
	SqlConnection^ connection = StartConnection();
	SqlCommand^ command = gcnew SqlCommand(strQuery, connection);

	try {
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
		MessageBox::Show("An error occurred: " + ex->Message + "Please contact admin if error persists.");
		//Clipboard::SetText(ex->Message);
	}
}

inline System::Void SearchUser::btnSearchMatchCase_Click(System::Object^ sender, System::EventArgs^ e) {
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
}

inline System::Void SearchUser::btnSearchMatchWholeWord_Click(System::Object^ sender, System::EventArgs^ e) {
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
}

inline String^ SearchUser::sqlQuery() {
	String^ searchColumn = cbSearchBy->SelectedItem->ToString();
	String^ searchText = tbSearch->Text->Trim();
	String^ allowedColumns;
	allowedColumns =
		" [universityID] AS 'University ID', userType AS 'User Type', [status] AS 'Status', [lastName] AS 'Surname', [firstName] AS 'Name', [email] AS 'Email',"
		" [dateOfBirth] AS 'Birth Date', [gender] AS 'Gender', [idNumber] AS 'ID', [phoneNumber] AS 'Phone', [userImage] AS 'Picture', [Blocked] ";
	if (searcher->userType == "Student")
		allowedColumns =
			" [universityID] AS 'University ID', userType AS 'User Type', [status] AS 'Status', [lastName] AS 'Surname', [firstName] AS 'Name', [email] AS 'Email',"
			" [gender] AS 'Gender', [userImage] AS 'Picture' ";


	String^ queryNameAndSurname, ^ queryStudentNumber, ^ queryID, ^ queryEmail, ^ queryPhone;

	// case 1 is match case
	if (isMatchCase && !isMatchWholeWord) {
		queryNameAndSurname =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " firstName LIKE '%" + searchText
			+ "%' OR lastName LIKE '%" + searchText + "%' ;";
		queryStudentNumber =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " CAST([universityID] AS VARCHAR(50)) LIKE '%" + searchText + "%'; ";
		queryID =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " idNumber LIKE '%" + searchText + "%'; ";
		queryEmail =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " email LIKE '%" + searchText + "%';";
		queryPhone =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " phoneNumber LIKE '%" + searchText + "%';";
	}
	else if (isMatchCase && isMatchWholeWord) {
		queryNameAndSurname =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " firstName = '" + searchText
			+ "' OR lastName = '" + searchText + "' ;";
		queryStudentNumber =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " universityID = " + searchText + "; ";
		queryID =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " idNumber = '" + searchText + "'; ";
		queryEmail =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " email = '" + searchText + "';";
		queryPhone =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " phoneNumber = '" + searchText + "';";
	}
	else if (!isMatchCase && isMatchWholeWord) {
		searchText = searchText->ToLower();
		queryNameAndSurname =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " LOWER(firstName) = '" + searchText
			+ "' OR LOWER(lastName) = '" + searchText + "' ;";
		queryStudentNumber =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " universityID = " + searchText + "; ";
		queryID =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " idNumber = '" + searchText + "'; ";
		queryEmail =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " LOWER(email) = '" + searchText + "';";
		queryPhone =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " phoneNumber = '" + searchText + "';";
	}
	else {
		searchText = searchText->ToLower();
		queryNameAndSurname =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " LOWER([firstName]) LIKE '%" + searchText
			+ "%' OR LOWER(lastName) LIKE '%" + searchText + "%' ;";
		queryStudentNumber =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " universityID LIKE '%" + searchText + "%'; ";
		queryID =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " idNumber LIKE '%" + searchText + "%'; ";
		queryEmail =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " LOWER(email) LIKE '%" + searchText + "%';";
		queryPhone =
			"SELECT " + allowedColumns + " FROM Users WHERE " + searchUserType + " phoneNumber LIKE '%" + searchText + "%';";
	}

	if (searchColumn == L"University ID") return queryStudentNumber;
	else if (searchColumn == L"ID") return queryID;
	else if (searchColumn == L"Email") return queryEmail;
	else if (searchColumn == L"Phone Number") return queryPhone;
	else return queryNameAndSurname;

}

inline System::Void SearchUser::btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	errorRemove->Visible = false;
	try {
		String^ universityID = dgvSearchResult->CurrentRow->Cells["University ID"]->Value->ToString();
		String^ userType = dgvSearchResult->CurrentRow->Cells["User Type"]->Value->ToString();
		errorUpdate->Visible = false;

		// To prevent unnecessary re-connecting to the database...


		if (universityID == searcher->universityID) {
			if (searcher->userType == "Student") {
				this->Hide();
				UpdateUser^ userUpdate = gcnew UpdateUser(searcher);
				userUpdate->ShowDialog();
				btnSearch->PerformClick();
				this->Show();
			}
			else { // Admin!!
				this->Hide();
				UpdateUser^ userUpdate = gcnew UpdateUser(searcher, "Updating");
				userUpdate->ShowDialog();
				btnSearch->PerformClick();
				this->Show();
			}
			return;
		}

		// definitely not the searcher, because we reached this line...

		if (userType == "Main Admin") { 
			warningAdminM->Text = L"Nope! What do you\r\nthink you are doing\?\r\nThis is the Main Admin!";
			warningAdminM->Visible = true;
			return;
		}
		else if (userType == "Standard Admin" && searcher->userType != "Main Admin") {
			warningAdminM->Text = L"You cannot update\r\nanother Admin's details!";
			warningAdminM->Visible = true;
			return;
		}
		else {
			warningAdminM->Visible = false;
		}
		
		User^ updateThisUser = gcnew User();
		updateThisUser->InitializeVariables(universityID);

		this->Hide();
		UpdateUser^ userUpdate = gcnew UpdateUser(updateThisUser, "Updating");
		userUpdate->ShowDialog();
		btnSearch->PerformClick();
		this->Show();
	}
	catch (Exception^ ex) {
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
	}
}

inline System::Void SearchUser::btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	errorUpdate->Visible = false;
	try {
		String^ universityID = dgvSearchResult->CurrentRow->Cells["University ID"]->Value->ToString();

		User^ removeThisUser = gcnew User();
		removeThisUser->InitializeVariables(universityID);
		errorRemove->Visible = false;

		if (removeThisUser->userType == "Main Admin") {
			warningAdminM->Text = L"Nope! What do you\r\nthink you are doing\?\r\nThis is the Main Admin!";
			warningAdminM->Visible = true;
			return;
		}
		else {
			warningAdminM->Visible = false;
		}
		if (removeThisUser->userType == "Standard Admin") {
			warningAdminM->Text = L"You cannot remove the Admin!";
			warningAdminM->Visible = true;
			return;
		}
		else {
			warningAdminM->Visible = false;
		}

		WFDR conRmv = MessageBox::Show("Do you want to remove " + removeThisUser->lastName + " " 
			+ removeThisUser->firstName + " from the System?", "Library Management App: Remove user.", MessageBoxButtons::YesNo);

		if (conRmv == WFDR::Yes) {
			if (removeThisUser->universityID == searcher->universityID)
			{
				warningAdminM->Text = L"You cannot remove yourself!";
				warningAdminM->Visible = true;
				return;
			}
			warningAdminM->Visible = false;
			check_existence("DELETE FROM Users WHERE universityID = " + removeThisUser->universityID);
		}
	}
	catch (Exception^ ex) {
		errorRemove->Text = "An error occured: " + ex->Message;
		errorRemove->Visible = true;
	}
}

inline System::Void SearchUser::SearchStudent_Load(System::Object^ sender, System::EventArgs^ e) {
	cbSearchBy->SelectedIndex = 0;
	btnSearch->PerformClick();
}

inline System::Void SearchUser::dgvSearchResult_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		String^ universityID = dgvSearchResult->CurrentRow->Cells["University ID"]->Value->ToString();
		btnRemove->Visible = true;
		btnUpdate->Visible = true;
	}
	catch (Exception^ ex) {
		ex;
		btnRemove->Visible = false;
		btnUpdate->Visible = false;
	}
}


inline System::Void SearchUser::dgvSearchResult_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		String^ universityID = dgvSearchResult->CurrentRow->Cells["University ID"]->Value->ToString();
		btnRemove->Visible = true;
		btnUpdate->Visible = true;
	}
	catch (Exception^ ex) {
		ex;
		btnRemove->Visible = false;
		btnUpdate->Visible = false;
	}
}

inline System::Void LibraryManagementSystem::SearchUser::btnViewUser_Click(System::Object^ sender, System::EventArgs^ e) {
	errorRemove->Visible = false;
	try {
		String^ universityID = dgvSearchResult->CurrentRow->Cells["University ID"]->Value->ToString();
		errorUpdate->Visible = false;

		User^ viewThisUser = gcnew User();
		viewThisUser->InitializeVariables(universityID);
		this->Hide();
		UpdateUser^ userUpdate = gcnew UpdateUser(viewThisUser, "Viewing");
		userUpdate->ShowDialog();
		this->Show();
	}
	catch (Exception^ ex) {
		errorUpdate->Text = "An error occured: " + ex->Message;
		errorUpdate->Visible = true;
	}
}
