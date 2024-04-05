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
	/// Summary for AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->dateTimePicker1->MaxDate = System::DateTime::Now.AddDays(-1);
			DateTime x = System::DateTime::Now.AddDays(-2);
			this->dateTimePicker1->Value = x;
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ formTitle;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblAuthor;
	private: System::Windows::Forms::Label^ lblPublishor;
	private: System::Windows::Forms::Label^ lblDatePublished;
	private: System::Windows::Forms::Label^ lblISBN;
	private: System::Windows::Forms::Label^ lblGenre;
	private: System::Windows::Forms::Label^ lblCategory;
	private: System::Windows::Forms::Label^ lblTotalCopies;
	private: System::Windows::Forms::TextBox^ tbTitle;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ tbISBN;
	private: System::Windows::Forms::ComboBox^ cbPublisher;

	private: System::Windows::Forms::ComboBox^ cbGenre;

	private: System::Windows::Forms::ComboBox^ cbCategory;
	private: System::Windows::Forms::ComboBox^ cbAuthor;

	private: System::Windows::Forms::ComboBox^ cbTotalValues;
	private: System::Windows::Forms::Label^ warningTitleEmpty;

	private: System::Windows::Forms::Label^ warningAuthorEmpty;

	private: System::Windows::Forms::Label^ warningPublisherEmpty;
	private: System::Windows::Forms::Label^ warningISBNempty;
	private: System::Windows::Forms::Label^ warningISBNexists;
	private: System::Windows::Forms::Label^ warningAuthorNotValid;
	private: System::Windows::Forms::Label^ warningBookExists;
	private: System::Windows::Forms::Label^ warningPublisherValid;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ warningISBNInvalid;
	private: System::Windows::Forms::ComboBox^ isbnsArray;







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
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->formTitle = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->lblPublishor = (gcnew System::Windows::Forms::Label());
			this->lblDatePublished = (gcnew System::Windows::Forms::Label());
			this->lblISBN = (gcnew System::Windows::Forms::Label());
			this->lblGenre = (gcnew System::Windows::Forms::Label());
			this->lblCategory = (gcnew System::Windows::Forms::Label());
			this->lblTotalCopies = (gcnew System::Windows::Forms::Label());
			this->tbTitle = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbISBN = (gcnew System::Windows::Forms::TextBox());
			this->cbPublisher = (gcnew System::Windows::Forms::ComboBox());
			this->cbGenre = (gcnew System::Windows::Forms::ComboBox());
			this->cbCategory = (gcnew System::Windows::Forms::ComboBox());
			this->cbAuthor = (gcnew System::Windows::Forms::ComboBox());
			this->cbTotalValues = (gcnew System::Windows::Forms::ComboBox());
			this->warningTitleEmpty = (gcnew System::Windows::Forms::Label());
			this->warningAuthorEmpty = (gcnew System::Windows::Forms::Label());
			this->warningPublisherEmpty = (gcnew System::Windows::Forms::Label());
			this->warningISBNempty = (gcnew System::Windows::Forms::Label());
			this->warningISBNexists = (gcnew System::Windows::Forms::Label());
			this->warningAuthorNotValid = (gcnew System::Windows::Forms::Label());
			this->warningBookExists = (gcnew System::Windows::Forms::Label());
			this->warningPublisherValid = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->warningISBNInvalid = (gcnew System::Windows::Forms::Label());
			this->isbnsArray = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnConfirm
			// 
			this->btnConfirm->BackColor = System::Drawing::Color::Lime;
			this->btnConfirm->FlatAppearance->BorderSize = 0;
			this->btnConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirm->ForeColor = System::Drawing::Color::Black;
			this->btnConfirm->Location = System::Drawing::Point(261, 332);
			this->btnConfirm->Margin = System::Windows::Forms::Padding(6);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(83, 35);
			this->btnConfirm->TabIndex = 9;
			this->btnConfirm->Text = L"Confirm";
			this->btnConfirm->UseVisualStyleBackColor = false;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &AddBook::btnConfirm_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Red;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(99, 332);
			this->btnCancel->Margin = System::Windows::Forms::Padding(6);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(83, 35);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddBook::btnCancel_Click);
			// 
			// formTitle
			// 
			this->formTitle->AutoSize = true;
			this->formTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->formTitle->Location = System::Drawing::Point(120, 10);
			this->formTitle->Margin = System::Windows::Forms::Padding(0);
			this->formTitle->Name = L"formTitle";
			this->formTitle->Size = System::Drawing::Size(173, 25);
			this->formTitle->TabIndex = 19;
			this->formTitle->Text = L"ADD A BOOK...";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Location = System::Drawing::Point(59, 56);
			this->lblTitle->Margin = System::Windows::Forms::Padding(6);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(27, 13);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Title";
			// 
			// lblAuthor
			// 
			this->lblAuthor->AutoSize = true;
			this->lblAuthor->Location = System::Drawing::Point(48, 88);
			this->lblAuthor->Margin = System::Windows::Forms::Padding(6);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(38, 13);
			this->lblAuthor->TabIndex = 1;
			this->lblAuthor->Text = L"Author";
			// 
			// lblPublishor
			// 
			this->lblPublishor->AutoSize = true;
			this->lblPublishor->Location = System::Drawing::Point(35, 125);
			this->lblPublishor->Margin = System::Windows::Forms::Padding(6);
			this->lblPublishor->Name = L"lblPublishor";
			this->lblPublishor->Size = System::Drawing::Size(50, 13);
			this->lblPublishor->TabIndex = 2;
			this->lblPublishor->Text = L"Publisher";
			// 
			// lblDatePublished
			// 
			this->lblDatePublished->AutoSize = true;
			this->lblDatePublished->Location = System::Drawing::Point(3, 161);
			this->lblDatePublished->Margin = System::Windows::Forms::Padding(6);
			this->lblDatePublished->Name = L"lblDatePublished";
			this->lblDatePublished->Size = System::Drawing::Size(79, 13);
			this->lblDatePublished->TabIndex = 3;
			this->lblDatePublished->Text = L"Date Published";
			// 
			// lblISBN
			// 
			this->lblISBN->AutoSize = true;
			this->lblISBN->Location = System::Drawing::Point(50, 190);
			this->lblISBN->Margin = System::Windows::Forms::Padding(6);
			this->lblISBN->Name = L"lblISBN";
			this->lblISBN->Size = System::Drawing::Size(32, 13);
			this->lblISBN->TabIndex = 4;
			this->lblISBN->Text = L"ISBN";
			// 
			// lblGenre
			// 
			this->lblGenre->AutoSize = true;
			this->lblGenre->Location = System::Drawing::Point(47, 255);
			this->lblGenre->Margin = System::Windows::Forms::Padding(6);
			this->lblGenre->Name = L"lblGenre";
			this->lblGenre->Size = System::Drawing::Size(36, 13);
			this->lblGenre->TabIndex = 5;
			this->lblGenre->Text = L"Genre";
			// 
			// lblCategory
			// 
			this->lblCategory->AutoSize = true;
			this->lblCategory->Location = System::Drawing::Point(35, 222);
			this->lblCategory->Margin = System::Windows::Forms::Padding(6);
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size(49, 13);
			this->lblCategory->TabIndex = 6;
			this->lblCategory->Text = L"Category";
			// 
			// lblTotalCopies
			// 
			this->lblTotalCopies->AutoSize = true;
			this->lblTotalCopies->Location = System::Drawing::Point(11, 288);
			this->lblTotalCopies->Margin = System::Windows::Forms::Padding(6);
			this->lblTotalCopies->Name = L"lblTotalCopies";
			this->lblTotalCopies->Size = System::Drawing::Size(66, 13);
			this->lblTotalCopies->TabIndex = 7;
			this->lblTotalCopies->Text = L"Total Copies";
			// 
			// tbTitle
			// 
			this->tbTitle->Location = System::Drawing::Point(96, 53);
			this->tbTitle->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->tbTitle->Name = L"tbTitle";
			this->tbTitle->Size = System::Drawing::Size(248, 20);
			this->tbTitle->TabIndex = 1;
			this->tbTitle->TextChanged += gcnew System::EventHandler(this, &AddBook::tbTitle_TextChanged);
			this->tbTitle->Leave += gcnew System::EventHandler(this, &AddBook::tbTitle_Leave);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(94, 155);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(247, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// tbISBN
			// 
			this->tbISBN->Location = System::Drawing::Point(96, 187);
			this->tbISBN->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->tbISBN->Name = L"tbISBN";
			this->tbISBN->Size = System::Drawing::Size(247, 20);
			this->tbISBN->TabIndex = 5;
			this->tbISBN->Leave += gcnew System::EventHandler(this, &AddBook::tbISBN_Leave);
			// 
			// cbPublisher
			// 
			this->cbPublisher->FormattingEnabled = true;
			this->cbPublisher->Location = System::Drawing::Point(95, 122);
			this->cbPublisher->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->cbPublisher->Name = L"cbPublisher";
			this->cbPublisher->Size = System::Drawing::Size(248, 21);
			this->cbPublisher->TabIndex = 3;
			this->cbPublisher->TextUpdate += gcnew System::EventHandler(this, &AddBook::cbPublisher_TextUpdate);
			this->cbPublisher->TextChanged += gcnew System::EventHandler(this, &AddBook::cbPublisher_TextChanged);
			this->cbPublisher->Leave += gcnew System::EventHandler(this, &AddBook::cbPublisher_Leave);
			// 
			// cbGenre
			// 
			this->cbGenre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGenre->FormattingEnabled = true;
			this->cbGenre->Location = System::Drawing::Point(95, 252);
			this->cbGenre->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->cbGenre->Name = L"cbGenre";
			this->cbGenre->Size = System::Drawing::Size(248, 21);
			this->cbGenre->TabIndex = 7;
			this->cbGenre->SelectedIndexChanged += gcnew System::EventHandler(this, &AddBook::cbGenre_SelectedIndexChanged);
			// 
			// cbCategory
			// 
			this->cbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCategory->FormattingEnabled = true;
			this->cbCategory->Location = System::Drawing::Point(96, 219);
			this->cbCategory->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->cbCategory->Name = L"cbCategory";
			this->cbCategory->Size = System::Drawing::Size(247, 21);
			this->cbCategory->TabIndex = 6;
			this->cbCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &AddBook::cbCategory_SelectedIndexChanged);
			// 
			// cbAuthor
			// 
			this->cbAuthor->FormattingEnabled = true;
			this->cbAuthor->Location = System::Drawing::Point(96, 88);
			this->cbAuthor->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->cbAuthor->Name = L"cbAuthor";
			this->cbAuthor->Size = System::Drawing::Size(248, 21);
			this->cbAuthor->TabIndex = 2;
			this->cbAuthor->TextUpdate += gcnew System::EventHandler(this, &AddBook::cbAuthor_TextUpdate);
			this->cbAuthor->TextChanged += gcnew System::EventHandler(this, &AddBook::cbAuthor_TextChanged);
			this->cbAuthor->Leave += gcnew System::EventHandler(this, &AddBook::cbAuthor_Leave);
			// 
			// cbTotalValues
			// 
			this->cbTotalValues->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTotalValues->FormattingEnabled = true;
			this->cbTotalValues->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->cbTotalValues->Location = System::Drawing::Point(96, 285);
			this->cbTotalValues->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->cbTotalValues->Name = L"cbTotalValues";
			this->cbTotalValues->Size = System::Drawing::Size(247, 21);
			this->cbTotalValues->TabIndex = 8;
			// 
			// warningTitleEmpty
			// 
			this->warningTitleEmpty->AutoSize = true;
			this->warningTitleEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningTitleEmpty->ForeColor = System::Drawing::Color::Red;
			this->warningTitleEmpty->Location = System::Drawing::Point(246, 41);
			this->warningTitleEmpty->Margin = System::Windows::Forms::Padding(0);
			this->warningTitleEmpty->Name = L"warningTitleEmpty";
			this->warningTitleEmpty->Size = System::Drawing::Size(95, 12);
			this->warningTitleEmpty->TabIndex = 20;
			this->warningTitleEmpty->Text = L"Title cannot be empty!";
			this->warningTitleEmpty->Visible = false;
			// 
			// warningAuthorEmpty
			// 
			this->warningAuthorEmpty->AutoSize = true;
			this->warningAuthorEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningAuthorEmpty->ForeColor = System::Drawing::Color::Red;
			this->warningAuthorEmpty->Location = System::Drawing::Point(238, 76);
			this->warningAuthorEmpty->Margin = System::Windows::Forms::Padding(0);
			this->warningAuthorEmpty->Name = L"warningAuthorEmpty";
			this->warningAuthorEmpty->Size = System::Drawing::Size(106, 12);
			this->warningAuthorEmpty->TabIndex = 21;
			this->warningAuthorEmpty->Text = L"Author cannot be empty!";
			this->warningAuthorEmpty->Visible = false;
			// 
			// warningPublisherEmpty
			// 
			this->warningPublisherEmpty->AutoSize = true;
			this->warningPublisherEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningPublisherEmpty->ForeColor = System::Drawing::Color::Red;
			this->warningPublisherEmpty->Location = System::Drawing::Point(228, 110);
			this->warningPublisherEmpty->Margin = System::Windows::Forms::Padding(0);
			this->warningPublisherEmpty->Name = L"warningPublisherEmpty";
			this->warningPublisherEmpty->Size = System::Drawing::Size(116, 12);
			this->warningPublisherEmpty->TabIndex = 22;
			this->warningPublisherEmpty->Text = L"Publisher cannot be empty!";
			this->warningPublisherEmpty->Visible = false;
			// 
			// warningISBNempty
			// 
			this->warningISBNempty->AutoSize = true;
			this->warningISBNempty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warningISBNempty->ForeColor = System::Drawing::Color::Red;
			this->warningISBNempty->Location = System::Drawing::Point(241, 175);
			this->warningISBNempty->Margin = System::Windows::Forms::Padding(0);
			this->warningISBNempty->Name = L"warningISBNempty";
			this->warningISBNempty->Size = System::Drawing::Size(100, 12);
			this->warningISBNempty->TabIndex = 23;
			this->warningISBNempty->Text = L"ISBN cannot be empty!";
			this->warningISBNempty->Visible = false;
			// 
			// warningISBNexists
			// 
			this->warningISBNexists->AutoSize = true;
			this->warningISBNexists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningISBNexists->ForeColor = System::Drawing::Color::Red;
			this->warningISBNexists->Location = System::Drawing::Point(94, 175);
			this->warningISBNexists->Margin = System::Windows::Forms::Padding(0);
			this->warningISBNexists->Name = L"warningISBNexists";
			this->warningISBNexists->Size = System::Drawing::Size(89, 12);
			this->warningISBNexists->TabIndex = 24;
			this->warningISBNexists->Text = L"ISBN already exists!";
			this->warningISBNexists->Visible = false;
			// 
			// warningAuthorNotValid
			// 
			this->warningAuthorNotValid->AutoSize = true;
			this->warningAuthorNotValid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningAuthorNotValid->ForeColor = System::Drawing::Color::Red;
			this->warningAuthorNotValid->Location = System::Drawing::Point(94, 76);
			this->warningAuthorNotValid->Margin = System::Windows::Forms::Padding(0);
			this->warningAuthorNotValid->Name = L"warningAuthorNotValid";
			this->warningAuthorNotValid->Size = System::Drawing::Size(91, 12);
			this->warningAuthorNotValid->TabIndex = 25;
			this->warningAuthorNotValid->Text = L"Author not validated!";
			this->warningAuthorNotValid->Visible = false;
			// 
			// warningBookExists
			// 
			this->warningBookExists->AutoSize = true;
			this->warningBookExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningBookExists->ForeColor = System::Drawing::Color::Red;
			this->warningBookExists->Location = System::Drawing::Point(248, 315);
			this->warningBookExists->Name = L"warningBookExists";
			this->warningBookExists->Size = System::Drawing::Size(101, 13);
			this->warningBookExists->TabIndex = 26;
			this->warningBookExists->Text = L"Book already exists!";
			this->warningBookExists->Visible = false;
			// 
			// warningPublisherValid
			// 
			this->warningPublisherValid->AutoSize = true;
			this->warningPublisherValid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningPublisherValid->ForeColor = System::Drawing::Color::Red;
			this->warningPublisherValid->Location = System::Drawing::Point(94, 110);
			this->warningPublisherValid->Name = L"warningPublisherValid";
			this->warningPublisherValid->Size = System::Drawing::Size(102, 12);
			this->warningPublisherValid->TabIndex = 27;
			this->warningPublisherValid->Text = L"Publisher not Validated!";
			this->warningPublisherValid->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &AddBook::timer1_Tick);
			// 
			// warningISBNInvalid
			// 
			this->warningISBNInvalid->AutoSize = true;
			this->warningISBNInvalid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->warningISBNInvalid->ForeColor = System::Drawing::Color::Red;
			this->warningISBNInvalid->Location = System::Drawing::Point(349, 191);
			this->warningISBNInvalid->Margin = System::Windows::Forms::Padding(0);
			this->warningISBNInvalid->Name = L"warningISBNInvalid";
			this->warningISBNInvalid->Size = System::Drawing::Size(60, 12);
			this->warningISBNInvalid->TabIndex = 28;
			this->warningISBNInvalid->Text = L"ISBN Invalid!";
			this->warningISBNInvalid->Visible = false;
			// 
			// isbnsArray
			// 
			this->isbnsArray->FormattingEnabled = true;
			this->isbnsArray->Location = System::Drawing::Point(6, 332);
			this->isbnsArray->Name = L"isbnsArray";
			this->isbnsArray->Size = System::Drawing::Size(29, 21);
			this->isbnsArray->TabIndex = 29;
			this->isbnsArray->Visible = false;
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(411, 385);
			this->Controls->Add(this->isbnsArray);
			this->Controls->Add(this->warningISBNInvalid);
			this->Controls->Add(this->warningPublisherValid);
			this->Controls->Add(this->warningBookExists);
			this->Controls->Add(this->warningAuthorNotValid);
			this->Controls->Add(this->warningISBNexists);
			this->Controls->Add(this->warningISBNempty);
			this->Controls->Add(this->warningPublisherEmpty);
			this->Controls->Add(this->warningAuthorEmpty);
			this->Controls->Add(this->warningTitleEmpty);
			this->Controls->Add(this->cbTotalValues);
			this->Controls->Add(this->cbAuthor);
			this->Controls->Add(this->formTitle);
			this->Controls->Add(this->cbCategory);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnConfirm);
			this->Controls->Add(this->cbGenre);
			this->Controls->Add(this->cbPublisher);
			this->Controls->Add(this->tbISBN);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->tbTitle);
			this->Controls->Add(this->lblTotalCopies);
			this->Controls->Add(this->lblCategory);
			this->Controls->Add(this->lblGenre);
			this->Controls->Add(this->lblISBN);
			this->Controls->Add(this->lblDatePublished);
			this->Controls->Add(this->lblPublishor);
			this->Controls->Add(this->lblAuthor);
			this->Controls->Add(this->lblTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(427, 424);
			this->MinimumSize = System::Drawing::Size(427, 424);
			this->Name = L"AddBook";
			this->Text = L"Book Registration";
			this->Load += gcnew System::EventHandler(this, &AddBook::AddBook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// My Functions and variables 
		int authorID, publisherID, categoryID, genreID, totalCopies;

		String^ title, ^ author, ^ publisher, ^ isbn, ^ pubDate;
		String^ genre, ^ category;

		String^ last_title = title, ^ last_author = author, ^ last_publisher = publisher;

		bool AddAuthorToDB = false; // true if author is to be added to DB
		bool AddPublisherToDB = false; // true if publisher is to be added to DB
		bool IsAuthorInDB = false, IsPublisherInDB = false;
		bool UnknownCategory = false; // test ----
		bool bookAdded = false;

		private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		// Add a name (Author/Publisher) to SQL database! for tables with two fields only one being an int primary key
		private: void addNameAuthPub(String^ table, String^ field, String^ val);

		private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e);
		
		private: System::Void AddBook_Load(System::Object^ sender, System::EventArgs^ e);

		// returns id else, -5 = null, -2 = name not validated
		private: int getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field);
		// Leave ... 
		private: System::Void cbAuthor_Leave(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbPublisher_Leave(System::Object^ sender, System::EventArgs^ e);
		private: System::Void tbISBN_Leave(System::Object^ sender, System::EventArgs^ e);
		private: System::Void tbTitle_Leave(System::Object^ sender, System::EventArgs^ e);
		// Timer!
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
		// SelectedIndexChanged
		private: System::Void cbAuthor_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbGenre_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		// TextUpdate
		private: System::Void cbAuthor_TextUpdate(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbPublisher_TextUpdate(System::Object^ sender, System::EventArgs^ e);;
		// TextChanged
		private: System::Void tbTitle_TextChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void cbAuthor_TextChanged(System::Object^ sender, System::EventArgs^ e);
		
		private: System::Void cbPublisher_TextChanged(System::Object^ sender, System::EventArgs^ e);
			   // -------------------------------------------
			   bool IsTitleFieldValid();
			   bool IsAuthorValid();
			   bool IsPublisherValid();
			   bool IsAuthTitleMatch();
			   bool Is_ISBNValid();
	};
}
