#pragma once
#include "MainWindow.h"

namespace ARMR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class AuthWindow : public System::Windows::Forms::Form
	{
	public:
		AuthWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ ButtonHide;
	public:

	public:

	public:
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AuthWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ DateTime;
	protected:

	private: System::Windows::Forms::TextBox^ LoginTab;
	private: System::Windows::Forms::TextBox^ PasswordTab;

	private: System::Windows::Forms::Label^ MainLabel;
	private: System::Windows::Forms::Button^ AcceptButton;

	protected:


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
			this->DateTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->LoginTab = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTab = (gcnew System::Windows::Forms::TextBox());
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ButtonHide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DateTime
			// 
			this->DateTime->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DateTime->Location = System::Drawing::Point(17, 88);
			this->DateTime->Name = L"DateTime";
			this->DateTime->Size = System::Drawing::Size(270, 22);
			this->DateTime->TabIndex = 0;
			// 
			// LoginTab
			// 
			this->LoginTab->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->LoginTab->Location = System::Drawing::Point(17, 32);
			this->LoginTab->MaxLength = 5;
			this->LoginTab->Name = L"LoginTab";
			this->LoginTab->Size = System::Drawing::Size(270, 22);
			this->LoginTab->TabIndex = 1;
			// 
			// PasswordTab
			// 
			this->PasswordTab->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PasswordTab->Location = System::Drawing::Point(17, 60);
			this->PasswordTab->MaxLength = 5;
			this->PasswordTab->Name = L"PasswordTab";
			this->PasswordTab->PasswordChar = '#';
			this->PasswordTab->Size = System::Drawing::Size(270, 22);
			this->PasswordTab->TabIndex = 2;
			// 
			// MainLabel
			// 
			this->MainLabel->AutoSize = true;
			this->MainLabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->MainLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->MainLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MainLabel->Location = System::Drawing::Point(10, 10);
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Size = System::Drawing::Size(202, 16);
			this->MainLabel->TabIndex = 3;
			this->MainLabel->Text = L"Введите логин, пароль и дату";
			// 
			// AcceptButton
			// 
			this->AcceptButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AcceptButton->Location = System::Drawing::Point(17, 116);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(270, 26);
			this->AcceptButton->TabIndex = 4;
			this->AcceptButton->Text = L"Начать работу";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &AuthWindow::AcceptButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(280, 5);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(20, 20);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &AuthWindow::ExitButton_Click);
			// 
			// ButtonHide
			// 
			this->ButtonHide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonHide->Location = System::Drawing::Point(254, 5);
			this->ButtonHide->Name = L"ButtonHide";
			this->ButtonHide->Size = System::Drawing::Size(20, 20);
			this->ButtonHide->TabIndex = 6;
			this->ButtonHide->Text = L"-";
			this->ButtonHide->UseVisualStyleBackColor = true;
			this->ButtonHide->Click += gcnew System::EventHandler(this, &AuthWindow::ButtonHide_Click);
			// 
			// AuthWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(305, 150);
			this->Controls->Add(this->ButtonHide);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->MainLabel);
			this->Controls->Add(this->PasswordTab);
			this->Controls->Add(this->LoginTab);
			this->Controls->Add(this->DateTime);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AuthWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->LoginTab->Text == "admin") && (this->PasswordTab->Text == "admin")) {
			String^ Date = this->DateTime->Value.ToString();
			MainWindow^ MainF = gcnew MainWindow(Date);
			MainF->Visible = true;
			MainF->Activate();
			this->Visible = false;
		}
		else {
			this->MainLabel->Text = "Неправильный пароль и/или логин";
			//this->MainLabel->Text = this->DateTime->Value.ToString();
		}
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void ButtonHide_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
};
}
