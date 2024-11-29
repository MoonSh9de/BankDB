#pragma once
#include "Functions.h"
#include "UserPage.h"
namespace KursSDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ last_name_login;
	private: System::Windows::Forms::TextBox^ phone_number_login;

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Af;


	private: System::Windows::Forms::Label^ label3;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->last_name_login = (gcnew System::Windows::Forms::TextBox());
			this->phone_number_login = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Af = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(119, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Авторизация";
			// 
			// last_name_login
			// 
			this->last_name_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->last_name_login->Location = System::Drawing::Point(77, 117);
			this->last_name_login->Name = L"last_name_login";
			this->last_name_login->Size = System::Drawing::Size(216, 27);
			this->last_name_login->TabIndex = 10;
			this->last_name_login->TextChanged += gcnew System::EventHandler(this, &LoginPage::last_name_login_TextChanged);
			// 
			// phone_number_login
			// 
			this->phone_number_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->phone_number_login->Location = System::Drawing::Point(98, 174);
			this->phone_number_login->Name = L"phone_number_login";
			this->phone_number_login->Size = System::Drawing::Size(195, 27);
			this->phone_number_login->TabIndex = 11;
			this->phone_number_login->TextChanged += gcnew System::EventHandler(this, &LoginPage::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(133, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 35);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// Af
			// 
			this->Af->AutoSize = true;
			this->Af->Location = System::Drawing::Point(74, 98);
			this->Af->Name = L"Af";
			this->Af->Size = System::Drawing::Size(66, 16);
			this->Af->TabIndex = 13;
			this->Af->Text = L"Фамилия";
			this->Af->Click += gcnew System::EventHandler(this, &LoginPage::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Номер телефона";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Red;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_back->Location = System::Drawing::Point(279, 292);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 32);
			this->btn_back->TabIndex = 22;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &LoginPage::btn_back_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(77, 174);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(24, 27);
			this->textBox3->TabIndex = 23;
			this->textBox3->Text = L"+7";
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(366, 336);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Af);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->phone_number_login);
			this->Controls->Add(this->last_name_login);
			this->Controls->Add(this->label2);
			this->Name = L"LoginPage";
			this->Text = L"LoginPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	String^ last_name = last_name_login->Text;
	String^ phone_number = String::Concat("+7", phone_number_login->Text);

	if (F.userLogin(last_name, phone_number))
	{
		// Авторизация успешна, выполните необходимые действия
		this->Close();
		UserPage^ userPage = gcnew UserPage(F.getCLient(last_name, phone_number));
		userPage->Show();

	}
	else
	{
		MessageBox::Show("Неверная фамилия или номер телефона!");
	}
}
private: System::Void last_name_login_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
