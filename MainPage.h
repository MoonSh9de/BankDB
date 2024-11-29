#pragma once

#include "LoginPageAdmin.h"
#include "LoginPageUser.h"
namespace KursSDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_admin;

	protected:


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btn_user;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_admin = (gcnew System::Windows::Forms::Button());
			this->btn_user = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(201, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Добро пожаловать в приложение Bank!";
			// 
			// btn_admin
			// 
			this->btn_admin->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_admin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_admin->Location = System::Drawing::Point(71, 204);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(256, 39);
			this->btn_admin->TabIndex = 6;
			this->btn_admin->Text = L"Администратор";
			this->btn_admin->UseVisualStyleBackColor = false;
			this->btn_admin->Click += gcnew System::EventHandler(this, &MainPage::button1_Click);
			// 
			// btn_user
			// 
			this->btn_user->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_user->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_user->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_user->Location = System::Drawing::Point(71, 264);
			this->btn_user->Name = L"btn_user";
			this->btn_user->Size = System::Drawing::Size(256, 40);
			this->btn_user->TabIndex = 7;
			this->btn_user->Text = L"Пользователь";
			this->btn_user->UseVisualStyleBackColor = false;
			this->btn_user->Click += gcnew System::EventHandler(this, &MainPage::btn_user_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(68, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 16);
			this->label7->TabIndex = 72;
			this->label7->Text = L"Войти как:";
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::Color::White;
			this->btn_exit->Location = System::Drawing::Point(549, 373);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(226, 38);
			this->btn_exit->TabIndex = 73;
			this->btn_exit->Text = L"Выход из программы";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MainPage::btn_exit_Click);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 423);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btn_user);
			this->Controls->Add(this->btn_admin);
			this->Controls->Add(this->label1);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		LoginPageAdmin^ adminPage = gcnew LoginPageAdmin();
		adminPage->Show();

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_user_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	LoginPage^ userPage = gcnew LoginPage();
	userPage->Show();
}
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
