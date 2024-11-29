#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Transactions
{
public:

	static int id;

	static property int ID {
		int get()
		{
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	static String^ account_id;

	static property String^ accountID {
		String^ get()
		{
			return account_id;
		}
		void set(String^ value) {
			account_id = value;
		}
	}

	static String^ transaction_type;

	static property String^ transactionType {
		String^ get()
		{
			return transaction_type;
		}
		void set(String^ value) {
			transaction_type = value;
		}
	}

	static String^ amount;

	static property String^ Amount {
		String^ get()
		{
			return amount;
		}
		void set(String^ value) {
			amount = value;
		}

	}

	static String^ created_at;

	static property String^ createdAt {
		String^ get()
		{
			return created_at;
		}
		void set(String^ value) {
			created_at = value;
		}
	}

};

