#include "UpdateBook.h"
#include "UpdateUser.h"
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void LibraryManagementSystem::UpdateBook::InitializeComponent(void)
{
    this->warningPublisherValid = (gcnew System::Windows::Forms::Label());
    this->warningAuthorNotValid = (gcnew System::Windows::Forms::Label());
    this->warningPublisherEmpty = (gcnew System::Windows::Forms::Label());
    this->warningAuthorEmpty = (gcnew System::Windows::Forms::Label());
    this->warningTitleEmpty = (gcnew System::Windows::Forms::Label());
    this->cbAuthor = (gcnew System::Windows::Forms::ComboBox());
    this->formTitle = (gcnew System::Windows::Forms::Label());
    this->cbCategory = (gcnew System::Windows::Forms::ComboBox());
    this->btnCancel = (gcnew System::Windows::Forms::Button());
    this->btnUpdate = (gcnew System::Windows::Forms::Button());
    this->cbGenre = (gcnew System::Windows::Forms::ComboBox());
    this->cbPublisher = (gcnew System::Windows::Forms::ComboBox());
    this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
    this->tbTitle = (gcnew System::Windows::Forms::TextBox());
    this->lblCategory = (gcnew System::Windows::Forms::Label());
    this->lblGenre = (gcnew System::Windows::Forms::Label());
    this->lblDatePublished = (gcnew System::Windows::Forms::Label());
    this->lblPublishor = (gcnew System::Windows::Forms::Label());
    this->lblAuthor = (gcnew System::Windows::Forms::Label());
    this->lblTitle = (gcnew System::Windows::Forms::Label());
    this->btnTitle = (gcnew System::Windows::Forms::Button());
    this->btnAut = (gcnew System::Windows::Forms::Button());
    this->btnPubDate = (gcnew System::Windows::Forms::Button());
    this->btnPub = (gcnew System::Windows::Forms::Button());
    this->btnGen = (gcnew System::Windows::Forms::Button());
    this->btnCat = (gcnew System::Windows::Forms::Button());
    this->warningBookExists = (gcnew System::Windows::Forms::Label());
    this->SuspendLayout();
    // 
    // warningPublisherValid
    // 
    this->warningPublisherValid->AutoSize = true;
    this->warningPublisherValid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningPublisherValid->ForeColor = System::Drawing::Color::Red;
    this->warningPublisherValid->Location = System::Drawing::Point(361, 155);
    this->warningPublisherValid->Name = L"warningPublisherValid";
    this->warningPublisherValid->Size = System::Drawing::Size(102, 12);
    this->warningPublisherValid->TabIndex = 55;
    this->warningPublisherValid->Text = L"Publisher not Validated!";
    this->warningPublisherValid->Visible = false;
    // 
    // warningAuthorNotValid
    // 
    this->warningAuthorNotValid->AutoSize = true;
    this->warningAuthorNotValid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningAuthorNotValid->ForeColor = System::Drawing::Color::Red;
    this->warningAuthorNotValid->Location = System::Drawing::Point(367, 116);
    this->warningAuthorNotValid->Margin = System::Windows::Forms::Padding(0);
    this->warningAuthorNotValid->Name = L"warningAuthorNotValid";
    this->warningAuthorNotValid->Size = System::Drawing::Size(91, 12);
    this->warningAuthorNotValid->TabIndex = 53;
    this->warningAuthorNotValid->Text = L"Author not validated!";
    this->warningAuthorNotValid->Visible = false;
    // 
    // warningPublisherEmpty
    // 
    this->warningPublisherEmpty->AutoSize = true;
    this->warningPublisherEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningPublisherEmpty->ForeColor = System::Drawing::Color::Red;
    this->warningPublisherEmpty->Location = System::Drawing::Point(243, 139);
    this->warningPublisherEmpty->Margin = System::Windows::Forms::Padding(0);
    this->warningPublisherEmpty->Name = L"warningPublisherEmpty";
    this->warningPublisherEmpty->Size = System::Drawing::Size(116, 12);
    this->warningPublisherEmpty->TabIndex = 50;
    this->warningPublisherEmpty->Text = L"Publisher cannot be empty!";
    this->warningPublisherEmpty->Visible = false;
    // 
    // warningAuthorEmpty
    // 
    this->warningAuthorEmpty->AutoSize = true;
    this->warningAuthorEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningAuthorEmpty->ForeColor = System::Drawing::Color::Red;
    this->warningAuthorEmpty->Location = System::Drawing::Point(255, 100);
    this->warningAuthorEmpty->Margin = System::Windows::Forms::Padding(0);
    this->warningAuthorEmpty->Name = L"warningAuthorEmpty";
    this->warningAuthorEmpty->Size = System::Drawing::Size(106, 12);
    this->warningAuthorEmpty->TabIndex = 49;
    this->warningAuthorEmpty->Text = L"Author cannot be empty!";
    this->warningAuthorEmpty->Visible = false;
    // 
    // warningTitleEmpty
    // 
    this->warningTitleEmpty->AutoSize = true;
    this->warningTitleEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningTitleEmpty->ForeColor = System::Drawing::Color::Red;
    this->warningTitleEmpty->Location = System::Drawing::Point(263, 53);
    this->warningTitleEmpty->Margin = System::Windows::Forms::Padding(0);
    this->warningTitleEmpty->Name = L"warningTitleEmpty";
    this->warningTitleEmpty->Size = System::Drawing::Size(95, 12);
    this->warningTitleEmpty->TabIndex = 48;
    this->warningTitleEmpty->Text = L"Title cannot be empty!";
    this->warningTitleEmpty->Visible = false;
    // 
    // cbAuthor
    // 
    this->cbAuthor->FormattingEnabled = true;
    this->cbAuthor->Location = System::Drawing::Point(110, 112);
    this->cbAuthor->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->cbAuthor->Name = L"cbAuthor";
    this->cbAuthor->Size = System::Drawing::Size(248, 21);
    this->cbAuthor->TabIndex = 33;
    this->cbAuthor->TextUpdate += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    this->cbAuthor->Leave += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    // 
    // formTitle
    // 
    this->formTitle->AutoSize = true;
    this->formTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->formTitle->Location = System::Drawing::Point(120, 19);
    this->formTitle->Margin = System::Windows::Forms::Padding(0);
    this->formTitle->Name = L"formTitle";
    this->formTitle->Size = System::Drawing::Size(227, 25);
    this->formTitle->TabIndex = 47;
    this->formTitle->Text = L"Update Book Details";
    // 
    // cbCategory
    // 
    this->cbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->cbCategory->FormattingEnabled = true;
    this->cbCategory->Location = System::Drawing::Point(111, 246);
    this->cbCategory->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->cbCategory->Name = L"cbCategory";
    this->cbCategory->Size = System::Drawing::Size(247, 21);
    this->cbCategory->TabIndex = 40;
    this->cbCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    // 
    // btnCancel
    // 
    this->btnCancel->BackColor = System::Drawing::Color::Red;
    this->btnCancel->FlatAppearance->BorderSize = 0;
    this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
    this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->btnCancel->ForeColor = System::Drawing::Color::White;
    this->btnCancel->Location = System::Drawing::Point(115, 344);
    this->btnCancel->Margin = System::Windows::Forms::Padding(6);
    this->btnCancel->Name = L"btnCancel";
    this->btnCancel->Size = System::Drawing::Size(83, 35);
    this->btnCancel->TabIndex = 46;
    this->btnCancel->Text = L"Cancel";
    this->btnCancel->UseVisualStyleBackColor = false;
    this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateBook::btnCancel_Click);
    // 
    // btnUpdate
    // 
    this->btnUpdate->BackColor = System::Drawing::Color::Lime;
    this->btnUpdate->Enabled = false;
    this->btnUpdate->FlatAppearance->BorderSize = 0;
    this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
    this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->btnUpdate->ForeColor = System::Drawing::Color::Black;
    this->btnUpdate->Location = System::Drawing::Point(279, 344);
    this->btnUpdate->Margin = System::Windows::Forms::Padding(6);
    this->btnUpdate->Name = L"btnUpdate";
    this->btnUpdate->Size = System::Drawing::Size(83, 35);
    this->btnUpdate->TabIndex = 45;
    this->btnUpdate->Text = L"Update";
    this->btnUpdate->UseVisualStyleBackColor = false;
    this->btnUpdate->Click += gcnew System::EventHandler(this, &UpdateBook::UpdateNow);
    // 
    // cbGenre
    // 
    this->cbGenre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->cbGenre->FormattingEnabled = true;
    this->cbGenre->Location = System::Drawing::Point(110, 292);
    this->cbGenre->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->cbGenre->Name = L"cbGenre";
    this->cbGenre->Size = System::Drawing::Size(248, 21);
    this->cbGenre->TabIndex = 43;
    this->cbGenre->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    // 
    // cbPublisher
    // 
    this->cbPublisher->FormattingEnabled = true;
    this->cbPublisher->Location = System::Drawing::Point(110, 151);
    this->cbPublisher->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->cbPublisher->Name = L"cbPublisher";
    this->cbPublisher->Size = System::Drawing::Size(248, 21);
    this->cbPublisher->TabIndex = 34;
    this->cbPublisher->TextUpdate += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    this->cbPublisher->TextChanged += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    this->cbPublisher->Leave += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    // 
    // dateTimePicker1
    // 
    this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::Gray;
    this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
    this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
    this->dateTimePicker1->Location = System::Drawing::Point(110, 201);
    this->dateTimePicker1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->dateTimePicker1->Name = L"dateTimePicker1";
    this->dateTimePicker1->Size = System::Drawing::Size(247, 20);
    this->dateTimePicker1->TabIndex = 37;
    // 
    // tbTitle
    // 
    this->tbTitle->Location = System::Drawing::Point(110, 65);
    this->tbTitle->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
    this->tbTitle->Name = L"tbTitle";
    this->tbTitle->Size = System::Drawing::Size(248, 20);
    this->tbTitle->TabIndex = 31;
    this->tbTitle->TextChanged += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    this->tbTitle->Leave += gcnew System::EventHandler(this, &UpdateBook::SomethingHappened);
    // 
    // lblCategory
    // 
    this->lblCategory->AutoSize = true;
    this->lblCategory->Location = System::Drawing::Point(108, 227);
    this->lblCategory->Margin = System::Windows::Forms::Padding(6);
    this->lblCategory->Name = L"lblCategory";
    this->lblCategory->Size = System::Drawing::Size(49, 13);
    this->lblCategory->TabIndex = 41;
    this->lblCategory->Text = L"Category";
    // 
    // lblGenre
    // 
    this->lblGenre->AutoSize = true;
    this->lblGenre->Location = System::Drawing::Point(107, 273);
    this->lblGenre->Margin = System::Windows::Forms::Padding(6);
    this->lblGenre->Name = L"lblGenre";
    this->lblGenre->Size = System::Drawing::Size(36, 13);
    this->lblGenre->TabIndex = 38;
    this->lblGenre->Text = L"Genre";
    // 
    // lblDatePublished
    // 
    this->lblDatePublished->AutoSize = true;
    this->lblDatePublished->Location = System::Drawing::Point(107, 182);
    this->lblDatePublished->Margin = System::Windows::Forms::Padding(6);
    this->lblDatePublished->Name = L"lblDatePublished";
    this->lblDatePublished->Size = System::Drawing::Size(79, 13);
    this->lblDatePublished->TabIndex = 35;
    this->lblDatePublished->Text = L"Date Published";
    // 
    // lblPublishor
    // 
    this->lblPublishor->AutoSize = true;
    this->lblPublishor->Location = System::Drawing::Point(107, 138);
    this->lblPublishor->Margin = System::Windows::Forms::Padding(6);
    this->lblPublishor->Name = L"lblPublishor";
    this->lblPublishor->Size = System::Drawing::Size(50, 13);
    this->lblPublishor->TabIndex = 32;
    this->lblPublishor->Text = L"Publisher";
    // 
    // lblAuthor
    // 
    this->lblAuthor->AutoSize = true;
    this->lblAuthor->Location = System::Drawing::Point(107, 93);
    this->lblAuthor->Margin = System::Windows::Forms::Padding(6);
    this->lblAuthor->Name = L"lblAuthor";
    this->lblAuthor->Size = System::Drawing::Size(38, 13);
    this->lblAuthor->TabIndex = 30;
    this->lblAuthor->Text = L"Author";
    // 
    // lblTitle
    // 
    this->lblTitle->AutoSize = true;
    this->lblTitle->Location = System::Drawing::Point(107, 50);
    this->lblTitle->Margin = System::Windows::Forms::Padding(6);
    this->lblTitle->Name = L"lblTitle";
    this->lblTitle->Size = System::Drawing::Size(27, 13);
    this->lblTitle->TabIndex = 29;
    this->lblTitle->Text = L"Title";
    // 
    // btnTitle
    // 
    this->btnTitle->BackColor = System::Drawing::Color::Green;
    this->btnTitle->Location = System::Drawing::Point(74, 65);
    this->btnTitle->Name = L"btnTitle";
    this->btnTitle->Size = System::Drawing::Size(27, 23);
    this->btnTitle->TabIndex = 56;
    this->btnTitle->UseVisualStyleBackColor = false;
    // 
    // btnAut
    // 
    this->btnAut->BackColor = System::Drawing::Color::Green;
    this->btnAut->Location = System::Drawing::Point(74, 112);
    this->btnAut->Name = L"btnAut";
    this->btnAut->Size = System::Drawing::Size(27, 23);
    this->btnAut->TabIndex = 57;
    this->btnAut->UseVisualStyleBackColor = false;
    // 
    // btnPubDate
    // 
    this->btnPubDate->BackColor = System::Drawing::Color::Green;
    this->btnPubDate->Location = System::Drawing::Point(74, 198);
    this->btnPubDate->Name = L"btnPubDate";
    this->btnPubDate->Size = System::Drawing::Size(27, 23);
    this->btnPubDate->TabIndex = 59;
    this->btnPubDate->UseVisualStyleBackColor = false;
    // 
    // btnPub
    // 
    this->btnPub->BackColor = System::Drawing::Color::Green;
    this->btnPub->Location = System::Drawing::Point(74, 155);
    this->btnPub->Name = L"btnPub";
    this->btnPub->Size = System::Drawing::Size(27, 23);
    this->btnPub->TabIndex = 58;
    this->btnPub->UseVisualStyleBackColor = false;
    // 
    // btnGen
    // 
    this->btnGen->BackColor = System::Drawing::Color::Green;
    this->btnGen->Location = System::Drawing::Point(74, 290);
    this->btnGen->Name = L"btnGen";
    this->btnGen->Size = System::Drawing::Size(27, 23);
    this->btnGen->TabIndex = 61;
    this->btnGen->UseVisualStyleBackColor = false;
    // 
    // btnCat
    // 
    this->btnCat->BackColor = System::Drawing::Color::Green;
    this->btnCat->Location = System::Drawing::Point(74, 246);
    this->btnCat->Name = L"btnCat";
    this->btnCat->Size = System::Drawing::Size(27, 23);
    this->btnCat->TabIndex = 60;
    this->btnCat->UseVisualStyleBackColor = false;
    // 
    // warningBookExists
    // 
    this->warningBookExists->AutoSize = true;
    this->warningBookExists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->warningBookExists->ForeColor = System::Drawing::Color::Red;
    this->warningBookExists->Location = System::Drawing::Point(276, 325);
    this->warningBookExists->Name = L"warningBookExists";
    this->warningBookExists->Size = System::Drawing::Size(101, 13);
    this->warningBookExists->TabIndex = 62;
    this->warningBookExists->Text = L"Book already exists!";
    this->warningBookExists->Visible = false;
    // 
    // UpdateBook
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(475, 409);
    this->Controls->Add(this->warningBookExists);
    this->Controls->Add(this->btnGen);
    this->Controls->Add(this->btnCat);
    this->Controls->Add(this->btnPubDate);
    this->Controls->Add(this->btnPub);
    this->Controls->Add(this->btnAut);
    this->Controls->Add(this->btnTitle);
    this->Controls->Add(this->warningPublisherValid);
    this->Controls->Add(this->warningAuthorNotValid);
    this->Controls->Add(this->warningPublisherEmpty);
    this->Controls->Add(this->warningAuthorEmpty);
    this->Controls->Add(this->warningTitleEmpty);
    this->Controls->Add(this->cbAuthor);
    this->Controls->Add(this->formTitle);
    this->Controls->Add(this->cbCategory);
    this->Controls->Add(this->btnCancel);
    this->Controls->Add(this->btnUpdate);
    this->Controls->Add(this->cbGenre);
    this->Controls->Add(this->cbPublisher);
    this->Controls->Add(this->dateTimePicker1);
    this->Controls->Add(this->tbTitle);
    this->Controls->Add(this->lblCategory);
    this->Controls->Add(this->lblGenre);
    this->Controls->Add(this->lblDatePublished);
    this->Controls->Add(this->lblPublishor);
    this->Controls->Add(this->lblAuthor);
    this->Controls->Add(this->lblTitle);
    this->Name = L"UpdateBook";
    this->ShowIcon = false;
    this->Text = L"Update Book Details";
    this->ResumeLayout(false);
    this->PerformLayout();

}

inline System::Void LibraryManagementSystem::UpdateBook::btnCancel_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }

inline void LibraryManagementSystem::UpdateBook::addNameAuthPub(String^ table, String^ field, String^ val) {
    try {
        SqlConnection^ connection = StartConnection();

        // Send the query
        String^ sqlQuery = "INSERT INTO " + table + " ([" + field + "]) " + "VALUES ('" + val + "'); ";
        SqlCommand command(sqlQuery, connection);


        // finally send
        SqlDataReader^ reader = command.ExecuteReader();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Update Book Dialog");
    }
}

inline void LibraryManagementSystem::UpdateBook::sendQuery(String^ sqlQuery) {
    try {
        SqlConnection^ connection = StartConnection();

        // Send the query
        SqlCommand command(sqlQuery, connection);

        // finally send by executing
        SqlDataReader^ reader = command.ExecuteReader();
        connection->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Update Book Dialog");
    }
}

//re_populateComboBox(cbAuthor, "authorNames", "Authors");
//re_populateComboBox(cbPublisher, "publisherName", "Publishers");

inline bool LibraryManagementSystem::UpdateBook::IsAuthTitleMatch() {
    String^ query1 = "SELECT title, authorID FROM Books WHERE title='" + title + "' AND authorID =" + authorID + ";";
    bool IsTitleInDBsameAuthor = check_existence(query1);
    if (IsTitleInDBsameAuthor) {
        warningBookExists->Visible = true;
        return false;
    }
    else {
        warningBookExists->Visible = false;
        return true; // 3
    }
}

inline System::Void LibraryManagementSystem::UpdateBook::UpdateNow(System::Object^ sender, System::EventArgs^ e) {
    title = tbTitle->Text->Trim()->Replace("'", "");
    author = cbAuthor->Text->Trim()->Replace("'", "");
    publisher = cbPublisher->Text->Trim()->Replace("'", "");
    pubDate = dateTimePicker1->Text;
    genre = cbGenre->Text;
    category = cbCategory->Text;
    
    // check for errors
    if (!IsTitleFieldValid()) return;
    if (!IsAuthTitleMatch()) return;
    
    // publishedDateChanged
    // categoryChanged
    // genreChanged

    if (authorID == -2) {
        WFDR result = MessageBox::Show("Author:" + author + " not in the library system. Do you want to add this Author to the library System?",
            "Author not recognised.", MessageBoxButtons::YesNo);
        if (result == WFDR::Yes) {
            addNameAuthPub("Authors", "authorNames", author);
            
            authorID = getValueFromQuery("authorID Authors WHERE authorNames='" + author + "'");
            warningAuthorNotValid->Visible = false;
        }
        else {
            warningAuthorNotValid->Visible = true;
            return;
        }
    }

    if (!IsAuthorValid()) return;

    if (publisherID == -2) {
        WFDR result = MessageBox::Show("Publisher: " + publisher + " not in the library system. Do you want to add this Publisher to the library System?",
            "Publisher not recognised.", MessageBoxButtons::YesNo);
        if (result == WFDR::Yes) {
            addNameAuthPub("Publishers", "publisherName", publisher);
            publisherID = getValueFromQuery("SELECT publisherID FROM Publishers WHERE publisherName = '" + publisher + "'");
            warningPublisherValid->Visible = false;
        }
        else {
            warningPublisherValid->Visible = true;
            return;
        }
    }

    if (!IsPublisherValid()) return;

    WFDR confirmResult = MessageBox::Show("Confirm to update Book:\n" +
        "Title: " + title + "\nAuthor: " + author /*+ "\tAuthor ID: " + authorID.ToString()*/ + "\nPublisher: " + publisher
        /*+ "\tPublisher ID: " + publisherID.ToString()*/ + "\nDate: " + pubDate + "\nCategory: " + category
        + "\nGenre: " + genre + "\n\nClick Ok to update book", "Confirm to update book", MessageBoxButtons::OKCancel
    );

    if (!bookAdded && (confirmResult == WFDR::OK)) {
        try {
            SqlConnection^ connection = StartConnection();

            SqlCommand^ nonQueryCommand = gcnew SqlCommand();
            nonQueryCommand->Connection = connection;

            nonQueryCommand->CommandText =
                "UPDATE Books SET [title] = @Title, [authorID] = @AuthorID, [publisherID] = @PublishherID, [genreID] = @GenreID, [categoryID] = @CategoryID;"
                "UPDATE Authors SET [authorNames] = @AuthorName;"
                "UPDATE Publishers SET [publisherName] = @PublisherName;";

            nonQueryCommand->Parameters->AddWithValue("@Title", title);
            nonQueryCommand->Parameters->AddWithValue("@AuthorID", authorID);
            nonQueryCommand->Parameters->AddWithValue("@PublisherID", publisherID);
            nonQueryCommand->Parameters->AddWithValue("@GenreID", genreID);

            nonQueryCommand->Parameters->AddWithValue("@AuthorName", author);

            nonQueryCommand->Parameters->AddWithValue("@PublisherName", publisher);

            nonQueryCommand->ExecuteNonQuery();
            MessageBox::Show("Book Successfully Updated!");
            connection->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message, "Update Book Dialog");
        }
    }
    return;
}

inline System::Void LibraryManagementSystem::UpdateBook::UpdateBook_Load(System::Object^ sender, System::EventArgs^ e) {
    re_populateComboBox(cbAuthor, L"authorNames", L"Authors");
    re_populateComboBox(cbPublisher, L"publisherName", L"Publishers");
    re_populateComboBox(cbCategory, L"categoryName", L"BookCategories");
    re_populateComboBox(cbGenre, L"genre_name", L"BookGenres WHERE categoryID=1");
    

    tbTitle->Text = book->bookTitle;
    cbAuthor->SelectedItem = book->authorNames;
    cbPublisher->SelectedItem = book->publisherNames;
    dateTimePicker1->Value = book->publishedDate;
    cbCategory->SelectedItem = book->categoryName;
    cbGenre->SelectedItem = book->genreName;
}

inline int LibraryManagementSystem::UpdateBook::getIDfromCombobox(ComboBox^ cbx, Label^ lblW, String^ table, String^ field) {
    String^ CBname = cbx->Text->Trim();

    int value = cbx->FindStringExact(CBname);
    bool NameInCB = cbx->Items->Contains(CBname);
    bool NameIsNull = String::IsNullOrEmpty(CBname);

    if (NameIsNull)
    {
        lblW->Visible = true;
        return -5; // do nothing
    }
    else if (NameInCB) {

        value = cbx->FindStringExact(CBname) + 1; // to match database ID's
        return value;
    }
    else return -2;
}

inline System::Void LibraryManagementSystem::UpdateBook::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}

inline System::Void LibraryManagementSystem::UpdateBook::SomethingHappened(System::Object^ sender, System::EventArgs^ e) {
    bookCopy->bookTitle = tbTitle->Text->Trim()->Replace("'", "");
    bookCopy->authorNames = cbAuthor->Text->Trim()->Replace("'", "");
    bookCopy->publisherNames = cbPublisher->Text->Trim()->Replace("'", "");
    bookCopy->publishedDate = dateTimePicker1->Value;
    bookCopy->genreName = cbGenre->Text;
    bookCopy->categoryName = cbCategory->Text;

    //authorID = getIDfromCombobox(cbAuthor, warningAuthorEmpty, "Authors", "authorNames");
    //publisherID = getIDfromCombobox(cbPublisher, warningPublisherEmpty, "Publishers", "publisherName");

    //categoryID = cbCategory->SelectedIndex + 1;
    //genreID = cbGenre->SelectedIndex + 1;


    if (bookCopy->publishedDate.ToShortDateString() == book->publishedDate.ToShortDateString()) {
        publishedDateChanged = false;
    }
    else {
        publishedDateChanged = true;
    }
    
    // Book Title
    
    IsTitleFieldValid();


    //authorID = cbAuthor->SelectedIndex + 1;

    if (author == "") {
        warningAuthorEmpty->Visible = true;
    }
    else {
        warningAuthorEmpty->Visible = false;
    }
    IsAuthorValid();

    //
    // Publisher Names
    //
    if (cbPublisher->Text->Trim()->Replace("'", "") == "") {
        warningPublisherEmpty->Visible = true;
    }
    else {
        warningPublisherEmpty->Visible = false;
    }
    IsPublisherValid();
    //
    // Category and Genre
    //  
    if (categoryID != 16)
        re_populateComboBox(cbGenre, L"genre_name", L"BookGenres  WHERE categoryID=" + categoryID.ToString());
    else
        re_populateComboBox(cbGenre, L"genre_name", L"BookGenres");
    //cbGenre->SelectedIndex = 0;
}

inline bool LibraryManagementSystem::UpdateBook::IsTitleFieldValid() {

    bookCopy->bookTitle = tbTitle->Text->Trim()->Replace("'", "");

    bool IsTitleEmpty = String::IsNullOrEmpty(bookCopy->bookTitle);

    // Detect for changes
    if (book->bookTitle == bookCopy->bookTitle) {
        btnTitle->BackColor = Color::Green;
        titleChanged = false;
    }
    else {
        btnTitle->BackColor = Color::Red;
        titleChanged = true;
    }
    // Check for empty text input
    if (IsTitleEmpty) {
        warningTitleEmpty->Visible = true;
        return false;
    }
    else {
        warningTitleEmpty->Visible = false;
        return true; // 1
    }
}

inline bool LibraryManagementSystem::UpdateBook::IsAuthorValid() {
    String^ authorText = cbAuthor->Text->Trim()->Replace("'", "");
    IsAuthorInDB = cbAuthor->Items->Contains(authorText);

    bool IsAuthorNull = String::IsNullOrEmpty(authorText); // true if author in combobox is null/empty.

    // Detect for changes...
    if (book->authorNames == authorText) {
        btnAut->BackColor = Color::Green;
        authorChanged = false;
    }
    else {
        btnAut->BackColor = Color::Red;
        authorChanged = true;
    }

    if (IsAuthorNull) {
        warningAuthorEmpty->Visible = true;
        return false;
    }
    else if (IsAuthorInDB) {
        warningAuthorEmpty->Visible = false;
        warningAuthorNotValid->Visible = false;
        AddAuthorToDB = false;
        return true; // 2
    }
    else { // author not in database but not null also
        warningAuthorEmpty->Visible = false;
        warningAuthorNotValid->Visible = true;
        AddAuthorToDB = true;
        return false;
    }
}

inline bool LibraryManagementSystem::UpdateBook::IsPublisherValid() {
    String^ publisherText = cbPublisher->Text->Trim()->Replace("'", "");
    IsPublisherInDB = cbPublisher->Items->Contains(publisherText);
    bool IsPublisherNull = String::IsNullOrEmpty(publisherText);

    // check for changes
    if (publisherText == book->publisherNames) {
        btnPub->BackColor = Color::Green;
        publisherChanged = false;
    }
    else {
        btnPub->BackColor = Color::Red;
        publisherChanged = true;
    }

    if (IsPublisherNull) {
        warningAuthorEmpty->Visible = true;
        return false;
    }
    else if (IsPublisherInDB) {
        warningPublisherEmpty->Visible = false;
        warningPublisherValid->Visible = false;
        AddPublisherToDB = false;
        return true; // 2
    }
    else { // author not in database but not null also
        warningPublisherEmpty->Visible = false;
        warningPublisherValid->Visible = true;
        AddPublisherToDB = true;
        return false;
    }
}


