#include "database.h"

void updateDataGridView(String^ queryCommand, DataGridView^ dgv, String^ msg) {
	try {	
		SqlConnection^ connection = StartConnection();
		SqlCommand^ command = gcnew SqlCommand(queryCommand, connection);
		SqlDataAdapter^ sda = gcnew SqlDataAdapter();
		sda->SelectCommand = command;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dgv->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		WFDR res = MessageBox::Show(ex->Message + "\nDo you want to copy message?", "Error updating data grid view... at: " + msg, MessageBoxButtons::YesNo, MessageBoxIcon::Error);
		if (res == WFDR::Yes) Clipboard::SetText(ex->Message); 
	}
}

SqlConnection^ StartConnection() {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=Library_Management_System;Integrated Security=True;Connect Timeout=30;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();
	return connection;
}

void CloseConnection(SqlConnection^ connection) {
	try {
		connection->Close();
	}
	catch (Exception^ ex) {
		System::Windows::Forms::MessageBox::Show("Error closing connection, check your internet connection or connection might be closed.\n" + ex->Message);
	}
}
