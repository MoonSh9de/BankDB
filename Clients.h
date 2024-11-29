#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Clients
{
public:

	static int client_id;

	static property int clientID {
		int get()
		{
			return client_id;
		}
		void set(int value) {
			client_id = value;
		}
	}

	static String^ first_name;

	static property String^ firstName {
		String^ get()
		{
			return first_name;
		}
		void set(String^ value) {
			first_name = value;
		}
	}

	static String^ last_name;

	static property String^ lastName {
		String^ get()
		{
			return last_name;
		}
		void set(String^ value) {
			last_name = value;
		}
	}

	static String^ birth_date;

	static property String^ birthDate {
		String^ get()
		{
			return birth_date;
		}
		void set(String^ value) {
			birth_date = value;
		}
	}

	static String^ phone_number;

	static property String^ phoneNumber {
		String^ get()
		{
			return phone_number;
		}
		void set(String^ value) {
			phone_number = value;
		}
	}
};