#pragma once
#include "Clients.h"
#include "functions.h"
namespace KursSDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserPage
	/// </summary>
	public ref class UserPage : public System::Windows::Forms::Form
	{
	private:
		Clients^ client;
	public:
		UserPage(Clients^ client)
		{
			this->client = client;
			InitializeComponent();
			this->client->clientID = client->clientID;
			this->client->firstName = client->firstName;
			this->client->lastName = client->lastName;
			this->Load += gcnew System::EventHandler(this, &UserPage::UserPage_Load);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ full_name;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ user_accounts;
	private: System::Windows::Forms::ComboBox^ user_transactions;


	private: System::Windows::Forms::ComboBox^ user_cards;







	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_deposit;
	private: System::Windows::Forms::Button^ btn_withdrawal;
	private: System::Windows::Forms::TextBox^ amount;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;










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
			this->full_name = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->user_accounts = (gcnew System::Windows::Forms::ComboBox());
			this->user_transactions = (gcnew System::Windows::Forms::ComboBox());
			this->user_cards = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_deposit = (gcnew System::Windows::Forms::Button());
			this->btn_withdrawal = (gcnew System::Windows::Forms::Button());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// full_name
			// 
			this->full_name->AutoSize = true;
			this->full_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->full_name->ForeColor = System::Drawing::Color::Green;
			this->full_name->Location = System::Drawing::Point(219, 29);
			this->full_name->Name = L"full_name";
			this->full_name->Size = System::Drawing::Size(54, 25);
			this->full_name->TabIndex = 0;
			this->full_name->Text = L"Имя";
			this->full_name->Click += gcnew System::EventHandler(this, &UserPage::full_name_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(81, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ваши счета:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(81, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ваши карты:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(81, 244);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Операции:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(34, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Рады Вас видеть,";
			// 
			// user_accounts
			// 
			this->user_accounts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_accounts->FormattingEnabled = true;
			this->user_accounts->Location = System::Drawing::Point(84, 120);
			this->user_accounts->Name = L"user_accounts";
			this->user_accounts->Size = System::Drawing::Size(756, 28);
			this->user_accounts->TabIndex = 8;
			this->user_accounts->SelectedIndexChanged += gcnew System::EventHandler(this, &UserPage::comboBox1_SelectedIndexChanged);
			// 
			// user_transactions
			// 
			this->user_transactions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->user_transactions->FormattingEnabled = true;
			this->user_transactions->Location = System::Drawing::Point(84, 263);
			this->user_transactions->Name = L"user_transactions";
			this->user_transactions->Size = System::Drawing::Size(755, 28);
			this->user_transactions->TabIndex = 9;
			// 
			// user_cards
			// 
			this->user_cards->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_cards->FormattingEnabled = true;
			this->user_cards->Location = System::Drawing::Point(84, 191);
			this->user_cards->Name = L"user_cards";
			this->user_cards->Size = System::Drawing::Size(755, 28);
			this->user_cards->TabIndex = 10;
			this->user_cards->SelectedIndexChanged += gcnew System::EventHandler(this, &UserPage::user_cards_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(249, 314);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(448, 31);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Обновить страницу";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserPage::button3_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::Color::White;
			this->btn_exit->Location = System::Drawing::Point(680, 519);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(226, 38);
			this->btn_exit->TabIndex = 20;
			this->btn_exit->Text = L"Выход из программы";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &UserPage::btn_exit_Click);
			// 
			// btn_deposit
			// 
			this->btn_deposit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_deposit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_deposit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_deposit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_deposit->Location = System::Drawing::Point(206, 497);
			this->btn_deposit->Name = L"btn_deposit";
			this->btn_deposit->Size = System::Drawing::Size(112, 31);
			this->btn_deposit->TabIndex = 11;
			this->btn_deposit->Text = L"Зачисление";
			this->btn_deposit->UseVisualStyleBackColor = false;
			this->btn_deposit->Click += gcnew System::EventHandler(this, &UserPage::btn_deposit_Click);
			// 
			// btn_withdrawal
			// 
			this->btn_withdrawal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_withdrawal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_withdrawal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_withdrawal->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_withdrawal->Location = System::Drawing::Point(45, 497);
			this->btn_withdrawal->Name = L"btn_withdrawal";
			this->btn_withdrawal->Size = System::Drawing::Size(112, 31);
			this->btn_withdrawal->TabIndex = 12;
			this->btn_withdrawal->Text = L"Вывод";
			this->btn_withdrawal->UseVisualStyleBackColor = false;
			this->btn_withdrawal->Click += gcnew System::EventHandler(this, &UserPage::button2_Click);
			// 
			// amount
			// 
			this->amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->amount->Location = System::Drawing::Point(45, 463);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(273, 27);
			this->amount->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(42, 444);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Сумма";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(122, 404);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 20);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Транзакция";
			// 
			// UserPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(918, 569);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->amount);
			this->Controls->Add(this->btn_withdrawal);
			this->Controls->Add(this->btn_deposit);
			this->Controls->Add(this->user_cards);
			this->Controls->Add(this->user_transactions);
			this->Controls->Add(this->user_accounts);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->full_name);
			this->Name = L"UserPage";
			this->Text = L"UserPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	user_accounts->DataSource = F.userAccounts(this->client->clientID);
	user_cards->DataSource = F.userCards(this->client->clientID);
	user_transactions->DataSource = F.userTransactions(this->client->clientID);

}
private: System::Void UserPage_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = this->client->firstName + " " + this->client->lastName;
	this->full_name->Text = fullName;
	Functions F;
	user_accounts->DataSource = F.userAccounts(this->client->clientID);
	user_cards->DataSource = F.userCards(this->client->clientID);
	user_transactions->DataSource = F.userTransactions(this->client->clientID);
}
private: System::Void full_name_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Transactions^ tr = gcnew Transactions();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(user_accounts->SelectedItem);
	//Заполняем сктроковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{' '}, System::StringSplitOptions::RemoveEmptyEntries);
	bool isValidBalance = true;
	double balanceValue;
	tr->accountID = parts[0];
	tr->transactionType = "Вывод";
	tr->Amount = amount->Text;
	try
	{
		balanceValue = Convert::ToDouble(amount->Text);
	}
	catch (FormatException^)
	{
		isValidBalance = false;
		MessageBox::Show("Пожалуйста, введите только цифры для суммы!");
	}
	if (balanceValue < 1)
	{
		isValidBalance = false;
		MessageBox::Show("Баланс должен быть больше нуля!");
	}
	if (isValidBalance)
	{
		tr->Amount = Convert::ToString(balanceValue);
		tr->Amount = amount->Text;
		F.userTransaction(tr);
		amount->Text = "";

	}
}
private: System::Void btn_deposit_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Transactions^ tr = gcnew Transactions();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(user_accounts->SelectedItem);
	//Заполняем сктроковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{' '}, System::StringSplitOptions::RemoveEmptyEntries);
	bool isValidBalance = true;
	double balanceValue;
	tr->accountID = parts[0];
	tr->transactionType = "Зачисление";
	tr->Amount = amount->Text;
	try
	{
		balanceValue = Convert::ToDouble(amount->Text);
	}
	catch (FormatException^)
	{
		isValidBalance = false;
		MessageBox::Show("Пожалуйста, введите только цифры для суммы!");
	}
	if (balanceValue < 1)
	{
		isValidBalance = false;
		MessageBox::Show("Баланс должен быть больше нуля!");
	}
	if (isValidBalance)
	{
		tr->Amount = Convert::ToString(balanceValue);
		tr->Amount = amount->Text;
		F.userTransaction(tr);
		amount->Text = "";

	}
}
private: System::Void user_cards_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
