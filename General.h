#pragma once
#include "ClientsPage.h";
#include "AccountsPage.h";
#include "CardsPage.h";
#include "TransactionsPage.h";

namespace KursSDB {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для General
	/// </summary>
	public ref class General : public System::Windows::Forms::Form
	{
	public:
		General(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~General()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ choice_clients;
	private: System::Windows::Forms::Button^ choice_accounts;
	private: System::Windows::Forms::Button^ choice_cards;
	private: System::Windows::Forms::Button^ choice_transactions;
	protected:

	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_exit;



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
			this->choice_clients = (gcnew System::Windows::Forms::Button());
			this->choice_accounts = (gcnew System::Windows::Forms::Button());
			this->choice_cards = (gcnew System::Windows::Forms::Button());
			this->choice_transactions = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// choice_clients
			// 
			this->choice_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choice_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->choice_clients->ForeColor = System::Drawing::Color::Black;
			this->choice_clients->Location = System::Drawing::Point(33, 173);
			this->choice_clients->Name = L"choice_clients";
			this->choice_clients->Size = System::Drawing::Size(232, 30);
			this->choice_clients->TabIndex = 0;
			this->choice_clients->Text = L"Клиенты";
			this->choice_clients->UseVisualStyleBackColor = true;
			this->choice_clients->Click += gcnew System::EventHandler(this, &General::choice_clients_Click);
			// 
			// choice_accounts
			// 
			this->choice_accounts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choice_accounts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->choice_accounts->Location = System::Drawing::Point(33, 219);
			this->choice_accounts->Name = L"choice_accounts";
			this->choice_accounts->Size = System::Drawing::Size(232, 29);
			this->choice_accounts->TabIndex = 1;
			this->choice_accounts->Text = L"Счета";
			this->choice_accounts->UseVisualStyleBackColor = true;
			this->choice_accounts->Click += gcnew System::EventHandler(this, &General::choice_accounts_Click);
			// 
			// choice_cards
			// 
			this->choice_cards->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choice_cards->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->choice_cards->Location = System::Drawing::Point(33, 263);
			this->choice_cards->Name = L"choice_cards";
			this->choice_cards->Size = System::Drawing::Size(232, 28);
			this->choice_cards->TabIndex = 2;
			this->choice_cards->Text = L"Карты";
			this->choice_cards->UseVisualStyleBackColor = true;
			this->choice_cards->Click += gcnew System::EventHandler(this, &General::choice_cards_Click);
			// 
			// choice_transactions
			// 
			this->choice_transactions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->choice_transactions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->choice_transactions->Location = System::Drawing::Point(33, 306);
			this->choice_transactions->Name = L"choice_transactions";
			this->choice_transactions->Size = System::Drawing::Size(232, 29);
			this->choice_transactions->TabIndex = 3;
			this->choice_transactions->Text = L"Транзакции";
			this->choice_transactions->UseVisualStyleBackColor = true;
			this->choice_transactions->Click += gcnew System::EventHandler(this, &General::choice_transactions_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(575, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Администратор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(30, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Выберите раздел:";
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::Color::White;
			this->btn_exit->Location = System::Drawing::Point(544, 357);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(226, 38);
			this->btn_exit->TabIndex = 6;
			this->btn_exit->Text = L"Выход из программы";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &General::button1_Click);
			// 
			// General
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 425);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->choice_transactions);
			this->Controls->Add(this->choice_cards);
			this->Controls->Add(this->choice_accounts);
			this->Controls->Add(this->choice_clients);
			this->Name = L"General";
			this->Text = L"Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		 
#pragma endregion
	private: System::Void choice_clients_Click(System::Object^ sender, System::EventArgs^ e) {
		KursSDB::ClientsPage^ clientsPage = gcnew KursSDB::ClientsPage();
		clientsPage->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void choice_accounts_Click(System::Object^ sender, System::EventArgs^ e) {
	KursSDB::AccountsPage^ accountsPage = gcnew KursSDB::AccountsPage();
	accountsPage->Show();
}
private: System::Void choice_cards_Click(System::Object^ sender, System::EventArgs^ e) {
	KursSDB::CardsPage^ cardsPage = gcnew KursSDB::CardsPage();
	cardsPage->Show();
}
private: System::Void choice_transactions_Click(System::Object^ sender, System::EventArgs^ e) {
	KursSDB::TransactionsPage^ cardsPage = gcnew KursSDB::TransactionsPage();
	cardsPage->Show();
}
};
}
