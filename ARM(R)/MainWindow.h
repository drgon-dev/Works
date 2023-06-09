#pragma once
#include <windows.h>
#include <fstream>
#include <string>
#include <vector>
#include "msclr\marshal_cppstd.h"
#include "Food.h"

namespace ARMR {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
/// <summary>
/// Сводка для MyForm
/// </summary>
public ref class MainWindow : public System::Windows::Forms::Form
{
protected:
	float FinalPrice;
	vector<Food>* List;
	System::String^ DateData;
	bool Package;
private: System::Windows::Forms::Button^ SaveButton;
public:
	MainWindow(String^ Date)
	{
		InitializeComponent();
		List = new vector<Food>;
		this->DateData = Date;
		FinalPrice = 0;
		Package = false;
	}
protected:
	/// <summary>
	/// Освободить все используемые ресурсы.
	/// </summary>
	~MainWindow()
	{
		if (components)
		{
			delete components;
		}
		delete List;
	}
private: System::Windows::Forms::Button^ ButtonAdd;
protected:

private: System::Windows::Forms::ListBox^ ProductList;

private: System::Windows::Forms::Button^ ExitButton;
private: System::Windows::Forms::Label^ ProjectLabel;
private: System::Windows::Forms::Button^ ButtonHide;
private: System::Windows::Forms::Button^ DeleteButton;
private: System::Windows::Forms::CheckBox^ PackageCheck;
private: System::Windows::Forms::ListBox^ PriceBox;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ PriceTotal;
protected:

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
		this->ButtonAdd = (gcnew System::Windows::Forms::Button());
		this->ProductList = (gcnew System::Windows::Forms::ListBox());
		this->ExitButton = (gcnew System::Windows::Forms::Button());
		this->ProjectLabel = (gcnew System::Windows::Forms::Label());
		this->ButtonHide = (gcnew System::Windows::Forms::Button());
		this->DeleteButton = (gcnew System::Windows::Forms::Button());
		this->PackageCheck = (gcnew System::Windows::Forms::CheckBox());
		this->PriceBox = (gcnew System::Windows::Forms::ListBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->PriceTotal = (gcnew System::Windows::Forms::Label());
		this->SaveButton = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// ButtonAdd
		// 
		this->ButtonAdd->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		this->ButtonAdd->Cursor = System::Windows::Forms::Cursors::Hand;
		this->ButtonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->ButtonAdd->Location = System::Drawing::Point(10, 550);
		this->ButtonAdd->Name = L"ButtonAdd";
		this->ButtonAdd->Size = System::Drawing::Size(110, 75);
		this->ButtonAdd->TabIndex = 0;
		this->ButtonAdd->Text = L"Добавить случайный товар в список";
		this->ButtonAdd->UseVisualStyleBackColor = false;
		this->ButtonAdd->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
		// 
		// ProductList
		// 
		this->ProductList->BackColor = System::Drawing::SystemColors::Menu;
		this->ProductList->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->ProductList->Cursor = System::Windows::Forms::Cursors::Default;
		this->ProductList->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->ProductList->FormattingEnabled = true;
		this->ProductList->ItemHeight = 16;
		this->ProductList->Location = System::Drawing::Point(130, 30);
		this->ProductList->Name = L"ProductList";
		this->ProductList->Size = System::Drawing::Size(200, 448);
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
		this->ExitButton->Click += gcnew System::EventHandler(this, &MainWindow::ExitButton_Click);
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
		this->ButtonHide->Click += gcnew System::EventHandler(this, &MainWindow::ButtonHide_Click);
		// 
		// DeleteButton
		// 
		this->DeleteButton->BackColor = System::Drawing::Color::IndianRed;
		this->DeleteButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->DeleteButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->DeleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->DeleteButton->ForeColor = System::Drawing::SystemColors::ControlText;
		this->DeleteButton->Location = System::Drawing::Point(10, 480);
		this->DeleteButton->Name = L"DeleteButton";
		this->DeleteButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->DeleteButton->Size = System::Drawing::Size(110, 60);
		this->DeleteButton->TabIndex = 5;
		this->DeleteButton->Text = L"Очистить список покупок";
		this->DeleteButton->UseVisualStyleBackColor = false;
		this->DeleteButton->Click += gcnew System::EventHandler(this, &MainWindow::DeleteButton_Click);
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
		this->PackageCheck->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::PackageCheck_CheckedChanged);
		// 
		// PriceBox
		// 
		this->PriceBox->BackColor = System::Drawing::SystemColors::Menu;
		this->PriceBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->PriceBox->FormattingEnabled = true;
		this->PriceBox->ItemHeight = 16;
		this->PriceBox->Location = System::Drawing::Point(336, 30);
		this->PriceBox->Name = L"PriceBox";
		this->PriceBox->Size = System::Drawing::Size(202, 448);
		this->PriceBox->TabIndex = 7;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(147, 502);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(130, 16);
		this->label1->TabIndex = 8;
		this->label1->Text = L"Общая сумма чека:";
		// 
		// PriceTotal
		// 
		this->PriceTotal->AutoSize = true;
		this->PriceTotal->Location = System::Drawing::Point(285, 502);
		this->PriceTotal->Name = L"PriceTotal";
		this->PriceTotal->Size = System::Drawing::Size(14, 16);
		this->PriceTotal->TabIndex = 9;
		this->PriceTotal->Text = L"0";
		// 
		// SaveButton
		// 
		this->SaveButton->BackColor = System::Drawing::Color::Coral;
		this->SaveButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->SaveButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
		this->SaveButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->SaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->SaveButton->ForeColor = System::Drawing::SystemColors::ControlText;
		this->SaveButton->Location = System::Drawing::Point(130, 550);
		this->SaveButton->Name = L"SaveButton";
		this->SaveButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->SaveButton->Size = System::Drawing::Size(408, 75);
		this->SaveButton->TabIndex = 10;
		this->SaveButton->Text = L"Завершить заполнение чека,\r\nсохранить чек и перейти к оплате\r\n";
		this->SaveButton->UseVisualStyleBackColor = false;
		this->SaveButton->Click += gcnew System::EventHandler(this, &MainWindow::SaveButton_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->ClientSize = System::Drawing::Size(550, 650);
		this->Controls->Add(this->SaveButton);
		this->Controls->Add(this->PriceTotal);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->PriceBox);
		this->Controls->Add(this->PackageCheck);
		this->Controls->Add(this->DeleteButton);
		this->Controls->Add(this->ButtonHide);
		this->Controls->Add(this->ProjectLabel);
		this->Controls->Add(this->ExitButton);
		this->Controls->Add(this->ProductList);
		this->Controls->Add(this->ButtonAdd);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Name = L"MainWindow";
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
	Food temp;
	this->ProductList->Items->Add(msclr::interop::marshal_as<System::String^>(temp.GName()));
	(*List).push_back(temp);
	this->PriceBox->Items->Add(temp.GPrice());
	this->FinalPrice += temp.GPrice();
	this->PriceTotal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(FinalPrice));
}
private: System::Void ButtonHide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ProductList->Items->Clear();
	this->PriceBox->Items->Clear();
	(*List).clear();
	this->PackageCheck->Checked = false;
	FinalPrice = 0;
	this->PriceTotal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(FinalPrice));
}
private: System::Void PackageCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->PackageCheck->Checked){
		FinalPrice += 5;
		Package = true;
	}
	else {
		FinalPrice -= 5;
		Package = false;
	}
	this->PriceTotal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(FinalPrice));
}
private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FinalPrice != 0) {
		//std::string temp1 = msclr::interop::marshal_as<std::string>(DateData);
		SYSTEMTIME st;
		GetSystemTime(&st);
		string buffer;
		string FileName = to_string(st.wSecond) + "sec " + to_string(st.wMinute) + "min " + to_string(st.wHour) + "hour " + to_string(st.wDay) + "," + to_string(st.wMonth) + "," + to_string(st.wYear) + ".txt";
		fstream stream(FileName,std::ios::out);
		stream << "Кассир:" << "admin" << endl;
		stream << "Наименование товара  " << "Цена товара" << endl;
		for (int i = 2; i < (*List).size(); i++) {
			buffer = (*List)[i].GName() + "               " + to_string((*List)[i].GPrice());
			stream << endl << buffer;
		}
		if (Package)
			stream << endl << "Пакет                  " << "5" << endl << endl;
		stream << "Итоговая сумма чека:  " << FinalPrice;
		stream.close();
		this->ProductList->Items->Clear();
		this->PriceBox->Items->Clear();
		(*List).clear();
		this->PackageCheck->Checked = false;
		FinalPrice = 0;
		this->PriceTotal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(FinalPrice));
	}
}
};
}