#pragma once
#include "Functions.h"
#include "General.h"
namespace KursSDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginPageAdmin
	/// </summary>
	public ref class LoginPageAdmin : public System::Windows::Forms::Form
	{
	public:
		LoginPageAdmin(void)
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
		~LoginPageAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ password_admin;

	private: System::Windows::Forms::TextBox^ login_admin;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_back;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->password_admin = (gcnew System::Windows::Forms::TextBox());
			this->login_admin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(75, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Пароль";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Логин";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(140, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 35);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPageAdmin::button1_Click);
			// 
			// password_admin
			// 
			this->password_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_admin->Location = System::Drawing::Point(78, 174);
			this->password_admin->Name = L"password_admin";
			this->password_admin->PasswordChar = '*';
			this->password_admin->Size = System::Drawing::Size(216, 27);
			this->password_admin->TabIndex = 17;
			this->password_admin->TextChanged += gcnew System::EventHandler(this, &LoginPageAdmin::textBox2_TextChanged);
			// 
			// login_admin
			// 
			this->login_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_admin->Location = System::Drawing::Point(78, 117);
			this->login_admin->Name = L"login_admin";
			this->login_admin->Size = System::Drawing::Size(216, 27);
			this->login_admin->TabIndex = 16;
			this->login_admin->TextChanged += gcnew System::EventHandler(this, &LoginPageAdmin::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(120, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 25);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Авторизация";
			this->label2->Click += gcnew System::EventHandler(this, &LoginPageAdmin::label2_Click);
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Red;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_back->Location = System::Drawing::Point(282, 296);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 32);
			this->btn_back->TabIndex = 21;
			this->btn_back->Text = L"Выход";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &LoginPageAdmin::btn_back_Click);
			// 
			// LoginPageAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 340);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password_admin);
			this->Controls->Add(this->login_admin);
			this->Controls->Add(this->label2);
			this->Name = L"LoginPageAdmin";
			this->Text = L"LoginPageAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Functions F;
	String^ username = login_admin->Text;
	String^ password = password_admin->Text;

	if (F.adminLogin(username, password))
	{
		// Авторизация успешна, выполните необходимые действия
		this->Close();
		General^ generalPage = gcnew General();
		generalPage->Show();

	}
	else
	{
		MessageBox::Show("Неверный логин или пароль.");
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
