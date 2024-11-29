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
	/// Сводка для AccountsPage
	/// </summary>
	public ref class AccountsPage : public System::Windows::Forms::Form
	{
	public:
		AccountsPage(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &AccountsPage::AccountsPage_Load);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AccountsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_back;
	protected:
	private: System::Windows::Forms::Label^ Просмотерть;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ account_update;

	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ btn_add;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ balance;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ account_type;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ client_id;
	private: System::Windows::Forms::ComboBox^ accounts;



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
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->Просмотерть = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->account_update = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->balance = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->account_type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->client_id = (gcnew System::Windows::Forms::TextBox());
			this->accounts = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Gray;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_back->ForeColor = System::Drawing::Color::White;
			this->btn_back->Location = System::Drawing::Point(892, 358);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(120, 40);
			this->btn_back->TabIndex = 37;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &AccountsPage::btn_back_Click);
			// 
			// Просмотерть
			// 
			this->Просмотерть->AutoSize = true;
			this->Просмотерть->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Просмотерть->Location = System::Drawing::Point(525, 115);
			this->Просмотерть->Name = L"Просмотерть";
			this->Просмотерть->Size = System::Drawing::Size(224, 16);
			this->Просмотерть->TabIndex = 36;
			this->Просмотерть->Text = L"Просмотреть весь список счетов";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(23, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 16);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Добавление нового счёта";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(547, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 16);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Форма изменения данных";
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::CadetBlue;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_update->ForeColor = System::Drawing::Color::White;
			this->btn_update->Location = System::Drawing::Point(549, 290);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(174, 40);
			this->btn_update->TabIndex = 33;
			this->btn_update->Text = L"Изменить данные";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &AccountsPage::btn_update_Click);
			// 
			// account_update
			// 
			this->account_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->account_update->Location = System::Drawing::Point(292, 257);
			this->account_update->Name = L"account_update";
			this->account_update->Size = System::Drawing::Size(685, 27);
			this->account_update->TabIndex = 32;
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete->Location = System::Drawing::Point(292, 177);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(160, 29);
			this->btn_delete->TabIndex = 31;
			this->btn_delete->Text = L"Удалить";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &AccountsPage::btn_delete_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(817, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 29);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Обновить список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AccountsPage::button1_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::Color::White;
			this->btn_add->Location = System::Drawing::Point(45, 302);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(169, 28);
			this->btn_add->TabIndex = 28;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &AccountsPage::btn_add_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Баланс счёта";
			// 
			// balance
			// 
			this->balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->balance->Location = System::Drawing::Point(23, 257);
			this->balance->Name = L"balance";
			this->balance->Size = System::Drawing::Size(214, 27);
			this->balance->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Тип счёта";
			// 
			// account_type
			// 
			this->account_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->account_type->Location = System::Drawing::Point(23, 196);
			this->account_type->Name = L"account_type";
			this->account_type->Size = System::Drawing::Size(214, 27);
			this->account_type->TabIndex = 22;
			this->account_type->TextChanged += gcnew System::EventHandler(this, &AccountsPage::account_type_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"ID клиента";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(-1, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Раздел \"Счета\"";
			this->label1->Click += gcnew System::EventHandler(this, &AccountsPage::label1_Click);
			// 
			// client_id
			// 
			this->client_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->client_id->Location = System::Drawing::Point(23, 141);
			this->client_id->Name = L"client_id";
			this->client_id->Size = System::Drawing::Size(214, 27);
			this->client_id->TabIndex = 19;
			this->client_id->TextChanged += gcnew System::EventHandler(this, &AccountsPage::client_id_TextChanged);
			// 
			// accounts
			// 
			this->accounts->DropDownHeight = 800;
			this->accounts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accounts->FormattingEnabled = true;
			this->accounts->IntegralHeight = false;
			this->accounts->Location = System::Drawing::Point(292, 141);
			this->accounts->Name = L"accounts";
			this->accounts->Size = System::Drawing::Size(685, 28);
			this->accounts->TabIndex = 38;
			this->accounts->SelectedIndexChanged += gcnew System::EventHandler(this, &AccountsPage::accounts_SelectedIndexChanged);
			// 
			// AccountsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 410);
			this->Controls->Add(this->accounts);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->Просмотерть);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->account_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->balance);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->account_type);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->client_id);
			this->Name = L"AccountsPage";
			this->Text = L"AccountsPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void account_type_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void client_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	if (client_id->Text == "" || account_type->Text == "") {
		MessageBox::Show("Заполните все поля с информацией нового счёта!");

	}
	else {
		Functions F;
		Accounts^ acc = gcnew Accounts();

		acc->clientID = client_id->Text;
		acc->accountType = account_type->Text;
		bool isValidBalance = true;
		double balanceValue;
		try
		{
			balanceValue = Convert::ToDouble(balance->Text);
		}
		catch (FormatException^)
		{
			isValidBalance = false;
			MessageBox::Show("Пожалуйста, введите только цифры для баланса!");
		}
		if (balanceValue < 1)
		{
			isValidBalance = false;
			MessageBox::Show("Баланс должен быть больше нуля!");
		}
		if (isValidBalance)
		{
			acc->Balance = Convert::ToString(balanceValue);
			acc->Balance = balance->Text;
			F.InsertAccounts(acc);
			client_id->Text = "";
			account_type->Text = "";
			balance->Text = "";
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	accounts->DataSource = F.SelectAccounts();
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Accounts^ acc = gcnew Accounts();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(accounts->SelectedItem);
	//Заполняем строковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{' '}, System::StringSplitOptions::RemoveEmptyEntries);
	acc->ID = Convert::ToInt32(parts[0]);
	F.DeleteAccount(acc);
	MessageBox::Show("Счёт удалён из базы данных!");
}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	//Проверка на пустое поле формы
	if (account_update->Text == "") {
		MessageBox::Show("Поле для изменения счёта не может быть пустым!");
	}
	else {
		//Старый элемент выбирается из выпадаюего списка
		Accounts^ accOld = gcnew Accounts();
		Accounts^ accNew = gcnew Accounts();
		String^ stringFromCmb;
		stringFromCmb = Convert::ToString(accounts->SelectedItem);
		array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{' '}, System::StringSplitOptions::RemoveEmptyEntries);
		accOld->ID = Convert::ToInt32(parts[0]);

		//Новые данные берём из текстбокса, которые написаны через запятую
		array<String^>^ newData = account_update->Text->Split(',');

		if (newData->Length != 3) {
			MessageBox::Show("Неверный формат данных. Введите данные через запятую в следующем порядке: ID клиента, тип счёта, баланс счёта");
			return;
		}

		accNew->clientID = newData[0]->Trim();
		accNew->accountType = newData[1]->Trim();
		accNew->Balance = newData[2]->Trim();
		F.UpdateAccounts(accOld, accNew);
		MessageBox::Show("Данные счёта успешно обновлены!");
		account_update->Text = "";
	}
}
private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void accounts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AccountsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	accounts->DataSource = F.SelectAccounts();
}

};
}
