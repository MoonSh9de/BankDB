#pragma once

#include "Functions.h"

namespace KursSDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для Bank
	/// </summary>

	public ref class ClientsPage : public System::Windows::Forms::Form
	{
	public:
		ClientsPage(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &ClientsPage::ClientsPage_Load);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ClientsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ first_name;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ last_name;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ birth_date;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ phone_number;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::ComboBox^ clients_list;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ client_update;
	private: System::Windows::Forms::Button^ btn_update;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ Просмотерть;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::TextBox^ textBox3;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->first_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->last_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->birth_date = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->phone_number = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->clients_list = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->client_update = (gcnew System::Windows::Forms::TextBox());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Просмотерть = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// first_name
			// 
			this->first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->first_name->Location = System::Drawing::Point(25, 145);
			this->first_name->Name = L"first_name";
			this->first_name->Size = System::Drawing::Size(214, 27);
			this->first_name->TabIndex = 0;
			this->first_name->TextChanged += gcnew System::EventHandler(this, &ClientsPage::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Раздел \"Клиенты\"";
			this->label1->Click += gcnew System::EventHandler(this, &ClientsPage::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Фамилия";
			this->label3->Click += gcnew System::EventHandler(this, &ClientsPage::label3_Click);
			// 
			// last_name
			// 
			this->last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->last_name->Location = System::Drawing::Point(25, 200);
			this->last_name->Name = L"last_name";
			this->last_name->Size = System::Drawing::Size(214, 27);
			this->last_name->TabIndex = 3;
			this->last_name->TextChanged += gcnew System::EventHandler(this, &ClientsPage::textBox1_TextChanged_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Дата рождения";
			// 
			// birth_date
			// 
			this->birth_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->birth_date->Location = System::Drawing::Point(25, 261);
			this->birth_date->Name = L"birth_date";
			this->birth_date->Size = System::Drawing::Size(214, 27);
			this->birth_date->TabIndex = 5;
			this->birth_date->TextChanged += gcnew System::EventHandler(this, &ClientsPage::birth_date_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Номер телефона";
			// 
			// phone_number
			// 
			this->phone_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->phone_number->Location = System::Drawing::Point(50, 317);
			this->phone_number->Name = L"phone_number";
			this->phone_number->Size = System::Drawing::Size(189, 27);
			this->phone_number->TabIndex = 7;
			this->phone_number->TextChanged += gcnew System::EventHandler(this, &ClientsPage::textBox1_TextChanged_2);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::Color::White;
			this->btn_add->Location = System::Drawing::Point(50, 351);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(169, 28);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &ClientsPage::btn_add_Click);
			// 
			// clients_list
			// 
			this->clients_list->DropDownHeight = 800;
			this->clients_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clients_list->FormattingEnabled = true;
			this->clients_list->IntegralHeight = false;
			this->clients_list->Location = System::Drawing::Point(315, 138);
			this->clients_list->Name = L"clients_list";
			this->clients_list->Size = System::Drawing::Size(575, 28);
			this->clients_list->TabIndex = 10;
			this->clients_list->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientsPage::clients_list_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(730, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Обновить список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ClientsPage::button1_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete->Location = System::Drawing::Point(315, 181);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(160, 29);
			this->btn_delete->TabIndex = 12;
			this->btn_delete->Text = L"Удалить";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &ClientsPage::btn_delete_Click);
			// 
			// client_update
			// 
			this->client_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->client_update->Location = System::Drawing::Point(315, 261);
			this->client_update->Name = L"client_update";
			this->client_update->Size = System::Drawing::Size(575, 27);
			this->client_update->TabIndex = 13;
			this->client_update->TextChanged += gcnew System::EventHandler(this, &ClientsPage::client_update_TextChanged);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::CadetBlue;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_update->ForeColor = System::Drawing::Color::White;
			this->btn_update->Location = System::Drawing::Point(532, 294);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(174, 40);
			this->btn_update->TabIndex = 14;
			this->btn_update->Text = L"Изменить данные";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &ClientsPage::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(529, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Форма изменения данных";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(25, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(194, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Добавление нового клиента";
			// 
			// Просмотерть
			// 
			this->Просмотерть->AutoSize = true;
			this->Просмотерть->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Просмотерть->Location = System::Drawing::Point(472, 119);
			this->Просмотерть->Name = L"Просмотерть";
			this->Просмотерть->Size = System::Drawing::Size(282, 16);
			this->Просмотерть->TabIndex = 17;
			this->Просмотерть->Text = L"Просмотреть весь список клиентов банка";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Gray;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_back->ForeColor = System::Drawing::Color::White;
			this->btn_back->Location = System::Drawing::Point(823, 370);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(120, 40);
			this->btn_back->TabIndex = 18;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ClientsPage::button2_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(25, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(24, 27);
			this->textBox3->TabIndex = 24;
			this->textBox3->Text = L"+7";
			// 
			// ClientsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 422);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->Просмотерть);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->client_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->clients_list);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->phone_number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->birth_date);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->last_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->first_name);
			this->Name = L"ClientsPage";
			this->Text = L"Clients";
			this->Load += gcnew System::EventHandler(this, &ClientsPage::Bank_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bank_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	if (first_name->Text == "" || first_name->Text == "" || birth_date->Text == "" || phone_number->Text == "") {
		MessageBox::Show("Заполните все поля с информацией нового клиента!");

	}
	else {
		Clients^ n = gcnew Clients();

		n->firstName = first_name->Text;
		n->lastName = last_name->Text;
		try {
			array<String^>^ dateParts = birth_date->Text->Split('.');
			if (dateParts->Length != 3) {
				throw gcnew FormatException("Неверный формат даты. Используйте формат 'дд.ММ.гггг'.");
			}
			int day = Convert::ToInt32(dateParts[0]);
			int month = Convert::ToInt32(dateParts[1]);
			int year = Convert::ToInt32(dateParts[2]);
			DateTime birthDate(year, month, day);
			n->birthDate = birthDate.ToString("yyyy-MM-dd");
		}
		catch (FormatException^ ex) {
			MessageBox::Show(ex->Message);
			return;
		}
		String^ phone_string = String::Concat("+7", phone_number->Text);
		n->phoneNumber = phone_string;

		F.InsertClients(n);
		first_name->Text = "";
		last_name->Text = "";
		birth_date->Text = "";
		phone_number->Text = "";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	clients_list->DataSource = F.SelectClients();
}
private: System::Void clients_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Clients^ n = gcnew Clients();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(clients_list->SelectedItem);
	//Заполняем сктроковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{'.'}, System::StringSplitOptions::RemoveEmptyEntries);
	n->clientID = Convert::ToInt32(parts[0]);
	n->firstName = parts[0];
	F.DeleteCLient(n);
	MessageBox::Show("Клиент удалён из базы данных!");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	//Проверка на пустое поле формы
	if (client_update->Text == "") {
		MessageBox::Show("Поле для изменения клиента не может быть пустым!");

	}
	//Обновление данных о клиенте и запись в таблицу
	else {
		//Старый элемент выбирается из выпадаюего списка
		Clients^ nOld = gcnew Clients();
		String^ stringFromCmb;
		stringFromCmb = Convert::ToString(clients_list->SelectedItem);
		array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{'.'}, System::StringSplitOptions::RemoveEmptyEntries);
		nOld->clientID = Convert::ToInt32(parts[0]);
		nOld->firstName = parts[0];
		//Новые данные берём из текстбокса, которые написаны через запятую
		Clients^ nNew = gcnew Clients();
		array<String^>^ newData = client_update->Text->Split(',');

		if (newData->Length != 4) {
			MessageBox::Show("Неверный формат данных. Введите данные через запятую в следующем порядке: имя, фамилия, дата рождения, номер телефона (без +7)"); 
			return;
		}

		nNew->firstName = newData[0]->Trim();
		nNew->lastName = newData[1]->Trim();
		// Преобразование даты из формата "дд.ММ.гггг" в формат, поддерживаемый SQL Server
		try {
			array<String^>^ dateParts = newData[2]->Trim()->Split('.');
			if (dateParts->Length != 3) {
				throw gcnew FormatException("Неверный формат даты. Используйте формат 'дд.ММ.гггг'.");
			}
			int day = Convert::ToInt32(dateParts[0]);
			int month = Convert::ToInt32(dateParts[1]);
			int year = Convert::ToInt32(dateParts[2]);
			DateTime birthDate(year, month, day);
			nNew->birthDate = birthDate.ToString("yyyy-MM-dd");
		}
		catch (FormatException^ ex) {
			MessageBox::Show(ex->Message);
			return;
		}
		nNew->phoneNumber = "+7" + newData[3]->Trim();

		F.UpdateClients(nOld, nNew);

		MessageBox::Show("Данные клиента успешно обновлены!");
		client_update->Text = "";
	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void birth_date_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ClientsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	clients_list->DataSource = F.SelectClients();
}
private: System::Void client_update_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
