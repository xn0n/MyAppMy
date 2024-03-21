#pragma once
#include<stdlib.h>
#include<string.h>
#include"MyForm.h"
#include <Windows.h>
namespace MyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
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
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TB_Input;

	private: System::Windows::Forms::Button^ OK;
	private: System::Windows::Forms::Button^ DONT_OK;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TB_Input = (gcnew System::Windows::Forms::TextBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->DONT_OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод данных";
			this->label1->Click += gcnew System::EventHandler(this, &Input::label1_Click);
			// 
			// TB_Input
			// 
			this->TB_Input->Location = System::Drawing::Point(16, 32);
			this->TB_Input->Name = L"TB_Input";
			this->TB_Input->Size = System::Drawing::Size(542, 20);
			this->TB_Input->TabIndex = 1;
			this->TB_Input->Click += gcnew System::EventHandler(this, &Input::Input_Load);
			this->TB_Input->TextChanged += gcnew System::EventHandler(this, &Input::TB_Input_TextChanged);
			this->TB_Input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Input::TB_Input_KeyPress);
			// 
			// OK
			// 
			this->OK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->OK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OK.Image")));
			this->OK->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->OK->Location = System::Drawing::Point(120, 121);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(109, 29);
			this->OK->TabIndex = 2;
			this->OK->Text = L"Принять";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &Input::OK_Click);
			// 
			// DONT_OK
			// 
			this->DONT_OK->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->DONT_OK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DONT_OK.Image")));
			this->DONT_OK->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->DONT_OK->Location = System::Drawing::Point(308, 121);
			this->DONT_OK->Name = L"DONT_OK";
			this->DONT_OK->Size = System::Drawing::Size(114, 29);
			this->DONT_OK->TabIndex = 3;
			this->DONT_OK->Text = L"Отменить";
			this->DONT_OK->UseVisualStyleBackColor = true;
			this->DONT_OK->Click += gcnew System::EventHandler(this, &Input::DONT_OK_Click);
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 164);
			this->Controls->Add(this->DONT_OK);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->TB_Input);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"Input";
			this->Text = L"Ввод входных данных";
			this->Load += gcnew System::EventHandler(this, &Input::Input_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ GetText() { return TB_Input->Text; }
	public: void SetLable(String^ ptext) { this->label1->Text = ptext; }



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DONT_OK_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Input_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TB_Input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		switch (e->KeyChar) {
		case 13: {
			DialogResult = System::Windows::Forms::DialogResult::OK;
			Close();
		}break;
		}
	}
	};
}
