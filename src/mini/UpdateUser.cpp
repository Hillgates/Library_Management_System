#include "UpdateUser.h"
using namespace LibraryManagementSystem;
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void UpdateUser::InitializeComponent(void)
{
	this->warningPhoneExists = (gcnew System::Windows::Forms::Label());
	this->warningEmailExists = (gcnew System::Windows::Forms::Label());
	this->warningPhone = (gcnew System::Windows::Forms::Label());
	this->warningFname = (gcnew System::Windows::Forms::Label());
	this->warningLname = (gcnew System::Windows::Forms::Label());
	this->warningEmail = (gcnew System::Windows::Forms::Label());
	this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
	this->tbEmail = (gcnew System::Windows::Forms::TextBox());
	this->label32 = (gcnew System::Windows::Forms::Label());
	this->label29 = (gcnew System::Windows::Forms::Label());
	this->tbLname = (gcnew System::Windows::Forms::TextBox());
	this->label27 = (gcnew System::Windows::Forms::Label());
	this->label31 = (gcnew System::Windows::Forms::Label());
	this->mtbPhone = (gcnew System::Windows::Forms::MaskedTextBox());
	this->tbFname = (gcnew System::Windows::Forms::TextBox());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->btnClose = (gcnew System::Windows::Forms::Button());
	this->btnUpdate = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->btnLname = (gcnew System::Windows::Forms::Button());
	this->btnFname = (gcnew System::Windows::Forms::Button());
	this->btnDOB = (gcnew System::Windows::Forms::Button());
	this->btnPhone = (gcnew System::Windows::Forms::Button());
	this->btnEmail = (gcnew System::Windows::Forms::Button());
	this->emailsArray = (gcnew System::Windows::Forms::ComboBox());
	this->phonesArray = (gcnew System::Windows::Forms::ComboBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->SuspendLayout();
	// 
	// warningPhoneExists
	// 
	this->warningPhoneExists->AutoSize = true;
	this->warningPhoneExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPhoneExists->ForeColor = System::Drawing::Color::Red;
	this->warningPhoneExists->Location = System::Drawing::Point(219, 257);
	this->warningPhoneExists->Name = L"warningPhoneExists";
	this->warningPhoneExists->Size = System::Drawing::Size(95, 12);
	this->warningPhoneExists->TabIndex = 120;
	this->warningPhoneExists->Text = L"Phone Already exists!";
	this->warningPhoneExists->Visible = false;
	// 
	// warningEmailExists
	// 
	this->warningEmailExists->AutoSize = true;
	this->warningEmailExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningEmailExists->ForeColor = System::Drawing::Color::Red;
	this->warningEmailExists->Location = System::Drawing::Point(233, 309);
	this->warningEmailExists->Name = L"warningEmailExists";
	this->warningEmailExists->Size = System::Drawing::Size(56, 12);
	this->warningEmailExists->TabIndex = 119;
	this->warningEmailExists->Text = L"Email taken!";
	this->warningEmailExists->Visible = false;
	// 
	// warningPhone
	// 
	this->warningPhone->AutoSize = true;
	this->warningPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningPhone->ForeColor = System::Drawing::Color::Red;
	this->warningPhone->Location = System::Drawing::Point(79, 231);
	this->warningPhone->Name = L"warningPhone";
	this->warningPhone->Size = System::Drawing::Size(75, 13);
	this->warningPhone->TabIndex = 117;
	this->warningPhone->Text = L"Phone Invalid!";
	this->warningPhone->Visible = false;
	// 
	// warningFname
	// 
	this->warningFname->AutoSize = true;
	this->warningFname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningFname->ForeColor = System::Drawing::Color::Red;
	this->warningFname->Location = System::Drawing::Point(110, 109);
	this->warningFname->Name = L"warningFname";
	this->warningFname->Size = System::Drawing::Size(114, 13);
	this->warningFname->TabIndex = 115;
	this->warningFname->Text = L"Field cannot be empty!";
	this->warningFname->Visible = false;
	// 
	// warningLname
	// 
	this->warningLname->AutoSize = true;
	this->warningLname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningLname->ForeColor = System::Drawing::Color::Red;
	this->warningLname->Location = System::Drawing::Point(110, 54);
	this->warningLname->Name = L"warningLname";
	this->warningLname->Size = System::Drawing::Size(114, 13);
	this->warningLname->TabIndex = 114;
	this->warningLname->Text = L"Field cannot be empty!";
	this->warningLname->Visible = false;
	// 
	// warningEmail
	// 
	this->warningEmail->AutoSize = true;
	this->warningEmail->ForeColor = System::Drawing::Color::Red;
	this->warningEmail->Location = System::Drawing::Point(81, 289);
	this->warningEmail->Name = L"warningEmail";
	this->warningEmail->Size = System::Drawing::Size(133, 13);
	this->warningEmail->TabIndex = 113;
	this->warningEmail->Text = L"Only Google mails allowed!";
	this->warningEmail->Visible = false;
	// 
	// dateTimePicker1
	// 
	this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
	this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
	this->dateTimePicker1->Location = System::Drawing::Point(43, 181);
	this->dateTimePicker1->Name = L"dateTimePicker1";
	this->dateTimePicker1->Size = System::Drawing::Size(179, 20);
	this->dateTimePicker1->TabIndex = 102;
	this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &UpdateUser::SomethingChanged);
	// 
	// tbEmail
	// 
	this->tbEmail->Location = System::Drawing::Point(46, 302);
	this->tbEmail->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbEmail->Name = L"tbEmail";
	this->tbEmail->Size = System::Drawing::Size(181, 20);
	this->tbEmail->TabIndex = 105;
	this->tbEmail->TextChanged += gcnew System::EventHandler(this, &UpdateUser::SomethingChanged);
	// 
	// label32
	// 
	this->label32->AutoSize = true;
	this->label32->Location = System::Drawing::Point(40, 56);
	this->label32->Margin = System::Windows::Forms::Padding(3);
	this->label32->Name = L"label32";
	this->label32->Size = System::Drawing::Size(58, 13);
	this->label32->TabIndex = 109;
	this->label32->Text = L"Last Name";
	// 
	// label29
	// 
	this->label29->AutoSize = true;
	this->label29->Location = System::Drawing::Point(43, 286);
	this->label29->Margin = System::Windows::Forms::Padding(3);
	this->label29->Name = L"label29";
	this->label29->Size = System::Drawing::Size(32, 13);
	this->label29->TabIndex = 107;
	this->label29->Text = L"Email";
	// 
	// tbLname
	// 
	this->tbLname->Location = System::Drawing::Point(43, 72);
	this->tbLname->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbLname->Name = L"tbLname";
	this->tbLname->Size = System::Drawing::Size(181, 20);
	this->tbLname->TabIndex = 99;
	this->tbLname->TextChanged += gcnew System::EventHandler(this, &UpdateUser::SomethingChanged);
	// 
	// label27
	// 
	this->label27->AutoSize = true;
	this->label27->Location = System::Drawing::Point(40, 231);
	this->label27->Margin = System::Windows::Forms::Padding(3);
	this->label27->Name = L"label27";
	this->label27->Size = System::Drawing::Size(38, 13);
	this->label27->TabIndex = 106;
	this->label27->Text = L"Phone";
	// 
	// label31
	// 
	this->label31->AutoSize = true;
	this->label31->Location = System::Drawing::Point(40, 107);
	this->label31->Margin = System::Windows::Forms::Padding(3);
	this->label31->Name = L"label31";
	this->label31->Size = System::Drawing::Size(57, 13);
	this->label31->TabIndex = 108;
	this->label31->Text = L"First Name";
	// 
	// mtbPhone
	// 
	this->mtbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->mtbPhone->Location = System::Drawing::Point(43, 247);
	this->mtbPhone->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->mtbPhone->Mask = L"000-000-0000";
	this->mtbPhone->Name = L"mtbPhone";
	this->mtbPhone->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->mtbPhone->Size = System::Drawing::Size(179, 26);
	this->mtbPhone->TabIndex = 104;
	this->mtbPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->mtbPhone->ValidatingType = System::Int32::typeid;
	this->mtbPhone->TextChanged += gcnew System::EventHandler(this, &UpdateUser::SomethingChanged);
	// 
	// tbFname
	// 
	this->tbFname->Location = System::Drawing::Point(43, 123);
	this->tbFname->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbFname->Name = L"tbFname";
	this->tbFname->Size = System::Drawing::Size(181, 20);
	this->tbFname->TabIndex = 100;
	this->tbFname->TextChanged += gcnew System::EventHandler(this, &UpdateUser::SomethingChanged);
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(40, 162);
	this->label8->Margin = System::Windows::Forms::Padding(3);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(66, 13);
	this->label8->TabIndex = 112;
	this->label8->Text = L"Date of Birth";
	// 
	// btnClose
	// 
	this->btnClose->BackColor = System::Drawing::Color::Red;
	this->btnClose->Enabled = false;
	this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
	this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
	this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnClose->ForeColor = System::Drawing::Color::White;
	this->btnClose->Location = System::Drawing::Point(344, 286);
	this->btnClose->Name = L"btnClose";
	this->btnClose->Size = System::Drawing::Size(101, 27);
	this->btnClose->TabIndex = 40;
	this->btnClose->Text = L"Close";
	this->btnClose->UseVisualStyleBackColor = false;
	this->btnClose->Click += gcnew System::EventHandler(this, &UpdateUser::btnClose_Click);
	// 
	// btnUpdate
	// 
	this->btnUpdate->BackColor = System::Drawing::Color::Lime;
	this->btnUpdate->Enabled = false;
	this->btnUpdate->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->btnUpdate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
	this->btnUpdate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
	this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnUpdate->Location = System::Drawing::Point(344, 248);
	this->btnUpdate->Name = L"btnUpdate";
	this->btnUpdate->Size = System::Drawing::Size(101, 27);
	this->btnUpdate->TabIndex = 39;
	this->btnUpdate->Text = L"Update";
	this->btnUpdate->UseVisualStyleBackColor = false;
	this->btnUpdate->Click += gcnew System::EventHandler(this, &UpdateUser::btnUpdate_Click);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->Location = System::Drawing::Point(182, 9);
	this->label1->Name = L"label1";
	this->label1->Padding = System::Windows::Forms::Padding(3);
	this->label1->Size = System::Drawing::Size(117, 26);
	this->label1->TabIndex = 121;
	this->label1->Text = L"User Update";
	// 
	// pictureBox1
	// 
	this->pictureBox1->BackColor = System::Drawing::Color::Black;
	this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->pictureBox1->Location = System::Drawing::Point(287, 54);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(158, 158);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pictureBox1->TabIndex = 122;
	this->pictureBox1->TabStop = false;
	// 
	// btnLname
	// 
	this->btnLname->BackColor = System::Drawing::Color::Green;
	this->btnLname->Location = System::Drawing::Point(10, 72);
	this->btnLname->Name = L"btnLname";
	this->btnLname->Size = System::Drawing::Size(27, 20);
	this->btnLname->TabIndex = 123;
	this->btnLname->Text = L"   ";
	this->btnLname->UseVisualStyleBackColor = false;
	// 
	// btnFname
	// 
	this->btnFname->BackColor = System::Drawing::Color::Green;
	this->btnFname->Location = System::Drawing::Point(10, 123);
	this->btnFname->Name = L"btnFname";
	this->btnFname->Size = System::Drawing::Size(27, 20);
	this->btnFname->TabIndex = 124;
	this->btnFname->Text = L"   ";
	this->btnFname->UseVisualStyleBackColor = false;
	// 
	// btnDOB
	// 
	this->btnDOB->BackColor = System::Drawing::Color::Green;
	this->btnDOB->Location = System::Drawing::Point(10, 181);
	this->btnDOB->Name = L"btnDOB";
	this->btnDOB->Size = System::Drawing::Size(27, 20);
	this->btnDOB->TabIndex = 125;
	this->btnDOB->Text = L"   ";
	this->btnDOB->UseVisualStyleBackColor = false;
	// 
	// btnPhone
	// 
	this->btnPhone->BackColor = System::Drawing::Color::Green;
	this->btnPhone->Location = System::Drawing::Point(10, 249);
	this->btnPhone->Name = L"btnPhone";
	this->btnPhone->Size = System::Drawing::Size(27, 20);
	this->btnPhone->TabIndex = 126;
	this->btnPhone->Text = L"   ";
	this->btnPhone->UseVisualStyleBackColor = false;
	// 
	// btnEmail
	// 
	this->btnEmail->BackColor = System::Drawing::Color::Green;
	this->btnEmail->Location = System::Drawing::Point(10, 302);
	this->btnEmail->Name = L"btnEmail";
	this->btnEmail->Size = System::Drawing::Size(27, 20);
	this->btnEmail->TabIndex = 127;
	this->btnEmail->Text = L"   ";
	this->btnEmail->UseVisualStyleBackColor = false;
	// 
	// emailsArray
	// 
	this->emailsArray->FormattingEnabled = true;
	this->emailsArray->Location = System::Drawing::Point(306, 13);
	this->emailsArray->Name = L"emailsArray";
	this->emailsArray->Size = System::Drawing::Size(34, 21);
	this->emailsArray->TabIndex = 128;
	this->emailsArray->Visible = false;
	// 
	// phonesArray
	// 
	this->phonesArray->FormattingEnabled = true;
	this->phonesArray->Location = System::Drawing::Point(344, 14);
	this->phonesArray->Name = L"phonesArray";
	this->phonesArray->Size = System::Drawing::Size(34, 21);
	this->phonesArray->TabIndex = 129;
	this->phonesArray->Visible = false;
	// 
	// UpdateUser
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(480, 346);
	this->Controls->Add(this->phonesArray);
	this->Controls->Add(this->emailsArray);
	this->Controls->Add(this->btnEmail);
	this->Controls->Add(this->btnPhone);
	this->Controls->Add(this->btnDOB);
	this->Controls->Add(this->btnFname);
	this->Controls->Add(this->btnLname);
	this->Controls->Add(this->pictureBox1);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->btnClose);
	this->Controls->Add(this->warningPhoneExists);
	this->Controls->Add(this->tbLname);
	this->Controls->Add(this->btnUpdate);
	this->Controls->Add(this->label8);
	this->Controls->Add(this->warningEmailExists);
	this->Controls->Add(this->warningPhone);
	this->Controls->Add(this->tbFname);
	this->Controls->Add(this->warningFname);
	this->Controls->Add(this->mtbPhone);
	this->Controls->Add(this->warningLname);
	this->Controls->Add(this->label31);
	this->Controls->Add(this->warningEmail);
	this->Controls->Add(this->label27);
	this->Controls->Add(this->label29);
	this->Controls->Add(this->dateTimePicker1);
	this->Controls->Add(this->label32);
	this->Controls->Add(this->tbEmail);
	this->Name = L"UpdateUser";
	this->Text = L"User Details Update";
	this->Load += gcnew System::EventHandler(this, &UpdateUser::UpdateAdmin_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline void LibraryManagementSystem::UpdateUser::SomethingChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkForChanges();
	return;
}

inline void UpdateUser::checkForErrors() {
	int count = 0;
	int noUpdate = 0;
	int cerrors = 0;
	//
	// Last name
	//
	if (isUpdateSurname) {
		if (lname->Length != 0) 
		{ 
			count++; 
			warningLname->Visible = false;
		}
		else {
			warningLname->Visible = true; 
			cerrors++;
		}
	}
	else {
		noUpdate++;
		warningLname->Visible = false;
	}
	//
	// First name
	//
	if (isUpdateName) {
		if (fname->Length != 0) { 
			count++; 
			warningFname->Visible = false; 
		}
		else { 
			warningFname->Visible = true;
			cerrors++;
		}
	}
	else {
		noUpdate++;
		warningFname->Visible = false;
	}
	//
	// Email
	//
	if (isUpdateEmail) {
		if (email->EndsWith("@gmail.com")) { 
			count++; 
			warningEmail->Visible = false; 
		}
		else {
			warningEmail->Visible = true;
			cerrors++;
		}
		if (!emailsArray->Items->Contains(email)){
					//if (!check_existence("SELECT email FROM Users WHERE email='" + email + "';")) {
			warningEmailExists->Visible = false;
			count++;
		}
		else {
			warningEmailExists->Visible = true;
			cerrors++;
		}
	}
	else {
		noUpdate++;
		warningEmail->Visible = false;
	}
	//
	// Phone
	//
	if (isUpdatePhone) {
		if (phone->Length == 10) { 
			count++; 
			warningPhone->Visible = false; 
		}
		else {
			warningPhone->Visible = true;
			warningPhone->Text = "Invalid phone!";
			cerrors++;
		}
		
		if (!phonesArray->Items->Contains(phone)){
					//if (!check_existence("SELECT phoneNumber FROM Users WHERE phoneNumber = '" + phone + "';")) {
			warningPhoneExists->Visible = false;
			count++;
		}
		else {
			warningPhoneExists->Visible = true;
			cerrors++;
		}
	}
	else {
		noUpdate++;
		warningPhoneExists->Visible = false;
		warningPhone->Visible = false;
	}
	//
	// Date of Birth 
	//
	if (isUpdateDOB) {
		count++;
	}
	else {
		noUpdate++;
	}

	// 
	// Update Button 
	//
	if (noUpdate==5) {
		btnUpdate->Text = "No Change";
	}
	else {
		btnUpdate->Text = "Update";
	}
	if (count && cerrors == 0) {
		btnUpdate->Enabled = true;
	}
	else {
		btnUpdate->Enabled = false;
	}
}


inline void UpdateUser::btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	WFDR Confirm_result = MessageBox::Show("Confirm updating User?: \nLast Name:\t" + lname + "\nFirst Name:\t" + fname
		+ "\nDate of Birth:\t" + dob
		+ "\nEmail:\t\t" + email + "\nPhone:\t\t" + phone, "Admin Registration confirmation", MessageBoxButtons::OKCancel);
	if (Confirm_result == WFDR::OK) {
		// gp
		try {
			// Create a SQL connection object
			SqlConnection^ connection = StartConnection();
			

			// Create a SQL command object
			SqlCommand^ nonQueryCommand = gcnew SqlCommand();
			nonQueryCommand->Connection = connection;


			nonQueryCommand->CommandText = "UPDATE Users SET [lastName] = @LastName, [firstName] = @FirstName, [email] = @Email, [dateOfBirth] = @DateOfBirth, [phoneNumber] = @PhoneNumber WHERE [universityID] = @UniversityID";

			// Add parameters for other columns
			nonQueryCommand->Parameters->AddWithValue("@LastName", tbLname->Text->Trim()->Replace("'", ""));
			nonQueryCommand->Parameters->AddWithValue("@FirstName", tbFname->Text->Trim()->Replace("'", ""));
			nonQueryCommand->Parameters->AddWithValue("@Email", tbEmail->Text->Trim()->Replace("'", ""));
			nonQueryCommand->Parameters->AddWithValue("@DateOfBirth", dateTimePicker1->Value);
			nonQueryCommand->Parameters->AddWithValue("@PhoneNumber", mtbPhone->Text->Replace("-", ""));
			nonQueryCommand->Parameters->AddWithValue("@UniversityID", user->universityID);


			// Execute the SQL nonQueryCommand
			nonQueryCommand->ExecuteNonQuery();

			// Close the connection
			connection->Close();
			MessageBox::Show("Updated!", "Library Management System");
			this->Close();
		}
		catch (Exception^ ex) {
			// Handle the exception
			MessageBox::Show("An error occurred: " + ex->Message + "\n\nError copied to clipboard!", "Library Management System: Admin Registration");
			Clipboard::SetText(ex->Message);
		}
	}
	return;
}

inline void UpdateUser::btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}



inline void UpdateUser::UpdateAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	re_populateComboBox(emailsArray,"email", "Users");
	re_populateComboBox(phonesArray, "phoneNumber", "Users");
	tbLname->Text = user->lastName;
	tbFname->Text = user->firstName;
	dateTimePicker1->Value = user->dateOfBirth->Date;
	String^ ph = user->phoneNumber->Insert(2,"-")->Insert(6, "-");
	mtbPhone->Text = ph;//user->phoneNumber;
	tbEmail->Text = user->email;
	pictureBox1->Image = user->image;

}


inline void UpdateUser::checkForChanges() {
	lname = tbLname->Text->Trim()->Replace("'", "");
	fname = tbFname->Text->Trim()->Replace("'", "");
	email = tbEmail->Text->Trim()->Replace("'", "");
	phone = mtbPhone->Text->Replace("-", "");
	dob = dateTimePicker1->Value;

	// last name
	if (user->lastName == lname) {
		isUpdateSurname = false;
		btnLname->BackColor = Color::Green;
	}
	else {
		isUpdateSurname = true;
		btnLname->BackColor = Color::Red;
	}

	// firstname
	if (user->firstName == fname) {
		isUpdateName = false;
		btnFname->BackColor = Color::Green;
	}
	else {
		isUpdateName = true;
		btnFname->BackColor = Color::Red;
	}

	// date of birth

	if (dob->Equals(user->dateOfBirth)) {
		isUpdateDOB = false;
		btnDOB->BackColor = Color::Green;
	}
	else {
		isUpdateDOB = true;
		btnDOB->BackColor = Color::Red;
	}

	// phone
	if (user->phoneNumber == phone) {
		isUpdatePhone = false;
		btnPhone->BackColor = Color::Green;
	}
	else {
		isUpdatePhone = true;
		btnPhone->BackColor = Color::Red;
	}

	// email
	if (user->email == email) {
		isUpdateEmail = false;
		btnEmail->BackColor = Color::Green;
	}
	else {
		isUpdateEmail = true;
		btnEmail->BackColor = Color::Red;
	}

	// chech errors
	checkForErrors();
}
