#include "MyStudentForm.h"
#include "mini/SearchBook.h"

using namespace LibraryManagementSystem;
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void MyStudentForm::InitializeComponent(void) {
	this->panel8 = (gcnew System::Windows::Forms::Panel());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->labelSelectPictureText = (gcnew System::Windows::Forms::Label());
	this->booksTabPage = (gcnew System::Windows::Forms::TabPage());
	this->BooksLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
	this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
	this->controlsTableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
	this->btnRefreshBooks = (gcnew System::Windows::Forms::Button());
	this->btnBooks = (gcnew System::Windows::Forms::Button());
	this->allBooksGoupBox = (gcnew System::Windows::Forms::GroupBox());
	this->allBooksDataGridView = (gcnew System::Windows::Forms::DataGridView());
	this->categoriesGroupBox = (gcnew System::Windows::Forms::GroupBox());
	this->categoriesDataGridView = (gcnew System::Windows::Forms::DataGridView());
	this->myBooksOverdueGroupBox = (gcnew System::Windows::Forms::GroupBox());
	this->myOverdueBooksDataGridView = (gcnew System::Windows::Forms::DataGridView());
	this->returnedBooksGroupBox = (gcnew System::Windows::Forms::GroupBox());
	this->returnedBooksDataGridView = (gcnew System::Windows::Forms::DataGridView());
	this->borrowBooksGroupBox = (gcnew System::Windows::Forms::GroupBox());
	this->borrowedBooksDataGridView = (gcnew System::Windows::Forms::DataGridView());
	this->warningPasswordMatch = (gcnew System::Windows::Forms::Label());
	this->warningPasswordLength = (gcnew System::Windows::Forms::Label());
	this->warningPhone = (gcnew System::Windows::Forms::Label());
	this->warningEmail = (gcnew System::Windows::Forms::Label());
	this->warningPhoneExists = (gcnew System::Windows::Forms::Label());
	this->warningEmailExists = (gcnew System::Windows::Forms::Label());
	this->btnNewPassConfirm = (gcnew System::Windows::Forms::Button());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->panel9 = (gcnew System::Windows::Forms::Panel());
	this->btnNewPass = (gcnew System::Windows::Forms::Button());
	this->btnOldPass = (gcnew System::Windows::Forms::Button());
	this->btnEmail = (gcnew System::Windows::Forms::Button());
	this->btnPhone = (gcnew System::Windows::Forms::Button());
	this->tbNewPassConfirm = (gcnew System::Windows::Forms::TextBox());
	this->tbEmail = (gcnew System::Windows::Forms::TextBox());
	this->labelNewPassConfirm = (gcnew System::Windows::Forms::Label());
	this->tbNewPass = (gcnew System::Windows::Forms::TextBox());
	this->tbPhone = (gcnew System::Windows::Forms::MaskedTextBox());
	this->labelNewPass = (gcnew System::Windows::Forms::Label());
	this->labelEmail = (gcnew System::Windows::Forms::Label());
	this->tbOldPass = (gcnew System::Windows::Forms::TextBox());
	this->labelOldPass = (gcnew System::Windows::Forms::Label());
	this->labelPhone = (gcnew System::Windows::Forms::Label());
	this->phonesArray = (gcnew System::Windows::Forms::ComboBox());
	this->emailsArray = (gcnew System::Windows::Forms::ComboBox());
	this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
	this->dashboardTabPage = (gcnew System::Windows::Forms::TabPage());
	this->panelDashboardUsable = (gcnew System::Windows::Forms::Panel());
	this->DashboardLabel = (gcnew System::Windows::Forms::Label());
	this->panelBanner = (gcnew System::Windows::Forms::Panel());
	this->panel12 = (gcnew System::Windows::Forms::Panel());
	this->btnRefresh = (gcnew System::Windows::Forms::Button());
	this->panel11 = (gcnew System::Windows::Forms::Panel());
	this->usertypeLabel = (gcnew System::Windows::Forms::Label());
	this->LogoutLabel = (gcnew System::Windows::Forms::LinkLabel());
	this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
	this->surnameLabel = (gcnew System::Windows::Forms::Label());
	this->firstNameLabel = (gcnew System::Windows::Forms::Label());
	this->universityIDLabel = (gcnew System::Windows::Forms::Label());
	this->toProfileLabel = (gcnew System::Windows::Forms::LinkLabel());
	this->ppDash = (gcnew System::Windows::Forms::PictureBox());
	this->statsGroup = (gcnew System::Windows::Forms::GroupBox());
	this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->totalStudentCountValue = (gcnew System::Windows::Forms::Label());
	this->totalAdminCountValue = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->totDiffBooks = (gcnew System::Windows::Forms::Label());
	this->totalAvailableCountValue = (gcnew System::Windows::Forms::Label());
	this->totalBooksCountValue = (gcnew System::Windows::Forms::Label());
	this->totDifferentBookLabel = (gcnew System::Windows::Forms::Label());
	this->totalOverdueCountValue = (gcnew System::Windows::Forms::Label());
	this->totalBorrowedCountValue = (gcnew System::Windows::Forms::Label());
	this->totalOverdueLabel = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->totBorrowedBooksLabel1 = (gcnew System::Windows::Forms::Label());
	this->totalBooksLabel1 = (gcnew System::Windows::Forms::Label());
	this->panel3 = (gcnew System::Windows::Forms::Panel());
	this->appVersionLabelDash = (gcnew System::Windows::Forms::Label());
	this->adminsOnlineValue = (gcnew System::Windows::Forms::Label());
	this->studentsOnlineValue = (gcnew System::Windows::Forms::Label());
	this->adminsOnlineLabel = (gcnew System::Windows::Forms::Label());
	this->studentsOnlineLabel = (gcnew System::Windows::Forms::Label());
	this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
	this->themeSetting = (gcnew System::Windows::Forms::GroupBox());
	this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
	this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
	this->tbUniversityID = (gcnew System::Windows::Forms::TextBox());
	this->tbGender = (gcnew System::Windows::Forms::TextBox());
	this->tbDOB = (gcnew System::Windows::Forms::TextBox());
	this->labelDOB = (gcnew System::Windows::Forms::Label());
	this->tbID = (gcnew System::Windows::Forms::TextBox());
	this->labelID = (gcnew System::Windows::Forms::Label());
	this->labelUniID = (gcnew System::Windows::Forms::Label());
	this->fontSetting = (gcnew System::Windows::Forms::GroupBox());
	this->labelProfile = (gcnew System::Windows::Forms::Label());
	this->panel5 = (gcnew System::Windows::Forms::Panel());
	this->labelFirstName = (gcnew System::Windows::Forms::Label());
	this->labelGender = (gcnew System::Windows::Forms::Label());
	this->labelLastName = (gcnew System::Windows::Forms::Label());
	this->tbLastName = (gcnew System::Windows::Forms::TextBox());
	this->panel7 = (gcnew System::Windows::Forms::Panel());
	this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
	this->btnDiscardChangesProfile = (gcnew System::Windows::Forms::Button());
	this->btnSaveChangesProfile = (gcnew System::Windows::Forms::Button());
	this->panel10 = (gcnew System::Windows::Forms::Panel());
	this->notificationsTabPage = (gcnew System::Windows::Forms::TabPage());
	this->appVersionLabelNotifications = (gcnew System::Windows::Forms::Label());
	this->settingsTabPage = (gcnew System::Windows::Forms::TabPage());
	this->appVersionLabelSettings = (gcnew System::Windows::Forms::Label());
	this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
	this->profileTabPage = (gcnew System::Windows::Forms::TabPage());
	this->appVersionLabelProfile = (gcnew System::Windows::Forms::Label());
	this->panel8->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->booksTabPage->SuspendLayout();
	this->BooksLayoutPanel1->SuspendLayout();
	this->groupBox4->SuspendLayout();
	this->controlsTableLayoutPanel2->SuspendLayout();
	this->allBooksGoupBox->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allBooksDataGridView))->BeginInit();
	this->categoriesGroupBox->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->categoriesDataGridView))->BeginInit();
	this->myBooksOverdueGroupBox->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myOverdueBooksDataGridView))->BeginInit();
	this->returnedBooksGroupBox->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->returnedBooksDataGridView))->BeginInit();
	this->borrowBooksGroupBox->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrowedBooksDataGridView))->BeginInit();
	this->panel9->SuspendLayout();
	this->dashboardTabPage->SuspendLayout();
	this->panelDashboardUsable->SuspendLayout();
	this->panelBanner->SuspendLayout();
	this->panel12->SuspendLayout();
	this->panel11->SuspendLayout();
	this->tableLayoutPanel3->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ppDash))->BeginInit();
	this->statsGroup->SuspendLayout();
	this->tableLayoutPanel2->SuspendLayout();
	this->panel2->SuspendLayout();
	this->panel1->SuspendLayout();
	this->panel3->SuspendLayout();
	this->themeSetting->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
	this->fontSetting->SuspendLayout();
	this->panel5->SuspendLayout();
	this->panel7->SuspendLayout();
	this->panel10->SuspendLayout();
	this->notificationsTabPage->SuspendLayout();
	this->settingsTabPage->SuspendLayout();
	this->tabControl1->SuspendLayout();
	this->profileTabPage->SuspendLayout();
	this->SuspendLayout();
	// 
	// panel8
	// 
	this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
	this->panel8->Controls->Add(this->pictureBox1);
	this->panel8->Controls->Add(this->labelSelectPictureText);
	this->panel8->Location = System::Drawing::Point(536, 1);
	this->panel8->Name = L"panel8";
	this->panel8->Size = System::Drawing::Size(211, 185);
	this->panel8->TabIndex = 135;
	// 
	// pictureBox1
	// 
	this->pictureBox1->BackColor = System::Drawing::Color::Black;
	this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->pictureBox1->Location = System::Drawing::Point(0, 0);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(211, 172);
	this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->pictureBox1->TabIndex = 59;
	this->pictureBox1->TabStop = false;
	this->pictureBox1->Click += gcnew System::EventHandler(this, &MyStudentForm::pictureBox1_Click);
	// 
	// labelSelectPictureText
	// 
	this->labelSelectPictureText->AutoSize = true;
	this->labelSelectPictureText->Dock = System::Windows::Forms::DockStyle::Bottom;
	this->labelSelectPictureText->Location = System::Drawing::Point(0, 172);
	this->labelSelectPictureText->Name = L"labelSelectPictureText";
	this->labelSelectPictureText->Size = System::Drawing::Size(182, 13);
	this->labelSelectPictureText->TabIndex = 58;
	this->labelSelectPictureText->Text = L"Click picture to change profile picture";
	// 
	// booksTabPage
	// 
	this->booksTabPage->Controls->Add(this->BooksLayoutPanel1);
	this->booksTabPage->Location = System::Drawing::Point(4, 36);
	this->booksTabPage->Name = L"booksTabPage";
	this->booksTabPage->Padding = System::Windows::Forms::Padding(3);
	this->booksTabPage->Size = System::Drawing::Size(747, 435);
	this->booksTabPage->TabIndex = 1;
	this->booksTabPage->Text = L"Books";
	this->booksTabPage->UseVisualStyleBackColor = true;
	// 
	// BooksLayoutPanel1
	// 
	this->BooksLayoutPanel1->ColumnCount = 3;
	this->BooksLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		36.05898F)));
	this->BooksLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		32.57373F)));
	this->BooksLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		31.36729F)));
	this->BooksLayoutPanel1->Controls->Add(this->groupBox4, 2, 0);
	this->BooksLayoutPanel1->Controls->Add(this->allBooksGoupBox, 0, 0);
	this->BooksLayoutPanel1->Controls->Add(this->categoriesGroupBox, 0, 1);
	this->BooksLayoutPanel1->Controls->Add(this->myBooksOverdueGroupBox, 2, 1);
	this->BooksLayoutPanel1->Controls->Add(this->returnedBooksGroupBox, 1, 1);
	this->BooksLayoutPanel1->Controls->Add(this->borrowBooksGroupBox, 1, 0);
	this->BooksLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->BooksLayoutPanel1->Location = System::Drawing::Point(3, 3);
	this->BooksLayoutPanel1->Name = L"BooksLayoutPanel1";
	this->BooksLayoutPanel1->RowCount = 2;
	this->BooksLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	this->BooksLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
	this->BooksLayoutPanel1->Size = System::Drawing::Size(741, 429);
	this->BooksLayoutPanel1->TabIndex = 17;
	// 
	// groupBox4
	// 
	this->groupBox4->Controls->Add(this->controlsTableLayoutPanel2);
	this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
	this->groupBox4->Location = System::Drawing::Point(511, 3);
	this->groupBox4->Name = L"groupBox4";
	this->groupBox4->Size = System::Drawing::Size(227, 208);
	this->groupBox4->TabIndex = 17;
	this->groupBox4->TabStop = false;
	this->groupBox4->Text = L"          ";
	// 
	// controlsTableLayoutPanel2
	// 
	this->controlsTableLayoutPanel2->ColumnCount = 1;
	this->controlsTableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		100)));
	this->controlsTableLayoutPanel2->Controls->Add(this->btnRefreshBooks, 0, 1);
	this->controlsTableLayoutPanel2->Controls->Add(this->btnBooks, 0, 0);
	this->controlsTableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
	this->controlsTableLayoutPanel2->Location = System::Drawing::Point(3, 16);
	this->controlsTableLayoutPanel2->Name = L"controlsTableLayoutPanel2";
	this->controlsTableLayoutPanel2->RowCount = 2;
	this->controlsTableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	this->controlsTableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	this->controlsTableLayoutPanel2->Size = System::Drawing::Size(221, 189);
	this->controlsTableLayoutPanel2->TabIndex = 20;
	// 
	// btnRefreshBooks
	// 
	this->btnRefreshBooks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)));
	this->btnRefreshBooks->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnRefreshBooks->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnRefreshBooks->FlatAppearance->BorderSize = 0;
	this->btnRefreshBooks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnRefreshBooks->Location = System::Drawing::Point(3, 97);
	this->btnRefreshBooks->Name = L"btnRefreshBooks";
	this->btnRefreshBooks->Size = System::Drawing::Size(215, 89);
	this->btnRefreshBooks->TabIndex = 18;
	this->btnRefreshBooks->Text = L"Refresh Page";
	this->btnRefreshBooks->UseVisualStyleBackColor = false;
	this->btnRefreshBooks->Click += gcnew System::EventHandler(this, &MyStudentForm::RefreshEverything);
	// 
	// btnBooks
	// 
	this->btnBooks->BackColor = System::Drawing::Color::LightSkyBlue;
	this->btnBooks->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnBooks->Dock = System::Windows::Forms::DockStyle::Fill;
	this->btnBooks->FlatAppearance->BorderSize = 0;
	this->btnBooks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnBooks->Location = System::Drawing::Point(3, 3);
	this->btnBooks->Name = L"btnBooks";
	this->btnBooks->Size = System::Drawing::Size(215, 88);
	this->btnBooks->TabIndex = 17;
	this->btnBooks->Text = L"Books";
	this->btnBooks->UseVisualStyleBackColor = false;
	this->btnBooks->Click += gcnew System::EventHandler(this, &MyStudentForm::Books_Click);
	// 
	// allBooksGoupBox
	// 
	this->allBooksGoupBox->Controls->Add(this->allBooksDataGridView);
	this->allBooksGoupBox->Dock = System::Windows::Forms::DockStyle::Fill;
	this->allBooksGoupBox->Location = System::Drawing::Point(3, 3);
	this->allBooksGoupBox->Name = L"allBooksGoupBox";
	this->allBooksGoupBox->Size = System::Drawing::Size(261, 208);
	this->allBooksGoupBox->TabIndex = 17;
	this->allBooksGoupBox->TabStop = false;
	this->allBooksGoupBox->Text = L"All Books (including unavailable)";
	// 
	// allBooksDataGridView
	// 
	this->allBooksDataGridView->BackgroundColor = System::Drawing::Color::White;
	this->allBooksDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->allBooksDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
	this->allBooksDataGridView->Location = System::Drawing::Point(3, 16);
	this->allBooksDataGridView->Name = L"allBooksDataGridView";
	this->allBooksDataGridView->ReadOnly = true;
	this->allBooksDataGridView->Size = System::Drawing::Size(255, 189);
	this->allBooksDataGridView->TabIndex = 18;
	// 
	// categoriesGroupBox
	// 
	this->categoriesGroupBox->Controls->Add(this->categoriesDataGridView);
	this->categoriesGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
	this->categoriesGroupBox->Location = System::Drawing::Point(3, 217);
	this->categoriesGroupBox->Name = L"categoriesGroupBox";
	this->categoriesGroupBox->Size = System::Drawing::Size(261, 209);
	this->categoriesGroupBox->TabIndex = 17;
	this->categoriesGroupBox->TabStop = false;
	this->categoriesGroupBox->Text = L"Categories";
	// 
	// categoriesDataGridView
	// 
	this->categoriesDataGridView->BackgroundColor = System::Drawing::Color::White;
	this->categoriesDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->categoriesDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
	this->categoriesDataGridView->Location = System::Drawing::Point(3, 16);
	this->categoriesDataGridView->Name = L"categoriesDataGridView";
	this->categoriesDataGridView->ReadOnly = true;
	this->categoriesDataGridView->Size = System::Drawing::Size(255, 190);
	this->categoriesDataGridView->TabIndex = 18;
	// 
	// myBooksOverdueGroupBox
	// 
	this->myBooksOverdueGroupBox->Controls->Add(this->myOverdueBooksDataGridView);
	this->myBooksOverdueGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
	this->myBooksOverdueGroupBox->Location = System::Drawing::Point(511, 217);
	this->myBooksOverdueGroupBox->Name = L"myBooksOverdueGroupBox";
	this->myBooksOverdueGroupBox->Size = System::Drawing::Size(227, 209);
	this->myBooksOverdueGroupBox->TabIndex = 17;
	this->myBooksOverdueGroupBox->TabStop = false;
	this->myBooksOverdueGroupBox->Text = L"My Books Overdue";
	// 
	// myOverdueBooksDataGridView
	// 
	this->myOverdueBooksDataGridView->BackgroundColor = System::Drawing::Color::White;
	this->myOverdueBooksDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->myOverdueBooksDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
	this->myOverdueBooksDataGridView->Location = System::Drawing::Point(3, 16);
	this->myOverdueBooksDataGridView->Name = L"myOverdueBooksDataGridView";
	this->myOverdueBooksDataGridView->ReadOnly = true;
	this->myOverdueBooksDataGridView->Size = System::Drawing::Size(221, 190);
	this->myOverdueBooksDataGridView->TabIndex = 17;
	// 
	// returnedBooksGroupBox
	// 
	this->returnedBooksGroupBox->Controls->Add(this->returnedBooksDataGridView);
	this->returnedBooksGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
	this->returnedBooksGroupBox->Location = System::Drawing::Point(270, 217);
	this->returnedBooksGroupBox->Name = L"returnedBooksGroupBox";
	this->returnedBooksGroupBox->Size = System::Drawing::Size(235, 209);
	this->returnedBooksGroupBox->TabIndex = 18;
	this->returnedBooksGroupBox->TabStop = false;
	this->returnedBooksGroupBox->Text = L"Returned Books";
	// 
	// returnedBooksDataGridView
	// 
	this->returnedBooksDataGridView->BackgroundColor = System::Drawing::Color::White;
	this->returnedBooksDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->returnedBooksDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
	this->returnedBooksDataGridView->Location = System::Drawing::Point(3, 16);
	this->returnedBooksDataGridView->Name = L"returnedBooksDataGridView";
	this->returnedBooksDataGridView->ReadOnly = true;
	this->returnedBooksDataGridView->Size = System::Drawing::Size(229, 190);
	this->returnedBooksDataGridView->TabIndex = 8;
	// 
	// borrowBooksGroupBox
	// 
	this->borrowBooksGroupBox->Controls->Add(this->borrowedBooksDataGridView);
	this->borrowBooksGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
	this->borrowBooksGroupBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->borrowBooksGroupBox->Location = System::Drawing::Point(270, 3);
	this->borrowBooksGroupBox->Name = L"borrowBooksGroupBox";
	this->borrowBooksGroupBox->Size = System::Drawing::Size(235, 208);
	this->borrowBooksGroupBox->TabIndex = 18;
	this->borrowBooksGroupBox->TabStop = false;
	this->borrowBooksGroupBox->Text = L"Books you have borrowed.";
	// 
	// borrowedBooksDataGridView
	// 
	this->borrowedBooksDataGridView->BackgroundColor = System::Drawing::Color::White;
	this->borrowedBooksDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->borrowedBooksDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
	this->borrowedBooksDataGridView->Location = System::Drawing::Point(3, 16);
	this->borrowedBooksDataGridView->Name = L"borrowedBooksDataGridView";
	this->borrowedBooksDataGridView->ReadOnly = true;
	this->borrowedBooksDataGridView->Size = System::Drawing::Size(229, 189);
	this->borrowedBooksDataGridView->TabIndex = 7;
	// 
	// warningPasswordMatch
	// 
	this->warningPasswordMatch->AutoSize = true;
	this->warningPasswordMatch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPasswordMatch->ForeColor = System::Drawing::Color::Red;
	this->warningPasswordMatch->Location = System::Drawing::Point(352, 158);
	this->warningPasswordMatch->Name = L"warningPasswordMatch";
	this->warningPasswordMatch->Size = System::Drawing::Size(121, 13);
	this->warningPasswordMatch->TabIndex = 126;
	this->warningPasswordMatch->Text = L"Password do not match!";
	this->warningPasswordMatch->Visible = false;
	// 
	// warningPasswordLength
	// 
	this->warningPasswordLength->AutoSize = true;
	this->warningPasswordLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPasswordLength->ForeColor = System::Drawing::Color::Red;
	this->warningPasswordLength->Location = System::Drawing::Point(352, 133);
	this->warningPasswordLength->Name = L"warningPasswordLength";
	this->warningPasswordLength->Size = System::Drawing::Size(146, 12);
	this->warningPasswordLength->TabIndex = 125;
	this->warningPasswordLength->Text = L"(must be atleast 8 characters long)";
	// 
	// warningPhone
	// 
	this->warningPhone->AutoSize = true;
	this->warningPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningPhone->ForeColor = System::Drawing::Color::Red;
	this->warningPhone->Location = System::Drawing::Point(243, 3);
	this->warningPhone->Name = L"warningPhone";
	this->warningPhone->Size = System::Drawing::Size(64, 12);
	this->warningPhone->TabIndex = 124;
	this->warningPhone->Text = L"Phone Invalid!";
	this->warningPhone->Visible = false;
	// 
	// warningEmail
	// 
	this->warningEmail->AutoSize = true;
	this->warningEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->warningEmail->ForeColor = System::Drawing::Color::Red;
	this->warningEmail->Location = System::Drawing::Point(184, 49);
	this->warningEmail->Name = L"warningEmail";
	this->warningEmail->Size = System::Drawing::Size(116, 12);
	this->warningEmail->TabIndex = 123;
	this->warningEmail->Text = L"Only Google mails allowed!";
	this->warningEmail->Visible = false;
	// 
	// warningPhoneExists
	// 
	this->warningPhoneExists->AutoSize = true;
	this->warningPhoneExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningPhoneExists->ForeColor = System::Drawing::Color::Red;
	this->warningPhoneExists->Location = System::Drawing::Point(352, 26);
	this->warningPhoneExists->Name = L"warningPhoneExists";
	this->warningPhoneExists->Size = System::Drawing::Size(95, 12);
	this->warningPhoneExists->TabIndex = 122;
	this->warningPhoneExists->Text = L"Phone Already exists!";
	this->warningPhoneExists->Visible = false;
	// 
	// warningEmailExists
	// 
	this->warningEmailExists->AutoSize = true;
	this->warningEmailExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->warningEmailExists->ForeColor = System::Drawing::Color::Red;
	this->warningEmailExists->Location = System::Drawing::Point(352, 67);
	this->warningEmailExists->Name = L"warningEmailExists";
	this->warningEmailExists->Size = System::Drawing::Size(56, 12);
	this->warningEmailExists->TabIndex = 121;
	this->warningEmailExists->Text = L"Email taken!";
	this->warningEmailExists->Visible = false;
	// 
	// btnNewPassConfirm
	// 
	this->btnNewPassConfirm->BackColor = System::Drawing::Color::Transparent;
	this->btnNewPassConfirm->Location = System::Drawing::Point(323, 155);
	this->btnNewPassConfirm->Name = L"btnNewPassConfirm";
	this->btnNewPassConfirm->Size = System::Drawing::Size(23, 20);
	this->btnNewPassConfirm->TabIndex = 49;
	this->btnNewPassConfirm->Text = L"--";
	this->btnNewPassConfirm->UseVisualStyleBackColor = false;
	this->btnNewPassConfirm->Click += gcnew System::EventHandler(this, &MyStudentForm::SeeNewPassConfirm_Click);
	// 
	// label4
	// 
	this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
		| System::Windows::Forms::AnchorStyles::Left)
		| System::Windows::Forms::AnchorStyles::Right));
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(315, 211);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(123, 13);
	this->label4->TabIndex = 1;
	this->label4->Text = L"Feature not available yet";
	// 
	// panel9
	// 
	this->panel9->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->panel9->Controls->Add(this->warningPasswordMatch);
	this->panel9->Controls->Add(this->warningPasswordLength);
	this->panel9->Controls->Add(this->warningPhone);
	this->panel9->Controls->Add(this->warningEmail);
	this->panel9->Controls->Add(this->warningPhoneExists);
	this->panel9->Controls->Add(this->warningEmailExists);
	this->panel9->Controls->Add(this->btnNewPassConfirm);
	this->panel9->Controls->Add(this->btnNewPass);
	this->panel9->Controls->Add(this->btnOldPass);
	this->panel9->Controls->Add(this->btnEmail);
	this->panel9->Controls->Add(this->btnPhone);
	this->panel9->Controls->Add(this->tbNewPassConfirm);
	this->panel9->Controls->Add(this->tbEmail);
	this->panel9->Controls->Add(this->labelNewPassConfirm);
	this->panel9->Controls->Add(this->tbNewPass);
	this->panel9->Controls->Add(this->tbPhone);
	this->panel9->Controls->Add(this->labelNewPass);
	this->panel9->Controls->Add(this->labelEmail);
	this->panel9->Controls->Add(this->tbOldPass);
	this->panel9->Controls->Add(this->labelOldPass);
	this->panel9->Controls->Add(this->labelPhone);
	this->panel9->Location = System::Drawing::Point(0, 230);
	this->panel9->Name = L"panel9";
	this->panel9->Size = System::Drawing::Size(505, 183);
	this->panel9->TabIndex = 132;
	// 
	// btnNewPass
	// 
	this->btnNewPass->BackColor = System::Drawing::Color::Transparent;
	this->btnNewPass->Location = System::Drawing::Point(323, 129);
	this->btnNewPass->Name = L"btnNewPass";
	this->btnNewPass->Size = System::Drawing::Size(23, 20);
	this->btnNewPass->TabIndex = 48;
	this->btnNewPass->Text = L"--";
	this->btnNewPass->UseVisualStyleBackColor = false;
	this->btnNewPass->Click += gcnew System::EventHandler(this, &MyStudentForm::SeeNewPassword_Click);
	// 
	// btnOldPass
	// 
	this->btnOldPass->BackColor = System::Drawing::Color::Transparent;
	this->btnOldPass->Location = System::Drawing::Point(323, 103);
	this->btnOldPass->Name = L"btnOldPass";
	this->btnOldPass->Size = System::Drawing::Size(23, 20);
	this->btnOldPass->TabIndex = 47;
	this->btnOldPass->Text = L"--";
	this->btnOldPass->UseVisualStyleBackColor = false;
	this->btnOldPass->Click += gcnew System::EventHandler(this, &MyStudentForm::SeeOldPassword_Click);
	// 
	// btnEmail
	// 
	this->btnEmail->BackColor = System::Drawing::Color::Green;
	this->btnEmail->Location = System::Drawing::Point(323, 63);
	this->btnEmail->Name = L"btnEmail";
	this->btnEmail->Size = System::Drawing::Size(23, 20);
	this->btnEmail->TabIndex = 44;
	this->btnEmail->UseVisualStyleBackColor = false;
	// 
	// btnPhone
	// 
	this->btnPhone->BackColor = System::Drawing::Color::Green;
	this->btnPhone->Location = System::Drawing::Point(323, 22);
	this->btnPhone->Name = L"btnPhone";
	this->btnPhone->Size = System::Drawing::Size(23, 20);
	this->btnPhone->TabIndex = 43;
	this->btnPhone->UseVisualStyleBackColor = false;
	// 
	// tbNewPassConfirm
	// 
	this->tbNewPassConfirm->Location = System::Drawing::Point(108, 155);
	this->tbNewPassConfirm->Name = L"tbNewPassConfirm";
	this->tbNewPassConfirm->Size = System::Drawing::Size(201, 20);
	this->tbNewPassConfirm->TabIndex = 25;
	this->tbNewPassConfirm->UseSystemPasswordChar = true;
	this->tbNewPassConfirm->TextChanged += gcnew System::EventHandler(this, &MyStudentForm::SomethingInProfileChanged);
	// 
	// tbEmail
	// 
	this->tbEmail->Location = System::Drawing::Point(106, 64);
	this->tbEmail->Name = L"tbEmail";
	this->tbEmail->Size = System::Drawing::Size(201, 20);
	this->tbEmail->TabIndex = 41;
	this->tbEmail->TextChanged += gcnew System::EventHandler(this, &MyStudentForm::SomethingInProfileChanged);
	// 
	// labelNewPassConfirm
	// 
	this->labelNewPassConfirm->AutoSize = true;
	this->labelNewPassConfirm->Location = System::Drawing::Point(12, 159);
	this->labelNewPassConfirm->Margin = System::Windows::Forms::Padding(3);
	this->labelNewPassConfirm->Name = L"labelNewPassConfirm";
	this->labelNewPassConfirm->Size = System::Drawing::Size(90, 13);
	this->labelNewPassConfirm->TabIndex = 24;
	this->labelNewPassConfirm->Text = L"Confirm password";
	// 
	// tbNewPass
	// 
	this->tbNewPass->Location = System::Drawing::Point(110, 129);
	this->tbNewPass->Name = L"tbNewPass";
	this->tbNewPass->Size = System::Drawing::Size(199, 20);
	this->tbNewPass->TabIndex = 23;
	this->tbNewPass->UseSystemPasswordChar = true;
	this->tbNewPass->TextChanged += gcnew System::EventHandler(this, &MyStudentForm::SomethingInProfileChanged);
	// 
	// tbPhone
	// 
	this->tbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tbPhone->Location = System::Drawing::Point(109, 18);
	this->tbPhone->Mask = L"000-000-0000";
	this->tbPhone->Name = L"tbPhone";
	this->tbPhone->RightToLeft = System::Windows::Forms::RightToLeft::No;
	this->tbPhone->Size = System::Drawing::Size(201, 26);
	this->tbPhone->TabIndex = 33;
	this->tbPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->tbPhone->ValidatingType = System::Int32::typeid;
	this->tbPhone->TextChanged += gcnew System::EventHandler(this, &MyStudentForm::SomethingInProfileChanged);
	// 
	// labelNewPass
	// 
	this->labelNewPass->AutoSize = true;
	this->labelNewPass->Location = System::Drawing::Point(25, 133);
	this->labelNewPass->Margin = System::Windows::Forms::Padding(3);
	this->labelNewPass->Name = L"labelNewPass";
	this->labelNewPass->Size = System::Drawing::Size(77, 13);
	this->labelNewPass->TabIndex = 22;
	this->labelNewPass->Text = L"New password";
	// 
	// labelEmail
	// 
	this->labelEmail->AutoSize = true;
	this->labelEmail->Location = System::Drawing::Point(68, 66);
	this->labelEmail->Margin = System::Windows::Forms::Padding(3);
	this->labelEmail->Name = L"labelEmail";
	this->labelEmail->Size = System::Drawing::Size(32, 13);
	this->labelEmail->TabIndex = 4;
	this->labelEmail->Text = L"Email";
	// 
	// tbOldPass
	// 
	this->tbOldPass->Location = System::Drawing::Point(108, 103);
	this->tbOldPass->Name = L"tbOldPass";
	this->tbOldPass->Size = System::Drawing::Size(201, 20);
	this->tbOldPass->TabIndex = 21;
	this->tbOldPass->UseSystemPasswordChar = true;
	this->tbOldPass->TextChanged += gcnew System::EventHandler(this, &MyStudentForm::SomethingInProfileChanged);
	// 
	// labelOldPass
	// 
	this->labelOldPass->AutoSize = true;
	this->labelOldPass->Location = System::Drawing::Point(31, 106);
	this->labelOldPass->Margin = System::Windows::Forms::Padding(3);
	this->labelOldPass->Name = L"labelOldPass";
	this->labelOldPass->Size = System::Drawing::Size(71, 13);
	this->labelOldPass->TabIndex = 9;
	this->labelOldPass->Text = L"Old password";
	// 
	// labelPhone
	// 
	this->labelPhone->AutoSize = true;
	this->labelPhone->Location = System::Drawing::Point(65, 26);
	this->labelPhone->Margin = System::Windows::Forms::Padding(3);
	this->labelPhone->Name = L"labelPhone";
	this->labelPhone->Size = System::Drawing::Size(38, 13);
	this->labelPhone->TabIndex = 2;
	this->labelPhone->Text = L"Phone";
	// 
	// phonesArray
	// 
	this->phonesArray->FormattingEnabled = true;
	this->phonesArray->Location = System::Drawing::Point(375, 193);
	this->phonesArray->Name = L"phonesArray";
	this->phonesArray->Size = System::Drawing::Size(34, 21);
	this->phonesArray->TabIndex = 134;
	this->phonesArray->Visible = false;
	// 
	// emailsArray
	// 
	this->emailsArray->FormattingEnabled = true;
	this->emailsArray->Location = System::Drawing::Point(337, 192);
	this->emailsArray->Name = L"emailsArray";
	this->emailsArray->Size = System::Drawing::Size(34, 21);
	this->emailsArray->TabIndex = 133;
	this->emailsArray->Visible = false;
	// 
	// radioButton3
	// 
	this->radioButton3->AutoSize = true;
	this->radioButton3->Location = System::Drawing::Point(25, 67);
	this->radioButton3->Name = L"radioButton3";
	this->radioButton3->Size = System::Drawing::Size(60, 17);
	this->radioButton3->TabIndex = 7;
	this->radioButton3->TabStop = true;
	this->radioButton3->Text = L"Custom";
	this->radioButton3->UseVisualStyleBackColor = true;
	// 
	// dashboardTabPage
	// 
	this->dashboardTabPage->Controls->Add(this->panelDashboardUsable);
	this->dashboardTabPage->Controls->Add(this->panelBanner);
	this->dashboardTabPage->Controls->Add(this->statsGroup);
	this->dashboardTabPage->Location = System::Drawing::Point(4, 36);
	this->dashboardTabPage->Name = L"dashboardTabPage";
	this->dashboardTabPage->Padding = System::Windows::Forms::Padding(3);
	this->dashboardTabPage->Size = System::Drawing::Size(747, 435);
	this->dashboardTabPage->TabIndex = 0;
	this->dashboardTabPage->Text = L"Dashboard";
	this->dashboardTabPage->UseVisualStyleBackColor = true;
	// 
	// panelDashboardUsable
	// 
	this->panelDashboardUsable->BackColor = System::Drawing::Color::LightGray;
	this->panelDashboardUsable->Controls->Add(this->DashboardLabel);
	this->panelDashboardUsable->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panelDashboardUsable->Location = System::Drawing::Point(3, 122);
	this->panelDashboardUsable->Name = L"panelDashboardUsable";
	this->panelDashboardUsable->Size = System::Drawing::Size(741, 144);
	this->panelDashboardUsable->TabIndex = 28;
	// 
	// DashboardLabel
	// 
	this->DashboardLabel->AutoSize = true;
	this->DashboardLabel->BackColor = System::Drawing::Color::White;
	this->DashboardLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->DashboardLabel->Location = System::Drawing::Point(0, 0);
	this->DashboardLabel->Margin = System::Windows::Forms::Padding(0);
	this->DashboardLabel->Name = L"DashboardLabel";
	this->DashboardLabel->Size = System::Drawing::Size(195, 25);
	this->DashboardLabel->TabIndex = 1;
	this->DashboardLabel->Text = L"MY DASHBOARD";
	// 
	// panelBanner
	// 
	this->panelBanner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->panelBanner->Controls->Add(this->panel12);
	this->panelBanner->Controls->Add(this->ppDash);
	this->panelBanner->Dock = System::Windows::Forms::DockStyle::Top;
	this->panelBanner->Location = System::Drawing::Point(3, 3);
	this->panelBanner->Name = L"panelBanner";
	this->panelBanner->Size = System::Drawing::Size(741, 119);
	this->panelBanner->TabIndex = 27;
	// 
	// panel12
	// 
	this->panel12->Controls->Add(this->btnRefresh);
	this->panel12->Controls->Add(this->panel11);
	this->panel12->Controls->Add(this->LogoutLabel);
	this->panel12->Controls->Add(this->tableLayoutPanel3);
	this->panel12->Controls->Add(this->toProfileLabel);
	this->panel12->Location = System::Drawing::Point(7, 3);
	this->panel12->Name = L"panel12";
	this->panel12->Size = System::Drawing::Size(569, 110);
	this->panel12->TabIndex = 2;
	// 
	// btnRefresh
	// 
	this->btnRefresh->BackColor = System::Drawing::Color::Lime;
	this->btnRefresh->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnRefresh->Location = System::Drawing::Point(268, 78);
	this->btnRefresh->Name = L"btnRefresh";
	this->btnRefresh->Size = System::Drawing::Size(75, 23);
	this->btnRefresh->TabIndex = 7;
	this->btnRefresh->Text = L"Refresh";
	this->btnRefresh->UseVisualStyleBackColor = false;
	this->btnRefresh->Click += gcnew System::EventHandler(this, &MyStudentForm::RefreshEverything);
	// 
	// panel11
	// 
	this->panel11->Controls->Add(this->usertypeLabel);
	this->panel11->Location = System::Drawing::Point(14, 3);
	this->panel11->Name = L"panel11";
	this->panel11->Size = System::Drawing::Size(534, 31);
	this->panel11->TabIndex = 41;
	// 
	// usertypeLabel
	// 
	this->usertypeLabel->BackColor = System::Drawing::Color::Transparent;
	this->usertypeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
	this->usertypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->usertypeLabel->ForeColor = System::Drawing::Color::White;
	this->usertypeLabel->Location = System::Drawing::Point(0, 0);
	this->usertypeLabel->Name = L"usertypeLabel";
	this->usertypeLabel->Size = System::Drawing::Size(534, 31);
	this->usertypeLabel->TabIndex = 40;
	this->usertypeLabel->Text = L"STUDENT";
	this->usertypeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// LogoutLabel
	// 
	this->LogoutLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->LogoutLabel->AutoSize = true;
	this->LogoutLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->LogoutLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->LogoutLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->LogoutLabel->LinkColor = System::Drawing::Color::Black;
	this->LogoutLabel->Location = System::Drawing::Point(82, 79);
	this->LogoutLabel->Margin = System::Windows::Forms::Padding(3);
	this->LogoutLabel->Name = L"LogoutLabel";
	this->LogoutLabel->Size = System::Drawing::Size(67, 22);
	this->LogoutLabel->TabIndex = 6;
	this->LogoutLabel->TabStop = true;
	this->LogoutLabel->Text = L"Logout";
	this->LogoutLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	this->LogoutLabel->VisitedLinkColor = System::Drawing::Color::Black;
	this->LogoutLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyStudentForm::Logout);
	// 
	// tableLayoutPanel3
	// 
	this->tableLayoutPanel3->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->tableLayoutPanel3->ColumnCount = 3;
	this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		33.33333F)));
	this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		45.40541F)));
	this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		21.26126F)));
	this->tableLayoutPanel3->Controls->Add(this->surnameLabel, 0, 0);
	this->tableLayoutPanel3->Controls->Add(this->firstNameLabel, 0, 0);
	this->tableLayoutPanel3->Controls->Add(this->universityIDLabel, 2, 0);
	this->tableLayoutPanel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->tableLayoutPanel3->ForeColor = System::Drawing::Color::White;
	this->tableLayoutPanel3->Location = System::Drawing::Point(14, 31);
	this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
	this->tableLayoutPanel3->RowCount = 1;
	this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
	this->tableLayoutPanel3->Size = System::Drawing::Size(534, 48);
	this->tableLayoutPanel3->TabIndex = 39;
	// 
	// surnameLabel
	// 
	this->surnameLabel->AutoSize = true;
	this->surnameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
	this->surnameLabel->Location = System::Drawing::Point(180, 0);
	this->surnameLabel->Name = L"surnameLabel";
	this->surnameLabel->Size = System::Drawing::Size(236, 48);
	this->surnameLabel->TabIndex = 0;
	this->surnameLabel->Text = L"Last name";
	this->surnameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// firstNameLabel
	// 
	this->firstNameLabel->AutoSize = true;
	this->firstNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
	this->firstNameLabel->Location = System::Drawing::Point(3, 0);
	this->firstNameLabel->Name = L"firstNameLabel";
	this->firstNameLabel->Size = System::Drawing::Size(171, 48);
	this->firstNameLabel->TabIndex = 1;
	this->firstNameLabel->Text = L"First Names";
	this->firstNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// universityIDLabel
	// 
	this->universityIDLabel->AutoSize = true;
	this->universityIDLabel->Dock = System::Windows::Forms::DockStyle::Fill;
	this->universityIDLabel->Location = System::Drawing::Point(422, 0);
	this->universityIDLabel->Name = L"universityIDLabel";
	this->universityIDLabel->Size = System::Drawing::Size(109, 48);
	this->universityIDLabel->TabIndex = 2;
	this->universityIDLabel->Text = L"University ID";
	this->universityIDLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// toProfileLabel
	// 
	this->toProfileLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->toProfileLabel->AutoSize = true;
	this->toProfileLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->toProfileLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->toProfileLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->toProfileLabel->LinkColor = System::Drawing::Color::Black;
	this->toProfileLabel->Location = System::Drawing::Point(474, 79);
	this->toProfileLabel->Margin = System::Windows::Forms::Padding(3);
	this->toProfileLabel->Name = L"toProfileLabel";
	this->toProfileLabel->Size = System::Drawing::Size(62, 22);
	this->toProfileLabel->TabIndex = 8;
	this->toProfileLabel->TabStop = true;
	this->toProfileLabel->Text = L"Profile";
	this->toProfileLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	this->toProfileLabel->VisitedLinkColor = System::Drawing::Color::Black;
	this->toProfileLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyStudentForm::GoToProfile);
	// 
	// ppDash
	// 
	this->ppDash->Anchor = System::Windows::Forms::AnchorStyles::Right;
	this->ppDash->BackColor = System::Drawing::Color::Black;
	this->ppDash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	this->ppDash->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->ppDash->Location = System::Drawing::Point(602, 8);
	this->ppDash->Margin = System::Windows::Forms::Padding(0, 3, 3, 3);
	this->ppDash->Name = L"ppDash";
	this->ppDash->Size = System::Drawing::Size(122, 96);
	this->ppDash->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	this->ppDash->TabIndex = 36;
	this->ppDash->TabStop = false;
	// 
	// statsGroup
	// 
	this->statsGroup->Controls->Add(this->tableLayoutPanel2);
	this->statsGroup->Dock = System::Windows::Forms::DockStyle::Bottom;
	this->statsGroup->Location = System::Drawing::Point(3, 266);
	this->statsGroup->Name = L"statsGroup";
	this->statsGroup->Size = System::Drawing::Size(741, 166);
	this->statsGroup->TabIndex = 25;
	this->statsGroup->TabStop = false;
	// 
	// tableLayoutPanel2
	// 
	this->tableLayoutPanel2->ColumnCount = 3;
	this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		34.69388F)));
	this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		33.06123F)));
	this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		32.10884F)));
	this->tableLayoutPanel2->Controls->Add(this->panel2, 0, 0);
	this->tableLayoutPanel2->Controls->Add(this->panel1, 1, 0);
	this->tableLayoutPanel2->Controls->Add(this->panel3, 2, 0);
	this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
	this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
	this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
	this->tableLayoutPanel2->RowCount = 1;
	this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
	this->tableLayoutPanel2->Size = System::Drawing::Size(735, 147);
	this->tableLayoutPanel2->TabIndex = 0;
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::White;
	this->panel2->Controls->Add(this->totalStudentCountValue);
	this->panel2->Controls->Add(this->totalAdminCountValue);
	this->panel2->Controls->Add(this->label3);
	this->panel2->Controls->Add(this->label2);
	this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panel2->Location = System::Drawing::Point(3, 3);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(249, 141);
	this->panel2->TabIndex = 13;
	// 
	// totalStudentCountValue
	// 
	this->totalStudentCountValue->AutoSize = true;
	this->totalStudentCountValue->Location = System::Drawing::Point(152, 47);
	this->totalStudentCountValue->Name = L"totalStudentCountValue";
	this->totalStudentCountValue->Size = System::Drawing::Size(13, 13);
	this->totalStudentCountValue->TabIndex = 11;
	this->totalStudentCountValue->Text = L"0";
	// 
	// totalAdminCountValue
	// 
	this->totalAdminCountValue->AutoSize = true;
	this->totalAdminCountValue->Location = System::Drawing::Point(152, 11);
	this->totalAdminCountValue->Name = L"totalAdminCountValue";
	this->totalAdminCountValue->Size = System::Drawing::Size(13, 13);
	this->totalAdminCountValue->TabIndex = 10;
	this->totalAdminCountValue->Text = L"0";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(12, 11);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(68, 13);
	this->label3->TabIndex = 9;
	this->label3->Text = L"Total Admins";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(12, 48);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(76, 13);
	this->label2->TabIndex = 8;
	this->label2->Text = L"Total Students";
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::White;
	this->panel1->Controls->Add(this->totDiffBooks);
	this->panel1->Controls->Add(this->totalAvailableCountValue);
	this->panel1->Controls->Add(this->totalBooksCountValue);
	this->panel1->Controls->Add(this->totDifferentBookLabel);
	this->panel1->Controls->Add(this->totalOverdueCountValue);
	this->panel1->Controls->Add(this->totalBorrowedCountValue);
	this->panel1->Controls->Add(this->totalOverdueLabel);
	this->panel1->Controls->Add(this->label1);
	this->panel1->Controls->Add(this->totBorrowedBooksLabel1);
	this->panel1->Controls->Add(this->totalBooksLabel1);
	this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panel1->Location = System::Drawing::Point(258, 3);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(237, 141);
	this->panel1->TabIndex = 12;
	// 
	// totDiffBooks
	// 
	this->totDiffBooks->AutoSize = true;
	this->totDiffBooks->Location = System::Drawing::Point(131, 36);
	this->totDiffBooks->Name = L"totDiffBooks";
	this->totDiffBooks->Size = System::Drawing::Size(13, 13);
	this->totDiffBooks->TabIndex = 14;
	this->totDiffBooks->Text = L"0";
	// 
	// totalAvailableCountValue
	// 
	this->totalAvailableCountValue->AutoSize = true;
	this->totalAvailableCountValue->Location = System::Drawing::Point(130, 121);
	this->totalAvailableCountValue->Name = L"totalAvailableCountValue";
	this->totalAvailableCountValue->Size = System::Drawing::Size(13, 13);
	this->totalAvailableCountValue->TabIndex = 12;
	this->totalAvailableCountValue->Text = L"0";
	// 
	// totalBooksCountValue
	// 
	this->totalBooksCountValue->AutoSize = true;
	this->totalBooksCountValue->Location = System::Drawing::Point(130, 11);
	this->totalBooksCountValue->Name = L"totalBooksCountValue";
	this->totalBooksCountValue->Size = System::Drawing::Size(13, 13);
	this->totalBooksCountValue->TabIndex = 11;
	this->totalBooksCountValue->Text = L"0";
	// 
	// totDifferentBookLabel
	// 
	this->totDifferentBookLabel->AutoSize = true;
	this->totDifferentBookLabel->Location = System::Drawing::Point(11, 36);
	this->totDifferentBookLabel->Name = L"totDifferentBookLabel";
	this->totDifferentBookLabel->Size = System::Drawing::Size(107, 13);
	this->totDifferentBookLabel->TabIndex = 13;
	this->totDifferentBookLabel->Text = L"Total Different Books";
	// 
	// totalOverdueCountValue
	// 
	this->totalOverdueCountValue->AutoSize = true;
	this->totalOverdueCountValue->Location = System::Drawing::Point(130, 91);
	this->totalOverdueCountValue->Name = L"totalOverdueCountValue";
	this->totalOverdueCountValue->Size = System::Drawing::Size(13, 13);
	this->totalOverdueCountValue->TabIndex = 10;
	this->totalOverdueCountValue->Text = L"0";
	// 
	// totalBorrowedCountValue
	// 
	this->totalBorrowedCountValue->AutoSize = true;
	this->totalBorrowedCountValue->Location = System::Drawing::Point(130, 67);
	this->totalBorrowedCountValue->Name = L"totalBorrowedCountValue";
	this->totalBorrowedCountValue->Size = System::Drawing::Size(13, 13);
	this->totalBorrowedCountValue->TabIndex = 9;
	this->totalBorrowedCountValue->Text = L"0";
	// 
	// totalOverdueLabel
	// 
	this->totalOverdueLabel->AutoSize = true;
	this->totalOverdueLabel->Location = System::Drawing::Point(11, 91);
	this->totalOverdueLabel->Name = L"totalOverdueLabel";
	this->totalOverdueLabel->Size = System::Drawing::Size(108, 13);
	this->totalOverdueLabel->TabIndex = 8;
	this->totalOverdueLabel->Text = L"Total Books Overdue";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(11, 121);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(109, 13);
	this->label1->TabIndex = 7;
	this->label1->Text = L"Total Available books";
	// 
	// totBorrowedBooksLabel1
	// 
	this->totBorrowedBooksLabel1->AutoSize = true;
	this->totBorrowedBooksLabel1->Location = System::Drawing::Point(11, 67);
	this->totBorrowedBooksLabel1->Name = L"totBorrowedBooksLabel1";
	this->totBorrowedBooksLabel1->Size = System::Drawing::Size(112, 13);
	this->totBorrowedBooksLabel1->TabIndex = 6;
	this->totBorrowedBooksLabel1->Text = L"Total Borrowed Books";
	// 
	// totalBooksLabel1
	// 
	this->totalBooksLabel1->AutoSize = true;
	this->totalBooksLabel1->Location = System::Drawing::Point(11, 11);
	this->totalBooksLabel1->Name = L"totalBooksLabel1";
	this->totalBooksLabel1->Size = System::Drawing::Size(64, 13);
	this->totalBooksLabel1->TabIndex = 1;
	this->totalBooksLabel1->Text = L"Total Books";
	// 
	// panel3
	// 
	this->panel3->BackColor = System::Drawing::Color::White;
	this->panel3->Controls->Add(this->appVersionLabelDash);
	this->panel3->Controls->Add(this->adminsOnlineValue);
	this->panel3->Controls->Add(this->studentsOnlineValue);
	this->panel3->Controls->Add(this->adminsOnlineLabel);
	this->panel3->Controls->Add(this->studentsOnlineLabel);
	this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
	this->panel3->Location = System::Drawing::Point(501, 3);
	this->panel3->Name = L"panel3";
	this->panel3->Size = System::Drawing::Size(231, 141);
	this->panel3->TabIndex = 14;
	// 
	// appVersionLabelDash
	// 
	this->appVersionLabelDash->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
	this->appVersionLabelDash->AutoSize = true;
	this->appVersionLabelDash->Location = System::Drawing::Point(8, 121);
	this->appVersionLabelDash->Name = L"appVersionLabelDash";
	this->appVersionLabelDash->Size = System::Drawing::Size(72, 13);
	this->appVersionLabelDash->TabIndex = 14;
	this->appVersionLabelDash->Text = L"Version: 1.0.2";
	// 
	// adminsOnlineValue
	// 
	this->adminsOnlineValue->AutoSize = true;
	this->adminsOnlineValue->Location = System::Drawing::Point(114, 47);
	this->adminsOnlineValue->Name = L"adminsOnlineValue";
	this->adminsOnlineValue->Size = System::Drawing::Size(13, 13);
	this->adminsOnlineValue->TabIndex = 13;
	this->adminsOnlineValue->Text = L"0";
	// 
	// studentsOnlineValue
	// 
	this->studentsOnlineValue->AutoSize = true;
	this->studentsOnlineValue->Location = System::Drawing::Point(114, 11);
	this->studentsOnlineValue->Name = L"studentsOnlineValue";
	this->studentsOnlineValue->Size = System::Drawing::Size(13, 13);
	this->studentsOnlineValue->TabIndex = 12;
	this->studentsOnlineValue->Text = L"0";
	// 
	// adminsOnlineLabel
	// 
	this->adminsOnlineLabel->AutoSize = true;
	this->adminsOnlineLabel->Location = System::Drawing::Point(8, 47);
	this->adminsOnlineLabel->Name = L"adminsOnlineLabel";
	this->adminsOnlineLabel->Size = System::Drawing::Size(74, 13);
	this->adminsOnlineLabel->TabIndex = 11;
	this->adminsOnlineLabel->Text = L"Admins Online";
	// 
	// studentsOnlineLabel
	// 
	this->studentsOnlineLabel->AutoSize = true;
	this->studentsOnlineLabel->Location = System::Drawing::Point(8, 11);
	this->studentsOnlineLabel->Name = L"studentsOnlineLabel";
	this->studentsOnlineLabel->Size = System::Drawing::Size(82, 13);
	this->studentsOnlineLabel->TabIndex = 10;
	this->studentsOnlineLabel->Text = L"Students Online";
	// 
	// radioButton2
	// 
	this->radioButton2->AutoSize = true;
	this->radioButton2->Location = System::Drawing::Point(25, 42);
	this->radioButton2->Name = L"radioButton2";
	this->radioButton2->Size = System::Drawing::Size(48, 17);
	this->radioButton2->TabIndex = 6;
	this->radioButton2->TabStop = true;
	this->radioButton2->Text = L"Light";
	this->radioButton2->UseVisualStyleBackColor = true;
	// 
	// themeSetting
	// 
	this->themeSetting->Controls->Add(this->radioButton2);
	this->themeSetting->Controls->Add(this->radioButton1);
	this->themeSetting->Controls->Add(this->radioButton3);
	this->themeSetting->Location = System::Drawing::Point(3, 98);
	this->themeSetting->Name = L"themeSetting";
	this->themeSetting->Size = System::Drawing::Size(200, 89);
	this->themeSetting->TabIndex = 11;
	this->themeSetting->TabStop = false;
	this->themeSetting->Text = L"Theme";
	// 
	// radioButton1
	// 
	this->radioButton1->AutoSize = true;
	this->radioButton1->Location = System::Drawing::Point(25, 19);
	this->radioButton1->Name = L"radioButton1";
	this->radioButton1->Size = System::Drawing::Size(48, 17);
	this->radioButton1->TabIndex = 5;
	this->radioButton1->TabStop = true;
	this->radioButton1->Text = L"Dark";
	this->radioButton1->UseVisualStyleBackColor = true;
	// 
	// trackBar1
	// 
	this->trackBar1->LargeChange = 1;
	this->trackBar1->Location = System::Drawing::Point(46, 19);
	this->trackBar1->Maximum = 3;
	this->trackBar1->Minimum = 1;
	this->trackBar1->Name = L"trackBar1";
	this->trackBar1->Size = System::Drawing::Size(148, 45);
	this->trackBar1->TabIndex = 9;
	this->trackBar1->Value = 1;
	// 
	// tbUniversityID
	// 
	this->tbUniversityID->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbUniversityID->Location = System::Drawing::Point(106, 58);
	this->tbUniversityID->Name = L"tbUniversityID";
	this->tbUniversityID->ReadOnly = true;
	this->tbUniversityID->Size = System::Drawing::Size(181, 20);
	this->tbUniversityID->TabIndex = 51;
	// 
	// tbGender
	// 
	this->tbGender->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbGender->Location = System::Drawing::Point(108, 139);
	this->tbGender->Name = L"tbGender";
	this->tbGender->ReadOnly = true;
	this->tbGender->Size = System::Drawing::Size(179, 20);
	this->tbGender->TabIndex = 50;
	// 
	// tbDOB
	// 
	this->tbDOB->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbDOB->Location = System::Drawing::Point(106, 110);
	this->tbDOB->Name = L"tbDOB";
	this->tbDOB->ReadOnly = true;
	this->tbDOB->Size = System::Drawing::Size(181, 20);
	this->tbDOB->TabIndex = 49;
	// 
	// labelDOB
	// 
	this->labelDOB->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelDOB->AutoSize = true;
	this->labelDOB->Location = System::Drawing::Point(36, 113);
	this->labelDOB->Margin = System::Windows::Forms::Padding(3);
	this->labelDOB->Name = L"labelDOB";
	this->labelDOB->Size = System::Drawing::Size(66, 13);
	this->labelDOB->TabIndex = 48;
	this->labelDOB->Text = L"Date of Birth";
	// 
	// tbID
	// 
	this->tbID->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbID->Location = System::Drawing::Point(106, 84);
	this->tbID->Name = L"tbID";
	this->tbID->ReadOnly = true;
	this->tbID->Size = System::Drawing::Size(181, 20);
	this->tbID->TabIndex = 47;
	// 
	// labelID
	// 
	this->labelID->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelID->AutoSize = true;
	this->labelID->Location = System::Drawing::Point(35, 87);
	this->labelID->Margin = System::Windows::Forms::Padding(3);
	this->labelID->Name = L"labelID";
	this->labelID->Size = System::Drawing::Size(64, 13);
	this->labelID->TabIndex = 45;
	this->labelID->Text = L"ID/Passport";
	// 
	// labelUniID
	// 
	this->labelUniID->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelUniID->AutoSize = true;
	this->labelUniID->Location = System::Drawing::Point(35, 60);
	this->labelUniID->Margin = System::Windows::Forms::Padding(3);
	this->labelUniID->Name = L"labelUniID";
	this->labelUniID->Size = System::Drawing::Size(67, 13);
	this->labelUniID->TabIndex = 43;
	this->labelUniID->Text = L"University ID";
	// 
	// fontSetting
	// 
	this->fontSetting->Controls->Add(this->trackBar1);
	this->fontSetting->Location = System::Drawing::Point(3, 3);
	this->fontSetting->Name = L"fontSetting";
	this->fontSetting->Size = System::Drawing::Size(200, 77);
	this->fontSetting->TabIndex = 12;
	this->fontSetting->TabStop = false;
	this->fontSetting->Text = L"Font Size";
	// 
	// labelProfile
	// 
	this->labelProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
		| System::Windows::Forms::AnchorStyles::Left)
		| System::Windows::Forms::AnchorStyles::Right));
	this->labelProfile->AutoSize = true;
	this->labelProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelProfile->Location = System::Drawing::Point(49, 15);
	this->labelProfile->Margin = System::Windows::Forms::Padding(5);
	this->labelProfile->Name = L"labelProfile";
	this->labelProfile->Size = System::Drawing::Size(118, 25);
	this->labelProfile->TabIndex = 52;
	this->labelProfile->Text = L"My Profile";
	this->labelProfile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// panel5
	// 
	this->panel5->Controls->Add(this->labelProfile);
	this->panel5->Location = System::Drawing::Point(322, 0);
	this->panel5->Name = L"panel5";
	this->panel5->Size = System::Drawing::Size(208, 50);
	this->panel5->TabIndex = 57;
	// 
	// labelFirstName
	// 
	this->labelFirstName->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelFirstName->AutoSize = true;
	this->labelFirstName->Location = System::Drawing::Point(45, 35);
	this->labelFirstName->Margin = System::Windows::Forms::Padding(3);
	this->labelFirstName->Name = L"labelFirstName";
	this->labelFirstName->Size = System::Drawing::Size(57, 13);
	this->labelFirstName->TabIndex = 6;
	this->labelFirstName->Text = L"First Name";
	// 
	// labelGender
	// 
	this->labelGender->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelGender->AutoSize = true;
	this->labelGender->Location = System::Drawing::Point(55, 139);
	this->labelGender->Margin = System::Windows::Forms::Padding(3);
	this->labelGender->Name = L"labelGender";
	this->labelGender->Size = System::Drawing::Size(42, 13);
	this->labelGender->TabIndex = 44;
	this->labelGender->Text = L"Gender";
	// 
	// labelLastName
	// 
	this->labelLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->labelLastName->AutoSize = true;
	this->labelLastName->Location = System::Drawing::Point(42, 9);
	this->labelLastName->Margin = System::Windows::Forms::Padding(3);
	this->labelLastName->Name = L"labelLastName";
	this->labelLastName->Size = System::Drawing::Size(58, 13);
	this->labelLastName->TabIndex = 7;
	this->labelLastName->Text = L"Last Name";
	// 
	// tbLastName
	// 
	this->tbLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbLastName->Location = System::Drawing::Point(106, 6);
	this->tbLastName->Name = L"tbLastName";
	this->tbLastName->ReadOnly = true;
	this->tbLastName->Size = System::Drawing::Size(181, 20);
	this->tbLastName->TabIndex = 39;
	// 
	// panel7
	// 
	this->panel7->Anchor = System::Windows::Forms::AnchorStyles::Left;
	this->panel7->Controls->Add(this->tbUniversityID);
	this->panel7->Controls->Add(this->tbGender);
	this->panel7->Controls->Add(this->tbDOB);
	this->panel7->Controls->Add(this->labelDOB);
	this->panel7->Controls->Add(this->tbID);
	this->panel7->Controls->Add(this->labelID);
	this->panel7->Controls->Add(this->labelUniID);
	this->panel7->Controls->Add(this->labelFirstName);
	this->panel7->Controls->Add(this->labelGender);
	this->panel7->Controls->Add(this->labelLastName);
	this->panel7->Controls->Add(this->tbFirstName);
	this->panel7->Controls->Add(this->tbLastName);
	this->panel7->Location = System::Drawing::Point(0, 1);
	this->panel7->Name = L"panel7";
	this->panel7->Size = System::Drawing::Size(318, 168);
	this->panel7->TabIndex = 59;
	// 
	// tbFirstName
	// 
	this->tbFirstName->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->tbFirstName->Location = System::Drawing::Point(106, 32);
	this->tbFirstName->Name = L"tbFirstName";
	this->tbFirstName->ReadOnly = true;
	this->tbFirstName->Size = System::Drawing::Size(181, 20);
	this->tbFirstName->TabIndex = 40;
	// 
	// btnDiscardChangesProfile
	// 
	this->btnDiscardChangesProfile->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->btnDiscardChangesProfile->BackColor = System::Drawing::Color::Red;
	this->btnDiscardChangesProfile->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnDiscardChangesProfile->Enabled = false;
	this->btnDiscardChangesProfile->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->btnDiscardChangesProfile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
	this->btnDiscardChangesProfile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
	this->btnDiscardChangesProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnDiscardChangesProfile->ForeColor = System::Drawing::Color::White;
	this->btnDiscardChangesProfile->Location = System::Drawing::Point(63, 91);
	this->btnDiscardChangesProfile->Name = L"btnDiscardChangesProfile";
	this->btnDiscardChangesProfile->Size = System::Drawing::Size(101, 27);
	this->btnDiscardChangesProfile->TabIndex = 38;
	this->btnDiscardChangesProfile->Text = L"Discard Changes";
	this->btnDiscardChangesProfile->UseVisualStyleBackColor = false;
	this->btnDiscardChangesProfile->Click += gcnew System::EventHandler(this, &MyStudentForm::DiscardProfileChanges);
	// 
	// btnSaveChangesProfile
	// 
	this->btnSaveChangesProfile->Anchor = System::Windows::Forms::AnchorStyles::None;
	this->btnSaveChangesProfile->BackColor = System::Drawing::Color::Lime;
	this->btnSaveChangesProfile->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnSaveChangesProfile->Enabled = false;
	this->btnSaveChangesProfile->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->btnSaveChangesProfile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
	this->btnSaveChangesProfile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
	this->btnSaveChangesProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnSaveChangesProfile->Location = System::Drawing::Point(63, 46);
	this->btnSaveChangesProfile->Name = L"btnSaveChangesProfile";
	this->btnSaveChangesProfile->Size = System::Drawing::Size(101, 27);
	this->btnSaveChangesProfile->TabIndex = 37;
	this->btnSaveChangesProfile->Text = L"Save Changes";
	this->btnSaveChangesProfile->UseVisualStyleBackColor = false;
	this->btnSaveChangesProfile->Click += gcnew System::EventHandler(this, &MyStudentForm::SaveChangesProfile);
	// 
	// panel10
	// 
	this->panel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
	this->panel10->Controls->Add(this->btnDiscardChangesProfile);
	this->panel10->Controls->Add(this->btnSaveChangesProfile);
	this->panel10->Location = System::Drawing::Point(536, 250);
	this->panel10->Name = L"panel10";
	this->panel10->Size = System::Drawing::Size(211, 150);
	this->panel10->TabIndex = 60;
	// 
	// notificationsTabPage
	// 
	this->notificationsTabPage->Controls->Add(this->appVersionLabelNotifications);
	this->notificationsTabPage->Controls->Add(this->label4);
	this->notificationsTabPage->Location = System::Drawing::Point(4, 36);
	this->notificationsTabPage->Name = L"notificationsTabPage";
	this->notificationsTabPage->Size = System::Drawing::Size(747, 435);
	this->notificationsTabPage->TabIndex = 2;
	this->notificationsTabPage->Text = L"Notifications";
	this->notificationsTabPage->UseVisualStyleBackColor = true;
	// 
	// appVersionLabelNotifications
	// 
	this->appVersionLabelNotifications->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
	this->appVersionLabelNotifications->AutoSize = true;
	this->appVersionLabelNotifications->Location = System::Drawing::Point(657, 417);
	this->appVersionLabelNotifications->Name = L"appVersionLabelNotifications";
	this->appVersionLabelNotifications->Size = System::Drawing::Size(72, 13);
	this->appVersionLabelNotifications->TabIndex = 15;
	this->appVersionLabelNotifications->Text = L"Version: 1.0.2";
	// 
	// settingsTabPage
	// 
	this->settingsTabPage->Controls->Add(this->appVersionLabelSettings);
	this->settingsTabPage->Controls->Add(this->fontSetting);
	this->settingsTabPage->Controls->Add(this->themeSetting);
	this->settingsTabPage->Location = System::Drawing::Point(4, 36);
	this->settingsTabPage->Name = L"settingsTabPage";
	this->settingsTabPage->Size = System::Drawing::Size(747, 435);
	this->settingsTabPage->TabIndex = 4;
	this->settingsTabPage->Text = L"Settings";
	this->settingsTabPage->UseVisualStyleBackColor = true;
	// 
	// appVersionLabelSettings
	// 
	this->appVersionLabelSettings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
	this->appVersionLabelSettings->AutoSize = true;
	this->appVersionLabelSettings->Location = System::Drawing::Point(653, 417);
	this->appVersionLabelSettings->Name = L"appVersionLabelSettings";
	this->appVersionLabelSettings->Size = System::Drawing::Size(72, 13);
	this->appVersionLabelSettings->TabIndex = 15;
	this->appVersionLabelSettings->Text = L"Version: 1.0.2";
	// 
	// tabControl1
	// 
	this->tabControl1->Controls->Add(this->dashboardTabPage);
	this->tabControl1->Controls->Add(this->booksTabPage);
	this->tabControl1->Controls->Add(this->notificationsTabPage);
	this->tabControl1->Controls->Add(this->profileTabPage);
	this->tabControl1->Controls->Add(this->settingsTabPage);
	this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
	this->tabControl1->ItemSize = System::Drawing::Size(150, 32);
	this->tabControl1->Location = System::Drawing::Point(0, 0);
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->Size = System::Drawing::Size(755, 475);
	this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
	this->tabControl1->TabIndex = 1;
	// 
	// profileTabPage
	// 
	this->profileTabPage->Controls->Add(this->appVersionLabelProfile);
	this->profileTabPage->Controls->Add(this->panel8);
	this->profileTabPage->Controls->Add(this->phonesArray);
	this->profileTabPage->Controls->Add(this->emailsArray);
	this->profileTabPage->Controls->Add(this->panel9);
	this->profileTabPage->Controls->Add(this->panel10);
	this->profileTabPage->Controls->Add(this->panel7);
	this->profileTabPage->Controls->Add(this->panel5);
	this->profileTabPage->Location = System::Drawing::Point(4, 36);
	this->profileTabPage->Name = L"profileTabPage";
	this->profileTabPage->Size = System::Drawing::Size(747, 435);
	this->profileTabPage->TabIndex = 3;
	this->profileTabPage->Text = L"Profile";
	this->profileTabPage->UseVisualStyleBackColor = true;
	// 
	// appVersionLabelProfile
	// 
	this->appVersionLabelProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
	this->appVersionLabelProfile->AutoSize = true;
	this->appVersionLabelProfile->Location = System::Drawing::Point(658, 417);
	this->appVersionLabelProfile->Name = L"appVersionLabelProfile";
	this->appVersionLabelProfile->Size = System::Drawing::Size(72, 13);
	this->appVersionLabelProfile->TabIndex = 136;
	this->appVersionLabelProfile->Text = L"Version: 1.0.2";
	// 
	// MyStudentForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(755, 475);
	this->Controls->Add(this->tabControl1);
	this->MinimumSize = System::Drawing::Size(771, 514);
	this->Name = L"MyStudentForm";
	this->Text = L"Library Management System: Student";
	this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyStudentForm::MyStudentFormClosing);
	this->Load += gcnew System::EventHandler(this, &MyStudentForm::MyStudentForm_Load);
	this->panel8->ResumeLayout(false);
	this->panel8->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	this->booksTabPage->ResumeLayout(false);
	this->BooksLayoutPanel1->ResumeLayout(false);
	this->groupBox4->ResumeLayout(false);
	this->controlsTableLayoutPanel2->ResumeLayout(false);
	this->allBooksGoupBox->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allBooksDataGridView))->EndInit();
	this->categoriesGroupBox->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->categoriesDataGridView))->EndInit();
	this->myBooksOverdueGroupBox->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myOverdueBooksDataGridView))->EndInit();
	this->returnedBooksGroupBox->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->returnedBooksDataGridView))->EndInit();
	this->borrowBooksGroupBox->ResumeLayout(false);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrowedBooksDataGridView))->EndInit();
	this->panel9->ResumeLayout(false);
	this->panel9->PerformLayout();
	this->dashboardTabPage->ResumeLayout(false);
	this->panelDashboardUsable->ResumeLayout(false);
	this->panelDashboardUsable->PerformLayout();
	this->panelBanner->ResumeLayout(false);
	this->panel12->ResumeLayout(false);
	this->panel12->PerformLayout();
	this->panel11->ResumeLayout(false);
	this->tableLayoutPanel3->ResumeLayout(false);
	this->tableLayoutPanel3->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ppDash))->EndInit();
	this->statsGroup->ResumeLayout(false);
	this->tableLayoutPanel2->ResumeLayout(false);
	this->panel2->ResumeLayout(false);
	this->panel2->PerformLayout();
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->panel3->ResumeLayout(false);
	this->panel3->PerformLayout();
	this->themeSetting->ResumeLayout(false);
	this->themeSetting->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
	this->fontSetting->ResumeLayout(false);
	this->fontSetting->PerformLayout();
	this->panel5->ResumeLayout(false);
	this->panel5->PerformLayout();
	this->panel7->ResumeLayout(false);
	this->panel7->PerformLayout();
	this->panel10->ResumeLayout(false);
	this->notificationsTabPage->ResumeLayout(false);
	this->notificationsTabPage->PerformLayout();
	this->settingsTabPage->ResumeLayout(false);
	this->settingsTabPage->PerformLayout();
	this->tabControl1->ResumeLayout(false);
	this->profileTabPage->ResumeLayout(false);
	this->profileTabPage->PerformLayout();
	this->ResumeLayout(false);

}

inline void MyStudentForm::updateStats() {
	int totalPatrions = getValueFromQuery("SELECT COUNT(*) FROM Users;");
	totStudents = getValueFromQuery("SELECT COUNT(*) FROM Users WHERE userType = 'Student';");
	totAdmins = totalPatrions - totStudents;

	totBooks = getValueFromQuery("SELECT SUM(totalCopies) FROM Books;");
	totDifferentBooks = getValueFromQuery("SELECT COUNT(*) FROM Books;");
	totBorrowed = getValueFromQuery("SELECT COUNT(*) FROM ReturnedBooks WHERE returned='NO';"); // not returned
	totNotReturned = getValueFromQuery("SELECT COUNT(*) FROM ReturnedBooks WHERE returned='LATE';");
	totOverdue = getValueFromQuery("SELECT COUNT(*) FROM ReturnedBooks rb "
		"INNER JOIN BorrowedBooks bb ON rb.borrowID = bb.borrowID "
		"WHERE  (rb.returnDate > bb.dueDate) OR ('" + getNowMyFormat() + "' > bb.duedate AND rb.returned<>'YES');");

	totAvailable = totBooks - totNotReturned;

	totStudentsOnline = getValueFromQuery("SELECT COUNT(*) FROM Users WHERE userType='Student' AND status='Online';");
	totAdminsOnline = getValueFromQuery("SELECT COUNT(*) FROM Users WHERE userType <> 'Student' AND status = 'Online'; ");


	totalAdminCountValue->Text = totAdmins.ToString();
	totalStudentCountValue->Text = totStudents.ToString();

	totalBooksCountValue->Text = totBooks.ToString();
	totDiffBooks->Text = totDifferentBooks.ToString();
	totalBorrowedCountValue->Text = totBorrowed.ToString();
	totalOverdueCountValue->Text = totOverdue.ToString();
	totalAvailableCountValue->Text = totAvailable.ToString();

	studentsOnlineValue->Text = totStudentsOnline.ToString();
	adminsOnlineValue->Text = totAdminsOnline.ToString();
}

inline void MyStudentForm::refreshAllTables() {
	// Books Query Strings
	String^ allBooksQuery =
		" SELECT b.bookID AS 'Book No.', b.title AS Title,  a.authorNames AS Author, p.publisherName AS Publisher, b.publicationDate, ISBN, g.genre_name AS Genre, "
		" c.categoryName AS Category, b.totalCopies AS 'Total Copies', (b.totalCopies - b.totalBorrowed) AS 'Amount available' "
		" FROM  Books b INNER JOIN BookGenres g ON g.genreID = b.genreID "
		" INNER JOIN Authors a ON b.authorID = a.authorID "
		" INNER JOIN Publishers p ON b.publisherID = p.publisherID INNER JOIN BookCategories c ON g.categoryID = c.categoryID;";

	String^ returnedBooksQuery =
		" SELECT b.bookID AS 'Book No.', b.title AS 'Book Title ', aut.authorNames AS 'By author ', "
		" bb.borrowedDate AS 'Borrowed on ', br.returnDate AS 'Returned on '   "
		" FROM Books b   "
		" INNER JOIN BorrowedBooks bb ON b.bookID = bb.bookID   "
		" INNER JOIN ReturnedBooks br ON bb.borrowID = br.borrowID   "
		" INNER JOIN Users st ON br.universityID = st.universityID   "
		" INNER JOIN Authors aut ON aut.authorID = b.authorID	"
		" WHERE (br.returned = 'YES' OR br.returned = 'LATE') AND st.universityID = " + student->universityID + ";";

	String^ categoriesBooksQuery =
		"SELECT bc.categoryName AS 'Category', bg.genre_name AS 'Genre' FROM BookCategories bc "
		"INNER JOIN BookGenres bg ON bg.categoryID = bc.categoryID;";

	String^ myOverdueBooksQuery =
		" SELECT b.bookID AS 'Book No.', b.title AS 'Book Title', "
		" bb.borrowedDate AS 'Borrowed on ' "
		" FROM Books b INNER JOIN BorrowedBooks bb ON b.bookID = bb.bookID "
		" INNER JOIN ReturnedBooks br ON bb.borrowID = br.borrowID INNER JOIN Users st ON bb.universityID = st.universityID "
		" WHERE (br.returned='NO' AND st.universityID =" + student->universityID + ") AND bb.dueDate < '" + 
		getNowMyFormat() + "'; ";
	
	String^ BorrowedBooksQuery =
		" SELECT b.title AS 'Book Title', bb.dueDate AS 'Must be returned before...' "
		" FROM Books b "
		" INNER JOIN BorrowedBooks bb ON bb.bookID = b.bookID "
		" INNER JOIN ReturnedBooks rb ON rb.borrowID = bb.borrowID "
		" WHERE bb.universityID = " + student->universityID + " AND rb.returned='NO';";
	// Books Tab
	updateDataGridView(allBooksQuery, allBooksDataGridView, "All-Books");
	updateDataGridView(returnedBooksQuery, returnedBooksDataGridView, "Returned Books");
	updateDataGridView(BorrowedBooksQuery, borrowedBooksDataGridView, "Borrowed Books");
	updateDataGridView(categoriesBooksQuery, categoriesDataGridView, "Categories");
	updateDataGridView(myOverdueBooksQuery, myOverdueBooksDataGridView, "Overdue");
}

inline void MyStudentForm::MyStudentFormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Do you really want to log out?",
		"Library Management System: " + student->firstName, MessageBoxButtons::YesNo) == WFDR::No) {
		e->Cancel = true; return;
	}
	updateOnlineStatus("Offline", student->universityID);
}

inline void MyStudentForm::SaveChangesProfile(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ connection = StartConnection();

		SqlCommand^ command = gcnew SqlCommand();
		command->Connection = connection;
		String^ patch;

		command->CommandText = " UPDATE Users SET ";

		if (passwordChanged) { // if password is changed
			patch = " [password]=@Password, [email]=@Email, [phoneNumber]=@Phone ";
			command->Parameters->AddWithValue("@Password", tbNewPass->Text);
			command->Parameters->AddWithValue("@Email", tbEmail->Text);
			command->Parameters->AddWithValue("@Phone", tbPhone->Text->Replace("-", ""));
		}
		else {
			patch = " [email]=@Email, [phoneNumber]=@Phone ";
			command->Parameters->AddWithValue("@Email", tbEmail->Text);
			command->Parameters->AddWithValue("@Phone", tbPhone->Text->Replace("-", ""));
		}

		command->CommandText += patch;

		if (profilePictureChanged) {
			command->CommandText += ", [userImage]=@ImageData ";
			command->Parameters->Add("@ImageData", SqlDbType::Image)->Value = imageData;
		}
		command->CommandText += " WHERE universityID=" + student->universityID;

		command->ExecuteNonQuery();

		connection->Close();
		re_populateComboBox(phonesArray, "idNumber", "Users");
		re_populateComboBox(emailsArray, "idNumber", "Users");
		userDetailsModified = true;
		profilePictureChanged = false; // this resets as the changed picture is now re-initialized and is the current picture and not a changed picture
		DiscardProfileChanges(this, e);
		RefreshEverything(this, e);
		checkForChanges();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

inline void MyStudentForm::DiscardProfileChanges(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = student->image;

	tbPhone->Text = student->phoneNumber;
	tbEmail->Text = student->email;

	tbOldPass->Clear();
	tbNewPass->Clear();
	tbNewPassConfirm->Clear();

	checkForChanges();
}

inline void MyStudentForm::Logout(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}

inline void MyStudentForm::GoToProfile(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	tabControl1->SelectTab(profileTabPage);
}

inline void MyStudentForm::MyStudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	updateOnlineStatus("Online", student->universityID);
	userDetailsModified = true; // to trigger loading of user details on form load
	RefreshEverything(this, e);
	checkForChanges();
}

inline void MyStudentForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Change profile picture
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Title = L"Library System: Select an Image";
	ofd->Filter = L"Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG";
	ofd->Multiselect = false;

	if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imageData = System::IO::File::ReadAllBytes(ofd->FileName);
		pictureBox1->Image = System::Drawing::Image::FromFile(ofd->FileName);
		profilePictureChanged = true;
	}
	else {
		profilePictureChanged = false;
		pictureBox1->Image = student->image;
	}
	checkForChanges();
}

inline void MyStudentForm::RefreshEverything(System::Object^ sender, System::EventArgs^ e) {
	// Refresh this incase user tries to change their phone/email details
	re_populateComboBox(emailsArray, "email", "Users");
	re_populateComboBox(phonesArray, "phoneNumber", "Users");
	// The stats and all datagridview
	updateStats();
	refreshAllTables();

	// User details but only if they are modified
	if (userDetailsModified) {
		// First load data from database to student object
		student->InitializeVariables(student->universityID);
		// Dashboard details
		universityIDLabel->Text = student->universityID;
		surnameLabel->Text = student->lastName;
		firstNameLabel->Text = student->firstName;
		ppDash->Image = student->image;
		// Profile Details
		tbLastName->Text = student->lastName;
		tbFirstName->Text = student->firstName;
		
		tbUniversityID->Text = student->universityID;
		tbID->Text = student->idNumber;
		tbDOB->Text = student->dateOfBirth->ToShortDateString();
		tbGender->Text = student->gender;

		tbPhone->Text = student->phoneNumber;
		tbEmail->Text = student->email;

		pictureBox1->Image = ppDash->Image;
		// Prevent this from repeating everytime
		userDetailsModified = false;
	}
}

inline void MyStudentForm::Books_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchBook^ bookSearchForm = gcnew SearchBook(student);
	this->Hide();
	bookSearchForm->ShowDialog();
	this->Show();
}

inline void MyStudentForm::SeeOldPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SeeOldPassword) {
		SeeOldPassword = false;
		btnOldPass->Text = "--";
		tbOldPass->UseSystemPasswordChar = true;
	}
	else {
		SeeOldPassword = true;
		btnOldPass->Text = "O";
		tbOldPass->UseSystemPasswordChar = false;
	}
}

inline void MyStudentForm::SeeNewPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SeeNewPassword) {
		SeeNewPassword = false;
		btnNewPass->Text = "--";
		tbNewPass->UseSystemPasswordChar = true;
	}
	else {
		SeeNewPassword = true;
		btnNewPass->Text = "O";
		tbNewPass->UseSystemPasswordChar = false;
	}
}

inline void MyStudentForm::SeeNewPassConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SeeNewPasswordConfirm) {
		SeeNewPasswordConfirm = false;
		btnNewPassConfirm->Text = "--";
		tbNewPassConfirm->UseSystemPasswordChar = true;
	}
	else {
		SeeNewPasswordConfirm = true;
		btnNewPassConfirm->Text = "O";
		tbNewPassConfirm->UseSystemPasswordChar = false;
	}
}

inline void MyStudentForm::SomethingInProfileChanged(System::Object^ sender, System::EventArgs^ e) {
	checkForChanges();
}

inline void MyStudentForm::checkForErrors() {
	int count = 0;
	int noUpdate = 0;
	int cerrors = 0;
	//
	// Email
	//
	if (emailChanged) {
		if (email->EndsWith("@gmail.com")) {
			if (!emailsArray->Items->Contains(email)) {
				warningEmailExists->Visible = false;
				count++;
			}
			else {
				warningEmailExists->Visible = true;
				cerrors++;
			}
			warningEmail->Visible = false;
		}
		else {
			warningEmail->Visible = true;
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
	if (phoneChanged) {
		if (phone->Length == 10) {
			if (!phonesArray->Items->Contains(phone)) {
				warningPhoneExists->Visible = false;
				count++;
			}
			else {
				warningPhoneExists->Visible = true;
				cerrors++;
			}
			warningPhone->Visible = false;
		}
		else {
			warningPhone->Visible = true;
			warningPhone->Text = "Invalid phone!";
			cerrors++;
		}
	}
	else {
		noUpdate++;
		warningPhoneExists->Visible = false;
		warningPhone->Visible = false;
	}
	//
	// Password
	// 
	if (oldPasswordCorrect) {
		if (tbNewPass->Text->Length >= 8) {
			warningPasswordLength->Visible = false;
			if (tbNewPass->Text == tbNewPassConfirm->Text) {
				count++;
				warningPasswordMatch->Visible = false;
			}
			else warningPasswordMatch->Visible = true;
		}
		else {
			warningPasswordLength->Visible = true;
		}
	}
	else {
		noUpdate++;
		warningPasswordLength->Visible = false;
		warningPasswordMatch->Visible = false;
	}

	(profilePictureChanged) ? count++ : noUpdate++;

	// 
	// Save Changes Button 
	//
	if (noUpdate == 4) {
		btnSaveChangesProfile->Enabled = false;
		btnDiscardChangesProfile->Enabled = false;
		return;
	}
	else {
		btnSaveChangesProfile->Enabled = true;
		btnDiscardChangesProfile->Enabled = true;
	}
	// no errors 

	if (count && cerrors == 0) {
		btnSaveChangesProfile->Enabled = true;
		btnDiscardChangesProfile->Enabled = true;
	}
	else {
		btnSaveChangesProfile->Enabled = false;
		btnDiscardChangesProfile->Enabled = false;
	}
}

inline void MyStudentForm::checkForChanges() {
	email = tbEmail->Text->Trim()->Replace("'", "");
	phone = tbPhone->Text->Replace("-", "");

	// phone
	if (student->phoneNumber == phone) {
		phoneChanged = false;
		btnPhone->BackColor = Color::Green;
	}
	else {
		phoneChanged = true;
		btnPhone->BackColor = Color::Red;
	}

	// email
	if (student->email == email) {
		emailChanged = false;
		btnEmail->BackColor = Color::Green;
	}
	else {
		emailChanged = true;
		btnEmail->BackColor = Color::Red;
	}
	// password (Overall)
	if (tbOldPass->Text == student->password) {
		oldPasswordCorrect = true;
		if (tbNewPass->Text == tbNewPassConfirm->Text) {
			passwordChanged = true;
		}
		else {
			passwordChanged = false;
		}
	}
	else {
		oldPasswordCorrect = false;
		passwordChanged = false;
	}
	//profile picture 
	if (pictureBox1->Image == student->image) {
		profilePictureChanged = false;
	}
	else {
		profilePictureChanged = true;
	}
	// chech errors
	checkForErrors();
}


