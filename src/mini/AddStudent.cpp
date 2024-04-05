#include "AddStudent.h"


/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void LibraryManagementSystem::AddStudent::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->btnCancel = (gcnew System::Windows::Forms::Button());
	this->btnRegister = (gcnew System::Windows::Forms::Button());
	this->tbEmail = (gcnew System::Windows::Forms::TextBox());
	this->mtbPhone = (gcnew System::Windows::Forms::MaskedTextBox());
	this->label29 = (gcnew System::Windows::Forms::Label());
	this->label27 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->tbFname = (gcnew System::Windows::Forms::TextBox());
	this->tbLname = (gcnew System::Windows::Forms::TextBox());
	this->label32 = (gcnew System::Windows::Forms::Label());
	this->label31 = (gcnew System::Windows::Forms::Label());
	this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
	this->label39 = (gcnew System::Windows::Forms::Label());
	this->tbPassword = (gcnew System::Windows::Forms::TextBox());
	this->label38 = (gcnew System::Windows::Forms::Label());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
	this->cbGender = (gcnew System::Windows::Forms::ComboBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->warningPasswordLength = (gcnew System::Windows::Forms::Label());
	this->warningEmail = (gcnew System::Windows::Forms::Label());
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->warningLname = (gcnew System::Windows::Forms::Label());
	this->warningFname = (gcnew System::Windows::Forms::Label());
	this->warningID = (gcnew System::Windows::Forms::Label());
	this->warningPhone = (gcnew System::Windows::Forms::Label());
	this->warningPasswordMatch = (gcnew System::Windows::Forms::Label());
	this->tbID = (gcnew System::Windows::Forms::MaskedTextBox());
	this->warningIDexists = (gcnew System::Windows::Forms::Label());
	this->warningPhoneExists = (gcnew System::Windows::Forms::Label());
	this->warningEmailExists = (gcnew System::Windows::Forms::Label());
	this->idsArray = (gcnew System::Windows::Forms::ComboBox());
	this->phonesArray = (gcnew System::Windows::Forms::ComboBox());
	this->emailsArray = (gcnew System::Windows::Forms::ComboBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->panel1->SuspendLayout();
	this->SuspendLayout();
	// 
	// btnCancel
	// 
	this->btnCancel->BackColor = System::Drawing::Color::Red;
	this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
	this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
	this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnCancel->ForeColor = System::Drawing::Color::White;
	this->btnCancel->Location = System::Drawing::Point(83, 399);
	this->btnCancel->Name = L"btnCancel";
	this->btnCancel->Size = System::Drawing::Size(87, 29);
	this->btnCancel->TabIndex = 16;
	this->btnCancel->Text = L"Cancel";
	this->btnCancel->UseVisualStyleBackColor = false;
	this->btnCancel->Click += gcnew System::EventHandler(this, &AddStudent::btnCancel_Click);
	// 
	// btnRegister
	// 
	this->btnRegister->BackColor = System::Drawing::Color::Lime;
	this->btnRegister->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->btnRegister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
	this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
	this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnRegister->Location = System::Drawing::Point(383, 399);
	this->btnRegister->Name = L"btnRegister";
	this->btnRegister->Size = System::Drawing::Size(87, 29);
	this->btnRegister->TabIndex = 15;
	this->btnRegister->Text = L"Register";
	this->btnRegister->UseVisualStyleBackColor = false;
	this->btnRegister->Click += gcnew System::EventHandler(this, &AddStudent::btnRegister_Click);
	// 
	// tbEmail
	// 
	this->tbEmail->Location = System::Drawing::Point(31, 342);
	this->tbEmail->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbEmail->Name = L"tbEmail";
	this->tbEmail->Size = System::Drawing::Size(181, 20);
	this->tbEmail->TabIndex = 8;
	this->tbEmail->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// mtbPhone
	// 
	this->mtbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->mtbPhone->Location = System::Drawing::Point(31, 297);
	this->mtbPhone->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->mtbPhone->Mask = L"000-000-0000";
	this->mtbPhone->Name = L"mtbPhone";
	this->mtbPhone->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->mtbPhone->Size = System::Drawing::Size(179, 26);
	this->mtbPhone->TabIndex = 7;
	this->mtbPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->mtbPhone->ValidatingType = System::Int32::typeid;
	this->mtbPhone->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// label29
	// 
	this->label29->AutoSize = true;
	this->label29->Location = System::Drawing::Point(28, 326);
	this->label29->Margin = System::Windows::Forms::Padding(3);
	this->label29->Name = L"label29";
	this->label29->Size = System::Drawing::Size(32, 13);
	this->label29->TabIndex = 4;
	this->label29->Text = L"Email";
	// 
	// label27
	// 
	this->label27->AutoSize = true;
	this->label27->Location = System::Drawing::Point(28, 281);
	this->label27->Margin = System::Windows::Forms::Padding(3);
	this->label27->Name = L"label27";
	this->label27->Size = System::Drawing::Size(38, 13);
	this->label27->TabIndex = 2;
	this->label27->Text = L"Phone";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(28, 203);
	this->label8->Margin = System::Windows::Forms::Padding(3);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(66, 13);
	this->label8->TabIndex = 48;
	this->label8->Text = L"Date of Birth";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(28, 159);
	this->label7->Margin = System::Windows::Forms::Padding(3);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(64, 13);
	this->label7->TabIndex = 45;
	this->label7->Text = L"ID/Passport";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(28, 246);
	this->label6->Margin = System::Windows::Forms::Padding(3);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(42, 13);
	this->label6->TabIndex = 44;
	this->label6->Text = L"Gender";
	// 
	// tbFname
	// 
	this->tbFname->Location = System::Drawing::Point(27, 130);
	this->tbFname->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbFname->Name = L"tbFname";
	this->tbFname->Size = System::Drawing::Size(181, 20);
	this->tbFname->TabIndex = 2;
	this->tbFname->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// tbLname
	// 
	this->tbLname->Location = System::Drawing::Point(27, 91);
	this->tbLname->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbLname->Name = L"tbLname";
	this->tbLname->Size = System::Drawing::Size(181, 20);
	this->tbLname->TabIndex = 1;
	this->tbLname->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// label32
	// 
	this->label32->AutoSize = true;
	this->label32->Location = System::Drawing::Point(24, 75);
	this->label32->Margin = System::Windows::Forms::Padding(3);
	this->label32->Name = L"label32";
	this->label32->Size = System::Drawing::Size(58, 13);
	this->label32->TabIndex = 7;
	this->label32->Text = L"Last Name";
	// 
	// label31
	// 
	this->label31->AutoSize = true;
	this->label31->Location = System::Drawing::Point(24, 114);
	this->label31->Margin = System::Windows::Forms::Padding(3);
	this->label31->Name = L"label31";
	this->label31->Size = System::Drawing::Size(57, 13);
	this->label31->TabIndex = 6;
	this->label31->Text = L"First Name";
	// 
	// tbConfirmPassword
	// 
	this->tbConfirmPassword->Location = System::Drawing::Point(317, 342);
	this->tbConfirmPassword->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbConfirmPassword->Name = L"tbConfirmPassword";
	this->tbConfirmPassword->Size = System::Drawing::Size(201, 20);
	this->tbConfirmPassword->TabIndex = 14;
	this->tbConfirmPassword->UseSystemPasswordChar = true;
	this->tbConfirmPassword->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// label39
	// 
	this->label39->AutoSize = true;
	this->label39->Location = System::Drawing::Point(316, 326);
	this->label39->Margin = System::Windows::Forms::Padding(3);
	this->label39->Name = L"label39";
	this->label39->Size = System::Drawing::Size(90, 13);
	this->label39->TabIndex = 24;
	this->label39->Text = L"Confirm password";
	// 
	// tbPassword
	// 
	this->tbPassword->Location = System::Drawing::Point(317, 303);
	this->tbPassword->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbPassword->Name = L"tbPassword";
	this->tbPassword->Size = System::Drawing::Size(199, 20);
	this->tbPassword->TabIndex = 13;
	this->tbPassword->UseSystemPasswordChar = true;
	this->tbPassword->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// label38
	// 
	this->label38->AutoSize = true;
	this->label38->Location = System::Drawing::Point(314, 287);
	this->label38->Margin = System::Windows::Forms::Padding(3);
	this->label38->Name = L"label38";
	this->label38->Size = System::Drawing::Size(80, 13);
	this->label38->TabIndex = 22;
	this->label38->Text = L"Enter password";
	// 
	// pictureBox1
	// 
	this->pictureBox1->BackColor = System::Drawing::Color::Black;
	this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->pictureBox1->Location = System::Drawing::Point(0, 0);
	this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(145, 117);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pictureBox1->TabIndex = 35;
	this->pictureBox1->TabStop = false;
	this->pictureBox1->Click += gcnew System::EventHandler(this, &AddStudent::pictureBox1_Click);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(399, 7);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(117, 13);
	this->label1->TabIndex = 52;
	this->label1->Text = L"Click Picture to change";
	// 
	// panel1
	// 
	this->panel1->Controls->Add(this->pictureBox1);
	this->panel1->Location = System::Drawing::Point(383, 23);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(145, 117);
	this->panel1->TabIndex = 53;
	// 
	// dateTimePicker1
	// 
	this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
	this->dateTimePicker1->Location = System::Drawing::Point(31, 220);
	this->dateTimePicker1->Name = L"dateTimePicker1";
	this->dateTimePicker1->Size = System::Drawing::Size(181, 20);
	this->dateTimePicker1->TabIndex = 5;
	// 
	// cbGender
	// 
	this->cbGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->cbGender->FormattingEnabled = true;
	this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
	this->cbGender->Location = System::Drawing::Point(31, 261);
	this->cbGender->Name = L"cbGender";
	this->cbGender->Size = System::Drawing::Size(179, 21);
	this->cbGender->TabIndex = 6;
	this->cbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	this->cbGender->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Location = System::Drawing::Point(27, 23);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(197, 24);
	this->label2->TabIndex = 56;
	this->label2->Text = L"Student Registration";
	// 
	// warningPasswordLength
	// 
	this->warningPasswordLength->AutoSize = true;
	this->warningPasswordLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPasswordLength->ForeColor = System::Drawing::Color::Red;
	this->warningPasswordLength->Location = System::Drawing::Point(390, 287);
	this->warningPasswordLength->Name = L"warningPasswordLength";
	this->warningPasswordLength->Size = System::Drawing::Size(146, 12);
	this->warningPasswordLength->TabIndex = 57;
	this->warningPasswordLength->Text = L"(must be atleast 8 characters long)";
	// 
	// warningEmail
	// 
	this->warningEmail->AutoSize = true;
	this->warningEmail->ForeColor = System::Drawing::Color::Red;
	this->warningEmail->Location = System::Drawing::Point(66, 329);
	this->warningEmail->Name = L"warningEmail";
	this->warningEmail->Size = System::Drawing::Size(133, 13);
	this->warningEmail->TabIndex = 58;
	this->warningEmail->Text = L"Only Google mails allowed!";
	this->warningEmail->Visible = false;
	// 
	// timer1
	// 
	this->timer1->Enabled = true;
	this->timer1->Tick += gcnew System::EventHandler(this, &AddStudent::timer1_Tick);
	// 
	// warningLname
	// 
	this->warningLname->AutoSize = true;
	this->warningLname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningLname->ForeColor = System::Drawing::Color::Red;
	this->warningLname->Location = System::Drawing::Point(94, 75);
	this->warningLname->Name = L"warningLname";
	this->warningLname->Size = System::Drawing::Size(114, 13);
	this->warningLname->TabIndex = 59;
	this->warningLname->Text = L"Field cannot be empty!";
	this->warningLname->Visible = false;
	// 
	// warningFname
	// 
	this->warningFname->AutoSize = true;
	this->warningFname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningFname->ForeColor = System::Drawing::Color::Red;
	this->warningFname->Location = System::Drawing::Point(94, 118);
	this->warningFname->Name = L"warningFname";
	this->warningFname->Size = System::Drawing::Size(114, 13);
	this->warningFname->TabIndex = 60;
	this->warningFname->Text = L"Field cannot be empty!";
	this->warningFname->Visible = false;
	// 
	// warningID
	// 
	this->warningID->AutoSize = true;
	this->warningID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningID->ForeColor = System::Drawing::Color::Red;
	this->warningID->Location = System::Drawing::Point(98, 158);
	this->warningID->Name = L"warningID";
	this->warningID->Size = System::Drawing::Size(76, 13);
	this->warningID->TabIndex = 61;
	this->warningID->Text = L"Field not Valid!";
	this->warningID->Visible = false;
	// 
	// warningPhone
	// 
	this->warningPhone->AutoSize = true;
	this->warningPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningPhone->ForeColor = System::Drawing::Color::Red;
	this->warningPhone->Location = System::Drawing::Point(94, 281);
	this->warningPhone->Name = L"warningPhone";
	this->warningPhone->Size = System::Drawing::Size(75, 13);
	this->warningPhone->TabIndex = 64;
	this->warningPhone->Text = L"Field not valid!";
	this->warningPhone->Visible = false;
	// 
	// warningPasswordMatch
	// 
	this->warningPasswordMatch->AutoSize = true;
	this->warningPasswordMatch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPasswordMatch->ForeColor = System::Drawing::Color::Red;
	this->warningPasswordMatch->Location = System::Drawing::Point(316, 362);
	this->warningPasswordMatch->Name = L"warningPasswordMatch";
	this->warningPasswordMatch->Size = System::Drawing::Size(121, 13);
	this->warningPasswordMatch->TabIndex = 66;
	this->warningPasswordMatch->Text = L"Password do not match!";
	this->warningPasswordMatch->Visible = false;
	// 
	// tbID
	// 
	this->tbID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tbID->Location = System::Drawing::Point(27, 175);
	this->tbID->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
	this->tbID->Mask = L"0000000000000";
	this->tbID->Name = L"tbID";
	this->tbID->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->tbID->Size = System::Drawing::Size(179, 26);
	this->tbID->TabIndex = 4;
	this->tbID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->tbID->ValidatingType = System::Int32::typeid;
	this->tbID->TextChanged += gcnew System::EventHandler(this, &AddStudent::SomethingChanged);
	// 
	// warningIDexists
	// 
	this->warningIDexists->AutoSize = true;
	this->warningIDexists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningIDexists->ForeColor = System::Drawing::Color::Red;
	this->warningIDexists->Location = System::Drawing::Point(212, 184);
	this->warningIDexists->Name = L"warningIDexists";
	this->warningIDexists->Size = System::Drawing::Size(119, 12);
	this->warningIDexists->TabIndex = 97;
	this->warningIDexists->Text = L"ID already exists in system!";
	this->warningIDexists->Visible = false;
	// 
	// warningPhoneExists
	// 
	this->warningPhoneExists->AutoSize = true;
	this->warningPhoneExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPhoneExists->ForeColor = System::Drawing::Color::Red;
	this->warningPhoneExists->Location = System::Drawing::Point(216, 303);
	this->warningPhoneExists->Name = L"warningPhoneExists";
	this->warningPhoneExists->Size = System::Drawing::Size(95, 12);
	this->warningPhoneExists->TabIndex = 99;
	this->warningPhoneExists->Text = L"Phone Already exists!";
	this->warningPhoneExists->Visible = false;
	// 
	// warningEmailExists
	// 
	this->warningEmailExists->AutoSize = true;
	this->warningEmailExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningEmailExists->ForeColor = System::Drawing::Color::Red;
	this->warningEmailExists->Location = System::Drawing::Point(216, 350);
	this->warningEmailExists->Name = L"warningEmailExists";
	this->warningEmailExists->Size = System::Drawing::Size(56, 12);
	this->warningEmailExists->TabIndex = 100;
	this->warningEmailExists->Text = L"Email taken!";
	this->warningEmailExists->Visible = false;
	// 
	// idsArray
	// 
	this->idsArray->FormattingEnabled = true;
	this->idsArray->Location = System::Drawing::Point(348, 179);
	this->idsArray->Name = L"idsArray";
	this->idsArray->Size = System::Drawing::Size(35, 21);
	this->idsArray->TabIndex = 101;
	this->idsArray->Visible = false;
	// 
	// phonesArray
	// 
	this->phonesArray->FormattingEnabled = true;
	this->phonesArray->Location = System::Drawing::Point(348, 206);
	this->phonesArray->Name = L"phonesArray";
	this->phonesArray->Size = System::Drawing::Size(35, 21);
	this->phonesArray->TabIndex = 102;
	this->phonesArray->Visible = false;
	// 
	// emailsArray
	// 
	this->emailsArray->FormattingEnabled = true;
	this->emailsArray->Location = System::Drawing::Point(348, 238);
	this->emailsArray->Name = L"emailsArray";
	this->emailsArray->Size = System::Drawing::Size(35, 21);
	this->emailsArray->TabIndex = 103;
	this->emailsArray->Visible = false;
	// 
	// AddStudent
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
	this->ClientSize = System::Drawing::Size(585, 440);
	this->Controls->Add(this->emailsArray);
	this->Controls->Add(this->phonesArray);
	this->Controls->Add(this->idsArray);
	this->Controls->Add(this->warningEmailExists);
	this->Controls->Add(this->warningPhoneExists);
	this->Controls->Add(this->warningIDexists);
	this->Controls->Add(this->tbID);
	this->Controls->Add(this->warningPasswordMatch);
	this->Controls->Add(this->warningPhone);
	this->Controls->Add(this->warningID);
	this->Controls->Add(this->warningFname);
	this->Controls->Add(this->warningLname);
	this->Controls->Add(this->warningEmail);
	this->Controls->Add(this->warningPasswordLength);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->cbGender);
	this->Controls->Add(this->dateTimePicker1);
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->tbConfirmPassword);
	this->Controls->Add(this->tbEmail);
	this->Controls->Add(this->label32);
	this->Controls->Add(this->label29);
	this->Controls->Add(this->tbLname);
	this->Controls->Add(this->label27);
	this->Controls->Add(this->label31);
	this->Controls->Add(this->mtbPhone);
	this->Controls->Add(this->tbFname);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->btnRegister);
	this->Controls->Add(this->label39);
	this->Controls->Add(this->label8);
	this->Controls->Add(this->tbPassword);
	this->Controls->Add(this->label38);
	this->Controls->Add(this->btnCancel);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	this->MaximizeBox = false;
	this->MaximumSize = System::Drawing::Size(601, 479);
	this->MinimizeBox = false;
	this->MinimumSize = System::Drawing::Size(601, 479);
	this->Name = L"AddStudent";
	this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
	this->Text = L"Student Registration";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	this->panel1->ResumeLayout(false);
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline void LibraryManagementSystem::AddStudent::save_update() {
	lname = tbLname->Text->Trim()->Replace("'", ""),
		fname = tbFname->Text->Trim()->Replace("'", ""),
		email = tbEmail->Text->Trim()->Replace("'", ""),
		phone = mtbPhone->Text->Replace("-", ""),
		dob = dateTimePicker1->Text,
		pass1 = tbPassword->Text,
		pass2 = tbConfirmPassword->Text,
		id = tbID->Text;

	int count = 0;

	if (lname->Length != 0) { count++; warningLname->Visible = false; }
	else warningLname->Visible = true;

	if (fname->Length != 0) { count++; warningFname->Visible = false; }
	else warningFname->Visible = true;

	if (id->Length == 13) { count++; warningID->Visible = false; }
	else warningID->Visible = true;

	if (!idsArray->Items->Contains(id)) {
		warningIDexists->Visible = false;
		count++;
	}
	else warningIDexists->Visible = true;

	if (email->EndsWith("@gmail.com")) { count++; warningEmail->Visible = false; }
	else warningEmail->Visible = true;

	if (!emailsArray->Items->Contains(email)) {
		warningEmailExists->Visible = false;
		count++;
	}
	else {
		warningEmailExists->Visible = true;
	}

	if (phone->Length == 10) { count++; warningPhone->Visible = false; }
	else warningPhone->Visible = true;

	if (!phonesArray->Items->Contains(phone)) {
		warningPhoneExists->Visible = false;
		count++;
	}
	else {
		warningPhoneExists->Visible = true;
	}

	if (pass1->Length >= 8) {
		warningPasswordLength->Visible = false;
		if (pass1 == pass2) {
			count++;
			warningPasswordMatch->Visible = false;
		}
		else warningPasswordMatch->Visible = true;
	}
	else {
		warningPasswordLength->Visible = true;
	}
	// if all valid
	if (count == 9) {
		btnRegister->Enabled = true;
	}
	else {
		btnRegister->Enabled = false;
	}
}

inline System::Void LibraryManagementSystem::AddStudent::btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	lname = tbLname->Text->Trim()->Replace("'", "");
	fname = tbFname->Text->Trim()->Replace("'", "");
	email = tbEmail->Text->Trim()->Replace("'", "");
	phone = mtbPhone->Text->Replace("-", "");
	gender = cbGender->SelectedItem->ToString();
	dob = dateTimePicker1->Text;
	id = tbID->Text;

	WFDR Confirm_result = MessageBox::Show("Confirm register Student?: \nLast Name:\t" + lname + "\nFirst Name:\t" + fname
		+ "\nID:\t" + id + "\nDate of Birth:\t" + dob
		+ "\nEmail:\t" + email + "\nPhone:\t" + phone, "Student Registration confirmation", MessageBoxButtons::OKCancel);
	if (Confirm_result == WFDR::OK) {
		try {
			SqlConnection^ connection = StartConnection();

			SqlCommand^ nonQueryCommand = gcnew SqlCommand();
			nonQueryCommand->Connection = connection;
			if (ImageUsed) {
				nonQueryCommand->CommandText = "INSERT INTO Users ([userType], [password], [status], [lastName], [firstName], "
					+ "[email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [userImage], [Blocked], [Logins])"
					+ " VALUES (@UserType, @Password, @Status, @LastName, @FirstName, "
					+ "@Email, @DateOfBirth, @Gender, @IdNumber, @PhoneNumber, @ImageData, 'NO', 0)";
			}
			else {
				nonQueryCommand->CommandText = "INSERT INTO Users ([userType], [password], [status], [lastName], [firstName], "
					+ "[email], [dateOfBirth], [gender], [idNumber], [phoneNumber], [Blocked], [Logins])"
					+ " VALUES (@UserType, @Password, @Status, @LastName, @FirstName, "
					+ "@Email, @DateOfBirth, @Gender, @IdNumber, @PhoneNumber, 'NO', 0)";
			}

			nonQueryCommand->Parameters->AddWithValue("@UserType", "Student");
			nonQueryCommand->Parameters->AddWithValue("@Password", tbPassword->Text);
			nonQueryCommand->Parameters->AddWithValue("@Status", "Offline");
			nonQueryCommand->Parameters->AddWithValue("@LastName", lname);
			nonQueryCommand->Parameters->AddWithValue("@FirstName", fname);
			nonQueryCommand->Parameters->AddWithValue("@Email", email);
			nonQueryCommand->Parameters->AddWithValue("@DateOfBirth", dob);
			nonQueryCommand->Parameters->AddWithValue("@Gender", gender);
			nonQueryCommand->Parameters->AddWithValue("@IdNumber", id);
			nonQueryCommand->Parameters->AddWithValue("@PhoneNumber", phone);

			if (ImageUsed) {
				nonQueryCommand->Parameters->Add("@ImageData", SqlDbType::Image)->Value = imageData;
			}

			nonQueryCommand->ExecuteNonQuery();

			SqlCommand^ selectCommand = gcnew SqlCommand();
			selectCommand->Connection = connection;
			selectCommand->CommandText = "SELECT universityID FROM Users WHERE idNumber=@ID";
			selectCommand->Parameters->AddWithValue("@ID", id);

			SqlDataReader^ reader = selectCommand->ExecuteReader();

			if (reader->Read()) {
				Decimal uniID = reader->GetDecimal(0);
				MessageBox::Show("Student Successfully Registered!\nThe Student's university ID is: " + uniID.ToString()
					+ "\nUniversity ID was copied to clipboard!", "Library System: Registration Success!");
				Clipboard::SetText(uniID.ToString());
			}
			connection->Close();
			re_populateComboBox(idsArray, "idNumber", "Users");
			re_populateComboBox(phonesArray, "idNumber", "Users");
			re_populateComboBox(emailsArray, "idNumber", "Users");
			save_update();
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message + "\n\nError copied to clipboard!", "Library Management System: Student Registration");
			Clipboard::SetText(ex->Message);
		}
	}
	else {	}

}

inline System::Void LibraryManagementSystem::AddStudent::btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

inline System::Void LibraryManagementSystem::AddStudent::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();

	ofd->Title = "Select an Image";
	ofd->Filter = "Image Files (*.jpg; *.png; *.gif)|*.jpg; *.png; *.gif|All Files (*.*)|*.*";
	ofd->Multiselect = false;

	if (ofd->ShowDialog() == WFDR::OK)
	{
		imageData = System::IO::File::ReadAllBytes(ofd->FileName);
		pictureBox1->Image = System::Drawing::Image::FromFile(ofd->FileName);
		ImageUsed = true;
	}
	else {
		imageData = nullptr;
		pictureBox1->Image = nullptr;
		ImageUsed = false;
	}
}

inline System::Void LibraryManagementSystem::AddStudent::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}

inline System::Void LibraryManagementSystem::AddStudent::AddAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	cbGender->SelectedIndex = 0;
	cbGender->Text = cbGender->SelectedText;
	re_populateComboBox(idsArray, "idNumber", "Users");
	re_populateComboBox(phonesArray, "idNumber", "Users");
	re_populateComboBox(emailsArray, "idNumber", "Users");
}

inline System::Void LibraryManagementSystem::AddStudent::SomethingChanged(System::Object^ sender, System::EventArgs^ e) {
	save_update();
}
