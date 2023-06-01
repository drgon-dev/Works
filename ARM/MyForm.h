#pragma once

namespace ARM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonAdd;
	protected:

	private: System::Windows::Forms::ListBox^ ProductList;

	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ ProjectLabel;
	private: System::Windows::Forms::Button^ ButtonHide;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::CheckBox^ PackageCheck;







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
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ProductList = (gcnew System::Windows::Forms::ListBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->ButtonHide = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->PackageCheck = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonAdd->Location = System::Drawing::Point(10, 550);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(110, 75);
			this->ButtonAdd->TabIndex = 0;
			this->ButtonAdd->Text = L"Добавить случайный товар в список";
			this->ButtonAdd->UseVisualStyleBackColor = false;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ProductList
			// 
			this->ProductList->BackColor = System::Drawing::SystemColors::Menu;
			this->ProductList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProductList->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ProductList->FormattingEnabled = true;
			this->ProductList->ItemHeight = 16;
			this->ProductList->Location = System::Drawing::Point(130, 30);
			this->ProductList->Name = L"ProductList";
			this->ProductList->Size = System::Drawing::Size(410, 612);
			this->ProductList->TabIndex = 1;
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(525, 5);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(20, 20);
			this->ExitButton->TabIndex = 2;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// ProjectLabel
			// 
			this->ProjectLabel->AutoSize = true;
			this->ProjectLabel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ProjectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProjectLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ProjectLabel->Location = System::Drawing::Point(5, 5);
			this->ProjectLabel->Name = L"ProjectLabel";
			this->ProjectLabel->Size = System::Drawing::Size(399, 17);
			this->ProjectLabel->TabIndex = 3;
			this->ProjectLabel->Text = L"Автоматизированное рабочее место специалиста-кассира";
			// 
			// ButtonHide
			// 
			this->ButtonHide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonHide->Location = System::Drawing::Point(500, 5);
			this->ButtonHide->Name = L"ButtonHide";
			this->ButtonHide->Size = System::Drawing::Size(20, 20);
			this->ButtonHide->TabIndex = 4;
			this->ButtonHide->Text = L"-";
			this->ButtonHide->UseVisualStyleBackColor = true;
			this->ButtonHide->Click += gcnew System::EventHandler(this, &MyForm::ButtonHide_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->BackColor = System::Drawing::Color::IndianRed;
			this->DeleteButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteButton->Location = System::Drawing::Point(10, 480);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->DeleteButton->Size = System::Drawing::Size(110, 60);
			this->DeleteButton->TabIndex = 5;
			this->DeleteButton->Text = L"Очистить список покупок";
			this->DeleteButton->UseVisualStyleBackColor = false;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			// 
			// PackageCheck
			// 
			this->PackageCheck->AutoSize = true;
			this->PackageCheck->Location = System::Drawing::Point(10, 30);
			this->PackageCheck->Name = L"PackageCheck";
			this->PackageCheck->Size = System::Drawing::Size(69, 20);
			this->PackageCheck->TabIndex = 6;
			this->PackageCheck->Text = L"Пакет";
			this->PackageCheck->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(550, 650);
			this->Controls->Add(this->PackageCheck);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->ButtonHide);
			this->Controls->Add(this->ProjectLabel);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->ProductList);
			this->Controls->Add(this->ButtonAdd);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"АРМ";
			this->Text = L"АРМ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ProductList->Items->Add("Тест_Продукт");
}
private: System::Void ButtonHide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
	//бонусы добавить всякие акции и сохранение чека по времени, выбор продуктов, логин
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ProductList->Items->Clear();
}
};
}
