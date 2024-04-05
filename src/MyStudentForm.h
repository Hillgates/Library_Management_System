#pragma once
#include "MyHeader.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyStudentForm
	/// </summary>
	public ref class MyStudentForm : public System::Windows::Forms::Form
	{
	public:
		MyStudentForm(User^ obj)
		{
			student = obj;
			InitializeComponent();
			categoriesDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill; 
			borrowedBooksDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			myOverdueBooksDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel8;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelSelectPictureText;
	private: System::Windows::Forms::TabPage^ booksTabPage;
	private: System::Windows::Forms::TableLayoutPanel^ BooksLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ myBooksOverdueGroupBox;
	private: System::Windows::Forms::DataGridView^ myOverdueBooksDataGridView;





	private: System::Windows::Forms::GroupBox^ returnedBooksGroupBox;
	private: System::Windows::Forms::DataGridView^ returnedBooksDataGridView;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TableLayoutPanel^ controlsTableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnRefreshBooks;
	private: System::Windows::Forms::Button^ btnBooks;
	private: System::Windows::Forms::GroupBox^ borrowBooksGroupBox;
	private: System::Windows::Forms::DataGridView^ borrowedBooksDataGridView;

	private: System::Windows::Forms::GroupBox^ categoriesGroupBox;
	private: System::Windows::Forms::DataGridView^ categoriesDataGridView;
	private: System::Windows::Forms::GroupBox^ allBooksGoupBox;
	private: System::Windows::Forms::DataGridView^ allBooksDataGridView;
	private: System::Windows::Forms::Label^ warningPasswordMatch;
	private: System::Windows::Forms::Label^ warningPasswordLength;
	private: System::Windows::Forms::Label^ warningPhone;
	private: System::Windows::Forms::Label^ warningEmail;
	private: System::Windows::Forms::Label^ warningPhoneExists;
	private: System::Windows::Forms::Label^ warningEmailExists;
	private: System::Windows::Forms::Button^ btnNewPassConfirm;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ btnNewPass;
	private: System::Windows::Forms::Button^ btnOldPass;
	private: System::Windows::Forms::Button^ btnEmail;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::TextBox^ tbNewPassConfirm;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ labelNewPassConfirm;
	private: System::Windows::Forms::TextBox^ tbNewPass;
	private: System::Windows::Forms::MaskedTextBox^ tbPhone;
	private: System::Windows::Forms::Label^ labelNewPass;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::TextBox^ tbOldPass;
	private: System::Windows::Forms::Label^ labelOldPass;
	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::ComboBox^ phonesArray;
	private: System::Windows::Forms::ComboBox^ emailsArray;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TabPage^ dashboardTabPage;
	private: System::Windows::Forms::Panel^ panelDashboardUsable;
	private: System::Windows::Forms::Label^ DashboardLabel;
	private: System::Windows::Forms::Panel^ panelBanner;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ usertypeLabel;
	private: System::Windows::Forms::LinkLabel^ LogoutLabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ surnameLabel;
	private: System::Windows::Forms::Label^ firstNameLabel;
	private: System::Windows::Forms::Label^ universityIDLabel;
	private: System::Windows::Forms::LinkLabel^ toProfileLabel;
	private: System::Windows::Forms::PictureBox^ ppDash;
	private: System::Windows::Forms::GroupBox^ statsGroup;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ totalStudentCountValue;
	private: System::Windows::Forms::Label^ totalAdminCountValue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ totalAvailableCountValue;
	private: System::Windows::Forms::Label^ totalBooksCountValue;
	private: System::Windows::Forms::Label^ totalOverdueCountValue;
	private: System::Windows::Forms::Label^ totalBorrowedCountValue;
	private: System::Windows::Forms::Label^ totalOverdueLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ totBorrowedBooksLabel1;
	private: System::Windows::Forms::Label^ totalBooksLabel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ adminsOnlineValue;
	private: System::Windows::Forms::Label^ studentsOnlineValue;
	private: System::Windows::Forms::Label^ adminsOnlineLabel;
	private: System::Windows::Forms::Label^ studentsOnlineLabel;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ themeSetting;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TextBox^ tbUniversityID;
	private: System::Windows::Forms::TextBox^ tbGender;
	private: System::Windows::Forms::TextBox^ tbDOB;
	private: System::Windows::Forms::Label^ labelDOB;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelUniID;
	private: System::Windows::Forms::GroupBox^ fontSetting;
	private: System::Windows::Forms::Label^ labelProfile;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ labelFirstName;
	private: System::Windows::Forms::Label^ labelGender;
	private: System::Windows::Forms::Label^ labelLastName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::Button^ btnDiscardChangesProfile;
	private: System::Windows::Forms::Button^ btnSaveChangesProfile;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TabPage^ notificationsTabPage;
	private: System::Windows::Forms::TabPage^ settingsTabPage;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ profileTabPage;
private: System::Windows::Forms::Label^ totDiffBooks;

private: System::Windows::Forms::Label^ totDifferentBookLabel;
private: System::Windows::Forms::Label^ appVersionLabelDash;
private: System::Windows::Forms::Label^ appVersionLabelNotifications;
private: System::Windows::Forms::Label^ appVersionLabelSettings;


private: System::Windows::Forms::Label^ appVersionLabelProfile;




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

		void updateStats();
		void refreshAllTables();
		System::Void MyStudentFormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		System::Void SaveChangesProfile(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscardProfileChanges(System::Object^ sender, System::EventArgs^ e);
		System::Void Logout(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		System::Void GoToProfile(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		System::Void MyStudentForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RefreshEverything(System::Object^ sender, System::EventArgs^ e);
		System::Void Books_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SeeOldPassword_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SeeNewPassword_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SeeNewPassConfirm_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SomethingInProfileChanged(System::Object^ sender, System::EventArgs^ e);
		void checkForErrors();
		void checkForChanges();
#pragma endregion
		int totAdminsOnline, totStudentsOnline,
			totBooks, totDifferentBooks, totBorrowed, totNotReturned, totOverdue, totAvailable,
			totStudents, totAdmins; // dashboard stats

		User^ student = nullptr;
		String^ email, ^ phone;
		array<Byte>^ imageData;

		bool profilePictureChanged = false, phoneChanged = false, emailChanged = false, oldPasswordCorrect = false, passwordChanged = false;
		bool SeeOldPassword = false, SeeNewPassword = false, SeeNewPasswordConfirm = false, userDetailsModified = false;
	};
}
