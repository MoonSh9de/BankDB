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
	/// Сводка для CardsPage
	/// </summary>
	public ref class CardsPage : public System::Windows::Forms::Form
	{
	public:
		CardsPage(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &CardsPage::CardsPage_Load);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CardsPage()
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
	private: System::Windows::Forms::TextBox^ card_update;

	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cards_list;

	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ expiration_date;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ card_number;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ account_id;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ cvv;


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
			this->card_update = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cards_list = (gcnew System::Windows::Forms::ComboBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->expiration_date = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->card_number = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->account_id = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cvv = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Gray;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_back->ForeColor = System::Drawing::Color::White;
			this->btn_back->Location = System::Drawing::Point(821, 362);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(120, 40);
			this->btn_back->TabIndex = 54;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &CardsPage::btn_back_Click);
			// 
			// Просмотерть
			// 
			this->Просмотерть->AutoSize = true;
			this->Просмотерть->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Просмотерть->Location = System::Drawing::Point(513, 119);
			this->Просмотерть->Name = L"Просмотерть";
			this->Просмотерть->Size = System::Drawing::Size(208, 16);
			this->Просмотерть->TabIndex = 53;
			this->Просмотерть->Text = L"Просмотреть весь список карт";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(36, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 16);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Добавление новой карты";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(527, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 16);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Форма изменения данных";
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::CadetBlue;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_update->ForeColor = System::Drawing::Color::White;
			this->btn_update->Location = System::Drawing::Point(529, 294);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(174, 40);
			this->btn_update->TabIndex = 50;
			this->btn_update->Text = L"Изменить данные";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &CardsPage::btn_update_Click);
			// 
			// card_update
			// 
			this->card_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->card_update->Location = System::Drawing::Point(326, 261);
			this->card_update->Name = L"card_update";
			this->card_update->Size = System::Drawing::Size(571, 27);
			this->card_update->TabIndex = 49;
			this->card_update->TextChanged += gcnew System::EventHandler(this, &CardsPage::account_update_TextChanged);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete->Location = System::Drawing::Point(326, 181);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(160, 29);
			this->btn_delete->TabIndex = 48;
			this->btn_delete->Text = L"Удалить";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &CardsPage::btn_delete_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(737, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 29);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Обновить список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CardsPage::button1_Click);
			// 
			// cards_list
			// 
			this->cards_list->DropDownHeight = 800;
			this->cards_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cards_list->FormattingEnabled = true;
			this->cards_list->IntegralHeight = false;
			this->cards_list->Location = System::Drawing::Point(326, 138);
			this->cards_list->Name = L"cards_list";
			this->cards_list->Size = System::Drawing::Size(571, 28);
			this->cards_list->TabIndex = 46;
			this->cards_list->SelectedIndexChanged += gcnew System::EventHandler(this, &CardsPage::accounts_list_SelectedIndexChanged);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->ForeColor = System::Drawing::Color::White;
			this->btn_add->Location = System::Drawing::Point(55, 352);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(169, 28);
			this->btn_add->TabIndex = 45;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &CardsPage::btn_add_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 16);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Срок действия";
			// 
			// expiration_date
			// 
			this->expiration_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->expiration_date->Location = System::Drawing::Point(36, 261);
			this->expiration_date->Name = L"expiration_date";
			this->expiration_date->Size = System::Drawing::Size(214, 27);
			this->expiration_date->TabIndex = 43;
			this->expiration_date->TextChanged += gcnew System::EventHandler(this, &CardsPage::expiration_date_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Номер карты";
			// 
			// card_number
			// 
			this->card_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->card_number->Location = System::Drawing::Point(36, 200);
			this->card_number->Name = L"card_number";
			this->card_number->Size = System::Drawing::Size(214, 27);
			this->card_number->TabIndex = 41;
			this->card_number->TextChanged += gcnew System::EventHandler(this, &CardsPage::card_number_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 40;
			this->label2->Text = L"ID счёта";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 25);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Раздел \"Карты\"";
			// 
			// account_id
			// 
			this->account_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->account_id->Location = System::Drawing::Point(36, 145);
			this->account_id->Name = L"account_id";
			this->account_id->Size = System::Drawing::Size(214, 27);
			this->account_id->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 16);
			this->label5->TabIndex = 56;
			this->label5->Text = L"CVV-код";
			// 
			// cvv
			// 
			this->cvv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cvv->Location = System::Drawing::Point(36, 313);
			this->cvv->Name = L"cvv";
			this->cvv->Size = System::Drawing::Size(214, 27);
			this->cvv->TabIndex = 55;
			this->cvv->TextChanged += gcnew System::EventHandler(this, &CardsPage::cvv_TextChanged);
			// 
			// CardsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 412);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cvv);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->Просмотерть);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->card_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cards_list);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->expiration_date);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->card_number);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->account_id);
			this->Name = L"CardsPage";
			this->Text = L"CardsPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (account_id->Text == "" || card_number->Text == "" || expiration_date->Text == "" || cvv->Text == "") {
			MessageBox::Show("Заполните все поля с информацией для создания новой карты!");

		}
		else {
			Functions F;
			Cards^ c = gcnew Cards();

			c->accountID = account_id->Text;
			c->card_number = card_number->Text;
			try {
				array<String^>^ dateParts = expiration_date->Text->Split('.');
				if (dateParts->Length != 3) {
					throw gcnew FormatException("Неверный формат даты. Используйте формат 'дд.ММ.гггг'.");
				}
				int day = Convert::ToInt32(dateParts[0]);
				int month = Convert::ToInt32(dateParts[1]);
				int year = Convert::ToInt32(dateParts[2]);
				DateTime expiration_date(year, month, day);
				c->expirationDate = expiration_date.ToString("yyyy-MM-dd");
			}
			catch (FormatException^ ex) {
				MessageBox::Show(ex->Message);
				return;
			}
			c->Cvv = cvv->Text;
			F.InsertCards(c);
			account_id->Text = "";
			card_number->Text = "";
			expiration_date->Text = "";
			cvv->Text = "";
		}
	}
	
private: System::Void cvv_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	cards_list->DataSource = F.SelectCards();
}
private: System::Void accounts_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	Cards^ c = gcnew Cards();

	String^ stringFromCmb;
	//Значение присвоим из выпадающего списка
	stringFromCmb = Convert::ToString(cards_list->SelectedItem);
	//Заполняем сктроковый массив pats значениями из переменной stringFromCmb
	//Для извлечения необходим Split
	array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{'.'}, System::StringSplitOptions::RemoveEmptyEntries);
	c->ID = Convert::ToInt32(parts[0]);
	F.DeleteCard(c);
	MessageBox::Show("Карта удалена из базы данных!");
}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	//Проверка на пустое поле формы
	if (card_update->Text == "") {
		MessageBox::Show("Поле для изменения счёта не может быть пустым!");

	}
	//Обновление данных о клиенте и запись в таблицу
	else {
		//Старый элемент выбирается из выпадаюего списка
		Cards^ cOld = gcnew Cards();
		String^ stringFromCmb;
		stringFromCmb = Convert::ToString(cards_list->SelectedItem);
		array<String^, 1>^ parts = stringFromCmb->Split(gcnew array<Char, 1>{'.'}, System::StringSplitOptions::RemoveEmptyEntries);
		cOld->ID = Convert::ToInt32(parts[0]);
		//Новые данные берём из текстбокса, которые написаны через запятую
		Cards^ cNew = gcnew Cards();
		array<String^>^ newData = card_update->Text->Split(',');

		if (newData->Length != 2) {
			MessageBox::Show("Неверный формат данных. Введите данные через запятую в следующем порядке: ID счёта, номер карты");
			return;
		}

		cNew->accountID = newData[0]->Trim();
		cNew->cardNumber = newData[1]->Trim();

		F.UpdateCards(cOld, cNew);
		card_update->Text = "";
	}
}
private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void expiration_date_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CardsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	cards_list->DataSource = F.SelectCards();
}
private: System::Void account_update_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void card_number_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
