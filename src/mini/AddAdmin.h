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
	/// Summary for AddAdmin
	/// </summary>
	public ref class AddAdmin : public System::Windows::Forms::Form
	{
	public:
		AddAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			timer1->Start();
			dateTimePicker1->MaxDate = System::DateTime::Now.AddYears(-18);
			dateTimePicker1->MinDate = System::DateTime::Now.AddYears(-50);
			dateTimePicker1->Value = System::DateTime::Now.AddYears(-18).AddDays(-1);
			cbGender->SelectedIndex = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbGender;
	protected:

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ tbLname;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::MaskedTextBox^ mtbPhone;
	private: System::Windows::Forms::TextBox^ tbFname;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Label^ label39;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbPassword;



	private: System::Windows::Forms::Label^ label38;




	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MaskedTextBox^ tbID;
	private: System::Windows::Forms::Label^ warningPasswordMatch;
	private: System::Windows::Forms::Label^ warningPhone;
	private: System::Windows::Forms::Label^ warningID;
	private: System::Windows::Forms::Label^ warningFname;
	private: System::Windows::Forms::Label^ warningLname;
	private: System::Windows::Forms::Label^ warningEmail;
	private: System::Windows::Forms::Label^ warningPasswordLength;
	private: System::Windows::Forms::Label^ warningIDexists;
	private: System::Windows::Forms::Label^ warningEmailExists;
	private: System::Windows::Forms::Label^ warningPhoneExists;
	private: System::Windows::Forms::ComboBox^ idArray;
	private: System::Windows::Forms::ComboBox^ phoneArray;
	private: System::Windows::Forms::ComboBox^ emailArray;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
		void checkForErrors();
		void save_update();
		System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
		System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) { }
		System::Void AddAdmin_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void SomethingChanged(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
		String^ pass1="", ^ pass2 = "", ^ phone = "", ^ imagePath;
		String^ lname,^ fname,^ email,^ dob,^ id, ^ gender;

		bool ImageUsed = false;

		// Read the image file into a byte array
		array<Byte>^ imageData;// = System::IO::File::ReadAllBytes("path/to/image.jpg");

		// Plan B is also to simply store user data to a User object
		User^ userToBeAdded = gcnew User();
};
}
