#pragma once
#include "MainAdminForm.h"
#include "StandardAdminForm.h"
#include "MyStudentForm.h"


namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainLbl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::LinkLabel^ forgotPassLbl;


	private: System::Windows::Forms::CheckBox^ rememberMe;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
	public: 
		User^ user = nullptr;

	private: 
		System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);
};
}
