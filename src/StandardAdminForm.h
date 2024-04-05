#pragma once
#include "mini/SearchBook.h"
#include "mini/SearchUser.h"
#include "mini/AddStudent.h"
#include "MyHeader.h"

namespace LibraryManagementSystem {
	/// <summary>
	/// Summary for StandardAdminForm
	/// </summary>
	public ref class StandardAdminForm : public System::Windows::Forms::Form
	{
	public:
		StandardAdminForm(User^ obj)
		{
			admin = obj;
			InitializeComponent();

			borrowedDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			categoriesDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StandardAdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ dashboardTabPage;
	private: System::Windows::Forms::Label^ labelTotalBooks;
	private: System::Windows::Forms::TabPage^ booksTabPage;
	private: System::Windows::Forms::TabPage^ studentsTabPage;
	private: System::Windows::Forms::TabPage^ ProfileTabPage;






	private: System::Windows::Forms::TableLayoutPanel^ BooksLayoutPanel1;
	private: System::Windows::Forms::DataGridView^ borrowedDataGridView;
	private: System::Windows::Forms::DataGridView^ returnedDataGridView;

	private: System::Windows::Forms::GroupBox^ borrowBooksGroupBox;
	private: System::Windows::Forms::GroupBox^ categoriesGroupBox;
	private: System::Windows::Forms::DataGridView^ categoriesDataGridView;
	private: System::Windows::Forms::GroupBox^ returnedBooksGroupBox;
	private: System::Windows::Forms::GroupBox^ overdueBooksGroupBox;
	private: System::Windows::Forms::DataGridView^ overdueBooksDataGridView;



	private: System::Windows::Forms::GroupBox^ allBooksGoupBox;
	private: System::Windows::Forms::DataGridView^ allBooksDataGridView;
	private: System::Windows::Forms::GroupBox^ studentsReturnedBooksGB;
	private: System::Windows::Forms::GroupBox^ studentBorrowedBooksGB;
	private: System::Windows::Forms::GroupBox^ allStudentsGB;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ submittedBooksLateGB;
	private: System::Windows::Forms::DataGridView^ studentsRecentlyReturnedBooksDGView;
	private: System::Windows::Forms::DataGridView^ studentsBorrowedBooksDGView;
	private: System::Windows::Forms::DataGridView^ allStudentDGView;
	private: System::Windows::Forms::Button^ studentsButton;
	private: System::Windows::Forms::DataGridView^ noReturnsAndOverdueDGView;
	private: System::Windows::Forms::DataGridView^ submittedBooksLateDGView;
	private: System::Windows::Forms::TableLayoutPanel^ studentsLayoutPanel2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TableLayoutPanel^ controlsTableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnBook;
	private: System::Windows::Forms::GroupBox^ bookButtonsGroupbox;
	private: System::Windows::Forms::Button^ searchBooksButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ searchStudentButton;
	private: System::Windows::Forms::Button^ refreshButton2;
	private: System::Windows::Forms::Button^ refreshButton1;
	private: System::Windows::Forms::GroupBox^ statsGroup;
	private: System::Windows::Forms::Label^ labelTotalBorrowedBooks;
	private: System::Windows::Forms::Label^ labelStudentsOnline;
	private: System::Windows::Forms::Label^ labelTotalAdmins;
	private: System::Windows::Forms::Label^ labelTotslStudents;
	private: System::Windows::Forms::Label^ labelTotalAvailableBooks;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ labelAdminsOnline;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ totalStudentCountValue;
	private: System::Windows::Forms::Label^ totalAdminCountValue;
	private: System::Windows::Forms::Label^ totalAvailableCountValue;
	private: System::Windows::Forms::Label^ totalBooksCountValue;
	private: System::Windows::Forms::Label^ totalOverdueCountValue;
	private: System::Windows::Forms::Label^ totalBorrowedCountValue;
	private: System::Windows::Forms::Label^ labelBooksOverdue;
	private: System::Windows::Forms::Label^ adminsOnlineValue;
	private: System::Windows::Forms::Label^ studentsOnlineValue;
	private: System::Windows::Forms::TabPage^ notificationsTabPage;
	private: System::Windows::Forms::Label^ labelFeatureNotAvailable;
	private: System::Windows::Forms::Button^ btnDiscardChangesProfile;
	private: System::Windows::Forms::Button^ btnSaveChangesProfile;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::MaskedTextBox^ tbPhone;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::TextBox^ tbUniversityID;
	private: System::Windows::Forms::TextBox^ tbGender;
	private: System::Windows::Forms::TextBox^ tbDOB;
	private: System::Windows::Forms::Label^ labelDOB;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelUniID;
	private: System::Windows::Forms::Label^ labelGender;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ labelLastName;
	private: System::Windows::Forms::Label^ labelFirstName;
	private: System::Windows::Forms::TextBox^ tbNewPassConfirm;
	private: System::Windows::Forms::Label^ labelNewPassConfirm;
	private: System::Windows::Forms::TextBox^ tbNewPass;
	private: System::Windows::Forms::Label^ labelNewPass;
	private: System::Windows::Forms::TextBox^ tbOldPass;
	private: System::Windows::Forms::Label^ labelOldPass;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ labelMyProfileText;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panelBanner;
	private: System::Windows::Forms::PictureBox^ ppDash;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::LinkLabel^ LogoutLabel;
	private: System::Windows::Forms::LinkLabel^ toProfileLabel;
	private: System::Windows::Forms::Label^ surnameLabel;
	private: System::Windows::Forms::Label^ firstNameLabel;
	private: System::Windows::Forms::Label^ universityIDLabel;
	private: System::Windows::Forms::Panel^ panelDashboardUsable;
	private: System::Windows::Forms::Label^ labelDashboardText;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ labelUserType;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Label^ labelSelectPictureText;
	private: System::Windows::Forms::Button^ btnEmail;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnNewPassConfirm;
	private: System::Windows::Forms::Button^ btnNewPass;
	private: System::Windows::Forms::Button^ btnOldPass;
	private: System::Windows::Forms::Label^ warningPhoneExists;
	private: System::Windows::Forms::Label^ warningEmailExists;
	private: System::Windows::Forms::Label^ warningPhone;
	private: System::Windows::Forms::Label^ warningEmail;
	private: System::Windows::Forms::ComboBox^ phonesArray;
	private: System::Windows::Forms::ComboBox^ emailsArray;
	private: System::Windows::Forms::Label^ warningPasswordMatch;
	private: System::Windows::Forms::Label^ warningPasswordLength;
private: System::Windows::Forms::Label^ totDiffBooks;
private: System::Windows::Forms::Label^ totDifferentBookLabel;
private: System::Windows::Forms::TabPage^ settingsTabPage;
private: System::Windows::Forms::Label^ appVersionLabelSettings;
private: System::Windows::Forms::GroupBox^ fontSetting;
private: System::Windows::Forms::TrackBar^ trackBar1;
private: System::Windows::Forms::GroupBox^ themeSetting;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::Label^ appVersionLabelProfile;
private: System::Windows::Forms::Label^ appVersionLabelNotifications;
private: System::Windows::Forms::Label^ appVersionLabelDash;
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
		void SeeOldPassword_Click(System::Object^ sender, System::EventArgs^ e);
		void SeeNewPassword_Click(System::Object^ sender, System::EventArgs^ e);
		void SeeNewPassConfirm_Click(System::Object^ sender, System::EventArgs^ e);
		void StandardAdminForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
		void searchBooksButton_Click(System::Object^ sender, System::EventArgs^ e);
		void searchStudentButton_Click(System::Object^ sender, System::EventArgs^ e);
		void profilePicture_Click(System::Object^ sender, System::EventArgs^ e);
		void DiscardProfileChanges(System::Object^ sender, System::EventArgs^ e);
		void SaveProfileChanges(System::Object^ sender, System::EventArgs^ e);
		void GoToProfile_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		void StandardAdminForm_Load(System::Object^ sender, System::EventArgs^ e);
		void Logout_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		void studentsButton_Click(System::Object^ sender, System::EventArgs^ e);
		void btnBook_Click(System::Object^ sender, System::EventArgs^ e);
		void SomethingChanged(System::Object^ sender, System::EventArgs^ e);
		void RefreshEverything(System::Object^ sender, System::EventArgs^ e);
		void updateStats();
		void refreshAllTables();
		void checkForErrors();
		void checkForChanges();
#pragma endregion
		private:
		int totAdminsOnline, totStudentsOnline,
			totBooks, totDifferentBooks, totBorrowed, totNotReturned, totOverdue, totAvailable,
			totStudents, totAdmins; // dashboard stats
		
		String^ email, ^ phone;

		User^ admin = nullptr;

		array<Byte>^ imageData;

		bool profilePictureChanged = false, phoneChanged = false, emailChanged = false, oldPasswordCorrect = false, passwordChanged = false;

		bool SeeOldPassword = false, SeeNewPassword = false, SeeNewPasswordConfirm = false, userDetailsModified = false;
};
}
