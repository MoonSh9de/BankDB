#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Accounts
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

	static String^ client_id;

	static property String^ clientID {
		String^ get()
		{
			return client_id;
		}
		void set(String^ value) {
			client_id = value;
		}
	}

	static String^ account_type;

	static property String^ accountType {
		String^ get()
		{
			return account_type;
		}
		void set(String^ value) {
			account_type = value;
		}
	}

	static String^ balance;

	static property String^ Balance {
		String^ get()
		{
			return balance;
		}
		void set(String^ value) {
			balance = value;
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

