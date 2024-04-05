#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

#ifndef WFDR
#define WFDR System::Windows::Forms::DialogResult
#endif // !WFDR

#ifndef _CONNECTION_H_
#define _CONNECTION_H_
void updateDataGridView(String^ queryCommand, DataGridView^ dgv, String^ msg = "-");
SqlConnection^ StartConnection();
void CloseConnection(SqlConnection^ connection);
#endif // !_CONNECTION_H_
