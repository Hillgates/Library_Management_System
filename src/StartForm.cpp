#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LibraryManagementSystem::StartForm startForm;  // create startForm

	//startForm.ShowDialog(); // Show startForm as a dialog frame
	Application::Run(% startForm);
}

/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void LibraryManagementSystem::StartForm::InitializeComponent(void)
{
	this->mainLbl = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->tbUsername = (gcnew System::Windows::Forms::TextBox());
	this->tbPassword = (gcnew System::Windows::Forms::TextBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->btnLogin = (gcnew System::Windows::Forms::Button());
	this->forgotPassLbl = (gcnew System::Windows::Forms::LinkLabel());
	this->rememberMe = (gcnew System::Windows::Forms::CheckBox());
	this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
	this->groupBox1->SuspendLayout();
	this->SuspendLayout();
	// 
	// mainLbl
	// 
	this->mainLbl->AutoSize = true;
	this->mainLbl->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->mainLbl->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->mainLbl->ForeColor = System::Drawing::Color::Black;
	this->mainLbl->Location = System::Drawing::Point(37, 30);
	this->mainLbl->Name = L"mainLbl";
	this->mainLbl->Size = System::Drawing::Size(318, 32);
	this->mainLbl->TabIndex = 0;
	this->mainLbl->Text = L"Library Management App";
	this->mainLbl->UseMnemonic = false;
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->Location = System::Drawing::Point(39, 113);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(83, 20);
	this->label1->TabIndex = 1;
	this->label1->Tag = L"x";
	this->label1->Text = L"Username";
	this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// tbUsername
	// 
	this->tbUsername->BackColor = System::Drawing::Color::LightBlue;
	this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tbUsername->Location = System::Drawing::Point(128, 112);
	this->tbUsername->MaxLength = 20;
	this->tbUsername->Name = L"tbUsername";
	this->tbUsername->Size = System::Drawing::Size(170, 19);
	this->tbUsername->TabIndex = 2;
	this->tbUsername->Tag = L"x";
	// 
	// tbPassword
	// 
	this->tbPassword->BackColor = System::Drawing::Color::LightBlue;
	this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tbPassword->Location = System::Drawing::Point(128, 154);
	this->tbPassword->MaxLength = 16;
	this->tbPassword->Name = L"tbPassword";
	this->tbPassword->Size = System::Drawing::Size(170, 19);
	this->tbPassword->TabIndex = 4;
	this->tbPassword->UseSystemPasswordChar = true;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Location = System::Drawing::Point(39, 154);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(78, 20);
	this->label2->TabIndex = 3;
	this->label2->Text = L"Password";
	this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::Black;
	this->panel1->Location = System::Drawing::Point(128, 132);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(170, 2);
	this->panel1->TabIndex = 5;
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::Black;
	this->panel2->Location = System::Drawing::Point(128, 172);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(170, 2);
	this->panel2->TabIndex = 6;
	// 
	// btnLogin
	// 
	this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnLogin->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->btnLogin->Location = System::Drawing::Point(128, 278);
	this->btnLogin->Name = L"btnLogin";
	this->btnLogin->Size = System::Drawing::Size(105, 34);
	this->btnLogin->TabIndex = 7;
	this->btnLogin->Text = L"Login";
	this->btnLogin->UseVisualStyleBackColor = true;
	this->btnLogin->Click += gcnew System::EventHandler(this, &StartForm::btnLogin_Click);
	// 
	// forgotPassLbl
	// 
	this->forgotPassLbl->AutoSize = true;
	this->forgotPassLbl->Location = System::Drawing::Point(40, 198);
	this->forgotPassLbl->Name = L"forgotPassLbl";
	this->forgotPassLbl->Size = System::Drawing::Size(88, 13);
	this->forgotPassLbl->TabIndex = 8;
	this->forgotPassLbl->TabStop = true;
	this->forgotPassLbl->Text = L"forgot password\?";
	// 
	// rememberMe
	// 
	this->rememberMe->AutoSize = true;
	this->rememberMe->Cursor = System::Windows::Forms::Cursors::Hand;
	this->rememberMe->Location = System::Drawing::Point(47, 225);
	this->rememberMe->Name = L"rememberMe";
	this->rememberMe->Size = System::Drawing::Size(330, 17);
	this->rememberMe->TabIndex = 11;
	this->rememberMe->Text = L"Remember Me. (Not recommended for shared or public devices).";
	this->rememberMe->UseVisualStyleBackColor = true;
	// 
	// groupBox1
	// 
	this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	this->groupBox1->Controls->Add(this->rememberMe);
	this->groupBox1->Controls->Add(this->forgotPassLbl);
	this->groupBox1->Controls->Add(this->btnLogin);
	this->groupBox1->Controls->Add(this->panel2);
	this->groupBox1->Controls->Add(this->panel1);
	this->groupBox1->Controls->Add(this->tbPassword);
	this->groupBox1->Controls->Add(this->label2);
	this->groupBox1->Controls->Add(this->tbUsername);
	this->groupBox1->Controls->Add(this->label1);
	this->groupBox1->Controls->Add(this->mainLbl);
	this->groupBox1->Location = System::Drawing::Point(70, 40);
	this->groupBox1->Name = L"groupBox1";
	this->groupBox1->Size = System::Drawing::Size(393, 345);
	this->groupBox1->TabIndex = 12;
	this->groupBox1->TabStop = false;
	// 
	// StartForm
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackColor = System::Drawing::Color::LightBlue;
	this->ClientSize = System::Drawing::Size(513, 415);
	this->Controls->Add(this->groupBox1);
	this->Name = L"StartForm";
	this->Text = L"Login Form";
	this->groupBox1->ResumeLayout(false);
	this->groupBox1->PerformLayout();
	this->ResumeLayout(false);

}

inline System::Void LibraryManagementSystem::StartForm::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ universityID = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;

	// if username or password fields are empty...
	if (universityID->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter username(university id) and password",
			"Username or Password Empty", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (universityID->Length > 9) {
		MessageBox::Show("Username or password is incorrect", "Username or Password Error", MessageBoxButtons::OK);
		return;
	}

	
	try {
		SqlConnection^ connection = StartConnection();

		String^ sqlQuery = "SELECT * FROM Users WHERE universityID=@iduni AND password=@pwd;";
		SqlCommand command(sqlQuery, connection);
		command.Parameters->AddWithValue("@iduni", universityID);
		command.Parameters->AddWithValue("@pwd", password);

		// Read contents of database
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			// store to object
			user->password = password;
			user->universityID = universityID;
			user->userType = reader->GetString(1);
			user->status = reader->GetString(3);
			user->lastName = reader->GetString(4);
			user->firstName = reader->GetString(5);
			user->email = reader->GetString(6);
			user->dateOfBirth = reader->GetDateTime(7);
			user->gender = reader->GetString(8);
			user->idNumber = reader->GetString(9);
			user->phoneNumber = reader->GetString(10);
			user->blocked = reader->GetString(12);
			user->logins = reader->GetInt32(13);
			// Check if column 12 is not null
			if (!reader->IsDBNull(11))
			{
				// Retrieve the image data from the column
				array<unsigned char>^ imageData = safe_cast<array<unsigned char>^>(reader->GetValue(11));

				// Convert the image data to a System::Drawing::Image^ object
				using namespace System::IO;

				MemoryStream^ stream = gcnew MemoryStream(imageData);
				user->image = Image::FromStream(stream);
			}
			else
			{
				user->image = nullptr;
			}
		}
		else
			MessageBox::Show("Username or password is incorrect", "Username or Password Error", MessageBoxButtons::OK);
	}
	catch (Exception^ ex) {
		;
		MessageBox::Show(ex->Message, "Library System: Login");
	}

	//user->InitializeVariables(universityID);
	//if (user->password != password) {
	//	MessageBox::Show("Username or password is incorrect", "Username or Password Error", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	//	return;
	//}
	try
	{
		// check user
		// if user == nullptr then the form was closed
		if (user != nullptr) {
			if (user->userType == "Main Admin") { // main admin form
				if (user->blocked->ToLower() == "no") {
					MainAdminForm^ adminAppMain = gcnew MainAdminForm(user);
					this->Hide(); 
					adminAppMain->ShowDialog();
					user = nullptr;
					this->Show();
				}
				else {
					MessageBox::Show("It appears you are blocked by the System?");
				}
			}
			else if (user->userType == "Standard Admin") {
				if (user->blocked->ToLower() == "no") {
					StandardAdminForm^ adminAppStandard = gcnew StandardAdminForm(user); 
					this->Hide();
					adminAppStandard->ShowDialog();
					user = nullptr;
					this->Show();
				}
				else {
					MessageBox::Show("You are blocked by the System! Please contact the Main Administrator!");
				}
			}
			else if (user->userType == "Student") {
				if (user->blocked->ToLower() == "no") {
					
					MyStudentForm^ studentApp = gcnew MyStudentForm(user);
					this->Hide(); 
					studentApp->ShowDialog();
					user = nullptr;
					this->Show();
				}
				else {
					MessageBox::Show("You are blocked by the System! Please contact an Administrator!");
				}
			}
		}
	}
	catch (Exception^ ex)
	{
		ex;

	}
		
}
