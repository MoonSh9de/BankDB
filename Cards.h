#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Cards
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

	static  String^ account_id;

	static property  String^ accountID {
		String^ get()
		{
			return account_id;
		}
		void set(String^ value) {
			account_id = value;
		}
	}

	static String^ card_number;

	static property String^ cardNumber {
		String^ get()
		{
			return card_number;
		}
		void set(String^ value) {
			card_number = value;
		}
	}

	static String^ expiration_date;

	static property String^ expirationDate {
		String^ get()
		{
			return expiration_date;
		}
		void set(String^ value) {
			expiration_date = value;
		}
	}

	static String^ cvv;

	static property String^ Cvv {
		String^ get()
		{
			return cvv;
		}
		void set(String^ value) {
			cvv = value;
		}
	}
};

