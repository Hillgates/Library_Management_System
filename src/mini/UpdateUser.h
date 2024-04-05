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
	/// Summary for UpdateUser
	/// </summary>
	public ref class UpdateUser : public System::Windows::Forms::Form
	{
	public:
		UpdateUser(User^ updater) {
			InitializeComponent();
			user = updater;

			btnLname->Visible = false;
			btnFname->Visible = false;
			btnDOB->Visible = false;
			tbLname->Visible = false;
			tbFname->Visible = false;
			dateTimePicker1->Visible = false;

			label1->Text = "My details Update";
		}
		UpdateUser(User^ user, String^ reasonForOpeningForm)
		{
			InitializeComponent();
			this->user = user;

			if (reasonForOpeningForm == "Viewing") {
				ty = user->userType;
				if (ty == "Main Admin") ty = "Main Admin";
				else if (ty == "Standard Admin") ty = "Standard Admin";

				label1->Text = ty + " View";
				this->Text = ty + " Details View";

				btnUpdate->Visible = false;
				btnClose->Visible = false;

				tbEmail->ReadOnly = true;
				mtbPhone->ReadOnly = true;
				tbFname->ReadOnly = true;
				tbLname->ReadOnly = true;
				dateTimePicker1->Enabled = false;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ warningPhoneExists;
	private: System::Windows::Forms::Label^ warningEmailExists;
	private: System::Windows::Forms::Label^ warningPhone;
	private: System::Windows::Forms::Label^ warningFname;
	private: System::Windows::Forms::Label^ warningLname;
	private: System::Windows::Forms::Label^ warningEmail;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ tbLname;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::MaskedTextBox^ mtbPhone;
	private: System::Windows::Forms::TextBox^ tbFname;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnLname;
	private: System::Windows::Forms::Button^ btnFname;
	private: System::Windows::Forms::Button^ btnDOB;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::Button^ btnEmail;
	private: System::Windows::Forms::ComboBox^ emailsArray;
	private: System::Windows::Forms::ComboBox^ phonesArray;
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
		void SomethingChanged(System::Object^ sender, System::EventArgs^ e);
		void checkForErrors();
		void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e);
		void btnClose_Click(System::Object^ sender, System::EventArgs^ e);
		void checkForChanges();
		void UpdateAdmin_Load(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
		User^ user = nullptr;
		String^ lname, ^ fname, ^ email, ^ phone;
		DateTime^ dob;
		String^ ty;
		
		bool isUpdateSurname, isUpdateName, isUpdateEmail, isUpdatePhone, isUpdateDOB;
	};
}
