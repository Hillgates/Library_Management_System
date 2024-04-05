#pragma once
#include "../MyHeader.h"
#include "UpdateUser.h"

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SearchUser
	/// </summary>
	public ref class SearchUser : public System::Windows::Forms::Form
	{
	public:
		SearchUser(User^ searcher)
		{
			InitializeComponent();

			this->searcher = searcher;
			searchUserType = " ";
			//if (searcher->userType == "Student") searchUserType = "  ";// searchUserType = " userType='Student' AND ";
			//else searchUserType = " ";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbSearch;
	protected:

	private: System::Windows::Forms::Panel^ panelSearch;
	private: System::Windows::Forms::Button^ btnSearch;

	private: System::Windows::Forms::ComboBox^ cbSearchBy;

	private: System::Windows::Forms::Button^ btnSearchMatchWholeWord;

	private: System::Windows::Forms::Button^ btnSearchMatchCase;


	private: System::Windows::Forms::Label^ labelSearchBy;
	private: System::Windows::Forms::Panel^ panelAdmin;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Label^ errorUpdate;
	private: System::Windows::Forms::Label^ errorRemove;
	private: System::Windows::Forms::Label^ warningAdminM;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelResult;
	private: System::Windows::Forms::DataGridView^ dgvSearchResult;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnViewUser;




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
		System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnSearchMatchCase_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnSearchMatchWholeWord_Click(System::Object^ sender, System::EventArgs^ e);
		String^ sqlQuery();
		System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SearchStudent_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void dgvSearchResult_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void dgvSearchResult_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void btnViewUser_Click(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
		bool isMatchCase = false, isMatchWholeWord = false;
		String^ searchUserType = " ";
		User^ searcher = gcnew User();
	};
}
