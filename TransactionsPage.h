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
	/// Сводка для TransactionsPage
	/// </summary>
	public ref class TransactionsPage : public System::Windows::Forms::Form
	{
	public:
		TransactionsPage(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &TransactionsPage::TransactionsPage_Load);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TransactionsPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ Просмотерть;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ transactions_list;

	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ amount;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ transaction_type;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ account_id;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->transactions_list = (gcnew System::Windows::Forms::ComboBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->transaction_type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->account_id = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Gray;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_back->ForeColor = System::Drawing::Color::White;
			this->btn_back->Location = System::Drawing::Point(891, 358);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(120, 40);
			this->btn_back->TabIndex = 73;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &TransactionsPage::btn_back_Click);
			// 
			// Просмотерть
			// 
			this->Просмотерть->AutoSize = true;
			this->Просмотерть->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Просмотерть->Location = System::Drawing::Point(531, 126);
			this->Просмотерть->Name = L"Просмотерть";
			this->Просмотерть->Size = System::Drawing::Size(256, 16);
			this->Просмотерть->TabIndex = 72;
			this->Просмотерть->Text = L"Просмотреть весь список транзакций";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(42, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 16);
			this->label7->TabIndex = 71;
			this->label7->Text = L"Создание новой транзакции";
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete->Location = System::Drawing::Point(330, 188);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(160, 29);
			this->btn_delete->TabIndex = 67;
			this->btn_delete->Text = L"Удалить";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &TransactionsPage::btn_delete_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(809, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 29);
			this->button1->TabIndex = 66;
			this->button1->Text = L"Обновить список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TransactionsPage::button1_Click);
			// 
			// transactions_list
			// 
			this->transactions_list->DropDownHeight = 800;
			this->transactions_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->transactions_list->FormattingEnabled = true;
			this->transactions_list->IntegralHeight = false;
			this->transactions_list->Location = System::Drawing::Point(330, 145);
			this->transactions_list->Name = L"transactions_list";
			this->transactions_list->Size = System::Drawing::Size(639, 28);
			this->transactions_list->TabIndex = 65;
			this->transactions_list->SelectedIndexChanged += gcnew System::EventHandler(this, &TransactionsPage::transactions_list_SelectedIndexChanged);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::Color::White;
			this->btn_add->Location = System::Drawing::Point(57, 300);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(169, 28);
			this->btn_add->TabIndex = 64;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &TransactionsPage::btn_add_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Сумма";
			// 
			// amount
			// 
			this->amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->amount->Location = System::Drawing::Point(42, 261);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(214, 27);
			this->amount->TabIndex = 62;
			this->amount->TextChanged += gcnew System::EventHandler(this, &TransactionsPage::amount_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 16);
			this->label3->TabIndex = 61;
			this->label3->Text = L"Тип транзакции";
			// 
			// transaction_type
			// 
			this->transaction_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->transaction_type->Location = System::Drawing::Point(42, 200);
			this->transaction_type->Name = L"transaction_type";
			this->transaction_type->Size = System::Drawing::Size(214, 27);
			this->transaction_type->TabIndex = 60;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 59;
			this->label2->Text = L"ID счёта";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(18, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 25);
			this->label1->TabIndex = 58;
			this->label1->Text = L"Раздел \"Транзакции\"";
			// 
			// account_id
			// 
			this->account_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->account_id->Location = System::Drawing::Point(42, 145);
			this->account_id->Name = L"account_id";
			this->account_id->Size = System::Drawing::Size(214, 27);
			this->account_id->TabIndex = 57;
			// 
			// TransactionsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 410);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->Просмотерть);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->transactions_list);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->amount);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->transaction_type);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->account_id);
			this->Name = L"TransactionsPage";
			this->Text = L"TransactionsPage";
			this->Load += gcnew System::EventHandler(this, &TransactionsPage::TransactionsPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (account_id->Text == "" || transaction_type->Text == "" || amount->Text == "") {
			MessageBox::Show("Заполните все поля с информацией для создания новой транзакции!");

		}
		else {
			Functions F;
			Transactions^ tr = gcnew Transactions();
			bool isValidBalance = true;
			double balanceValue;
			tr->accountID = account_id->Text;
			tr->transaction_type = transaction_type->Text;
			if (tr->transaction_type != "Зачисление" && tr->transaction_type != "Вывод") {
				MessageBox::Show("Тип транзакции должен быть 'Зачисление' или 'Вывод' !");
				return; // Exit the function if the type is invalid
			}
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
				F.InsertTransactions(tr);
				account_id->Text = "";
				transaction_type->Text = "";
				amount->Text = "";

			}
		}
	}
	
private: System::Void transactions_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	transactions_list->DataSource = F.SelectTransactions();
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Transactions^ tr = gcnew Transactions();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(transactions_list->SelectedItem);
	//Заполняем строковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{'.'}, System::StringSplitOptions::RemoveEmptyEntries);
	tr->ID = Convert::ToInt32(parts[0]);
	F.DeleteTransaction(tr);
	MessageBox::Show("Транзакция удалена из базы данных!");
}
private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void TransactionsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	transactions_list->DataSource = F.SelectTransactions();
}
private: System::Void amount_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

