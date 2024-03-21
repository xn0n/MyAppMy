#pragma once
#include <Windows.h>
#include"Input.h"
#include<stdlib.h>
#include<string.h>
#include<string>
#include"MyClasses.h"
#include"MyFormInput.h"
#include"Recursion.h"
#include"Header.h"
#include <sstream>
#include"Lab.h"
#include "Figures.h"




namespace MyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Windows::Forms::DataVisualization::Charting;
	//using namespace System::Collections::Generic;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyAction onaction;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтСШагомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выборомПоВозрастаниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выборомПоУбываниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пузырькомПоВозрастаниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пузырькомПоУбываниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ быстраяСортировкаПоВозрастаниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ быстраяСортировкаПоУбываниюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ семестр1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ семестр2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рисованиеФигурToolStripMenuItem;



	public:
		static _stRecursion* RecOut;

		void Recursion();
		void T();
		void Recursion2();
		//void ShowSortTwo();
	public:
		MyForm(void)
		{
			InitializeComponent();


			//this->DoubleBuffered = true;
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

	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ маскаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ семестрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сведенияОПрограмистеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабораторнаяРабота5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лабиринтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекурсияИГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ шифрованиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ классыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзПриложенияToolStripMenuItem;
	private: System::Windows::Forms::Panel^ P_Titul;
	private: System::Windows::Forms::Panel^ P_Output;
	private: System::Windows::Forms::TextBox^ TB_Titul;
	private: System::Windows::Forms::ListBox^ LB_Oytput;




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
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->маскаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->семестрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведенияОПрограмистеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабораторнаяРабота5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лабиринтСШагомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекурсияИГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->семестр1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->семестр2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборомПоВозрастаниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборомПоУбываниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пузырькомПоВозрастаниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пузырькомПоУбываниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->быстраяСортировкаПоВозрастаниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->быстраяСортировкаПоУбываниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шифрованиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->классыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рисованиеФигурToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзПриложенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->P_Titul = (gcnew System::Windows::Forms::Panel());
			this->TB_Titul = (gcnew System::Windows::Forms::TextBox());
			this->P_Output = (gcnew System::Windows::Forms::Panel());
			this->LB_Oytput = (gcnew System::Windows::Forms::ListBox());
			this->menu->SuspendLayout();
			this->P_Titul->SuspendLayout();
			this->P_Output->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->маскаToolStripMenuItem,
					this->семестрToolStripMenuItem, this->лабиринтToolStripMenuItem, this->рекурсияИГрафикToolStripMenuItem, this->сортировкаToolStripMenuItem,
					this->шифрованиеToolStripMenuItem, this->классыToolStripMenuItem, this->выходИзПриложенияToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(1529, 30);
			this->menu->TabIndex = 2;
			this->menu->Text = L"memumain";
			// 
			// маскаToolStripMenuItem
			// 
			this->маскаToolStripMenuItem->Name = L"маскаToolStripMenuItem";
			this->маскаToolStripMenuItem->Size = System::Drawing::Size(66, 26);
			this->маскаToolStripMenuItem->Text = L"Маска";
			this->маскаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::маскаToolStripMenuItem_Click);
			// 
			// семестрToolStripMenuItem
			// 
			this->семестрToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->сведенияОПрограмистеToolStripMenuItem,
					this->лабораторнаяРабота1ToolStripMenuItem, this->лабораторнаяРабота2ToolStripMenuItem, this->лабораторнаяРабота3ToolStripMenuItem,
					this->лабораторнаяРабота4ToolStripMenuItem, this->лабораторнаяРабота5ToolStripMenuItem
			});
			this->семестрToolStripMenuItem->Name = L"семестрToolStripMenuItem";
			this->семестрToolStripMenuItem->Size = System::Drawing::Size(91, 26);
			this->семестрToolStripMenuItem->Text = L"1 семестр";
			// 
			// сведенияОПрограмистеToolStripMenuItem
			// 
			this->сведенияОПрограмистеToolStripMenuItem->Name = L"сведенияОПрограмистеToolStripMenuItem";
			this->сведенияОПрограмистеToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->сведенияОПрограмистеToolStripMenuItem->Text = L"Сведения о программисте";
			this->сведенияОПрограмистеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сведенияОПрограмистеToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота1ToolStripMenuItem
			// 
			this->лабораторнаяРабота1ToolStripMenuItem->Name = L"лабораторнаяРабота1ToolStripMenuItem";
			this->лабораторнаяРабота1ToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->лабораторнаяРабота1ToolStripMenuItem->Text = L"2.1";
			this->лабораторнаяРабота1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота1ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота2ToolStripMenuItem
			// 
			this->лабораторнаяРабота2ToolStripMenuItem->Name = L"лабораторнаяРабота2ToolStripMenuItem";
			this->лабораторнаяРабота2ToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->лабораторнаяРабота2ToolStripMenuItem->Text = L"2.2";
			this->лабораторнаяРабота2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота2ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота3ToolStripMenuItem
			// 
			this->лабораторнаяРабота3ToolStripMenuItem->Name = L"лабораторнаяРабота3ToolStripMenuItem";
			this->лабораторнаяРабота3ToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->лабораторнаяРабота3ToolStripMenuItem->Text = L"3.1";
			this->лабораторнаяРабота3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота3ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота4ToolStripMenuItem
			// 
			this->лабораторнаяРабота4ToolStripMenuItem->Name = L"лабораторнаяРабота4ToolStripMenuItem";
			this->лабораторнаяРабота4ToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->лабораторнаяРабота4ToolStripMenuItem->Text = L"3.2";
			this->лабораторнаяРабота4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота4ToolStripMenuItem_Click);
			// 
			// лабораторнаяРабота5ToolStripMenuItem
			// 
			this->лабораторнаяРабота5ToolStripMenuItem->Name = L"лабораторнаяРабота5ToolStripMenuItem";
			this->лабораторнаяРабота5ToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->лабораторнаяРабота5ToolStripMenuItem->Text = L"4";
			this->лабораторнаяРабота5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабораторнаяРабота5ToolStripMenuItem_Click);
			// 
			// лабиринтToolStripMenuItem
			// 
			this->лабиринтToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->лабиринтToolStripMenuItem1,
					this->лабиринтСШагомToolStripMenuItem
			});
			this->лабиринтToolStripMenuItem->Name = L"лабиринтToolStripMenuItem";
			this->лабиринтToolStripMenuItem->Size = System::Drawing::Size(92, 26);
			this->лабиринтToolStripMenuItem->Text = L"Лабиринт";
			this->лабиринтToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лабиринтToolStripMenuItem_Click);
			// 
			// лабиринтToolStripMenuItem1
			// 
			this->лабиринтToolStripMenuItem1->Name = L"лабиринтToolStripMenuItem1";
			this->лабиринтToolStripMenuItem1->Size = System::Drawing::Size(232, 26);
			this->лабиринтToolStripMenuItem1->Text = L"Лабиринт";
			this->лабиринтToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::лабиринтToolStripMenuItem1_Click);
			// 
			// лабиринтСШагомToolStripMenuItem
			// 
			this->лабиринтСШагомToolStripMenuItem->Name = L"лабиринтСШагомToolStripMenuItem";
			this->лабиринтСШагомToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->лабиринтСШагомToolStripMenuItem->Text = L"Лабиринт по шагам";
			// 
			// рекурсияИГрафикToolStripMenuItem
			// 
			this->рекурсияИГрафикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->семестр1ToolStripMenuItem,
					this->семестр2ToolStripMenuItem
			});
			this->рекурсияИГрафикToolStripMenuItem->Name = L"рекурсияИГрафикToolStripMenuItem";
			this->рекурсияИГрафикToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->рекурсияИГрафикToolStripMenuItem->Text = L"Рекурсия и график";
			this->рекурсияИГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::рекурсияИГрафикToolStripMenuItem_Click);
			// 
			// семестр1ToolStripMenuItem
			// 
			this->семестр1ToolStripMenuItem->Name = L"семестр1ToolStripMenuItem";
			this->семестр1ToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->семестр1ToolStripMenuItem->Text = L"Семестр 1";
			this->семестр1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::семестр1ToolStripMenuItem_Click);
			// 
			// семестр2ToolStripMenuItem
			// 
			this->семестр2ToolStripMenuItem->Name = L"семестр2ToolStripMenuItem";
			this->семестр2ToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->семестр2ToolStripMenuItem->Text = L"Семестр 2";
			this->семестр2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::семестр2ToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->выборомПоВозрастаниюToolStripMenuItem,
					this->выборомПоУбываниюToolStripMenuItem, this->пузырькомПоВозрастаниюToolStripMenuItem, this->пузырькомПоУбываниюToolStripMenuItem,
					this->быстраяСортировкаПоВозрастаниюToolStripMenuItem, this->быстраяСортировкаПоУбываниюToolStripMenuItem
			});
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(106, 26);
			this->сортировкаToolStripMenuItem->Text = L"Сортировка";
			// 
			// выборомПоВозрастаниюToolStripMenuItem
			// 
			this->выборомПоВозрастаниюToolStripMenuItem->Name = L"выборомПоВозрастаниюToolStripMenuItem";
			this->выборомПоВозрастаниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->выборомПоВозрастаниюToolStripMenuItem->Text = L"Выбором по возрастанию";
			this->выборомПоВозрастаниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выборомПоВозрастаниюToolStripMenuItem_Click);
			// 
			// выборомПоУбываниюToolStripMenuItem
			// 
			this->выборомПоУбываниюToolStripMenuItem->Name = L"выборомПоУбываниюToolStripMenuItem";
			this->выборомПоУбываниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->выборомПоУбываниюToolStripMenuItem->Text = L"Выбором по убыванию";
			this->выборомПоУбываниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выборомПоУбываниюToolStripMenuItem_Click);
			// 
			// пузырькомПоВозрастаниюToolStripMenuItem
			// 
			this->пузырькомПоВозрастаниюToolStripMenuItem->Name = L"пузырькомПоВозрастаниюToolStripMenuItem";
			this->пузырькомПоВозрастаниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->пузырькомПоВозрастаниюToolStripMenuItem->Text = L"Пузырьком по возрастанию";
			this->пузырькомПоВозрастаниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::пузырькомПоВозрастаниюToolStripMenuItem_Click);
			// 
			// пузырькомПоУбываниюToolStripMenuItem
			// 
			this->пузырькомПоУбываниюToolStripMenuItem->Name = L"пузырькомПоУбываниюToolStripMenuItem";
			this->пузырькомПоУбываниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->пузырькомПоУбываниюToolStripMenuItem->Text = L"Пузырьком по убыванию";
			this->пузырькомПоУбываниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::пузырькомПоУбываниюToolStripMenuItem_Click);
			// 
			// быстраяСортировкаПоВозрастаниюToolStripMenuItem
			// 
			this->быстраяСортировкаПоВозрастаниюToolStripMenuItem->Name = L"быстраяСортировкаПоВозрастаниюToolStripMenuItem";
			this->быстраяСортировкаПоВозрастаниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->быстраяСортировкаПоВозрастаниюToolStripMenuItem->Text = L"Быстрая сортировка по возрастанию";
			this->быстраяСортировкаПоВозрастаниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::быстраяСортировкаПоВозрастаниюToolStripMenuItem_Click);
			// 
			// быстраяСортировкаПоУбываниюToolStripMenuItem
			// 
			this->быстраяСортировкаПоУбываниюToolStripMenuItem->Name = L"быстраяСортировкаПоУбываниюToolStripMenuItem";
			this->быстраяСортировкаПоУбываниюToolStripMenuItem->Size = System::Drawing::Size(353, 26);
			this->быстраяСортировкаПоУбываниюToolStripMenuItem->Text = L"Быстрая сортировка по убыванию";
			this->быстраяСортировкаПоУбываниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::быстраяСортировкаПоУбываниюToolStripMenuItem_Click);
			// 
			// шифрованиеToolStripMenuItem
			// 
			this->шифрованиеToolStripMenuItem->Name = L"шифрованиеToolStripMenuItem";
			this->шифрованиеToolStripMenuItem->Size = System::Drawing::Size(116, 26);
			this->шифрованиеToolStripMenuItem->Text = L"Шифрование";
			this->шифрованиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шифрованиеToolStripMenuItem_Click);
			// 
			// классыToolStripMenuItem
			// 
			this->классыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->рисованиеФигурToolStripMenuItem });
			this->классыToolStripMenuItem->Name = L"классыToolStripMenuItem";
			this->классыToolStripMenuItem->Size = System::Drawing::Size(73, 26);
			this->классыToolStripMenuItem->Text = L"Классы";
			this->классыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::классыToolStripMenuItem_Click);
			// 
			// рисованиеФигурToolStripMenuItem
			// 
			this->рисованиеФигурToolStripMenuItem->Name = L"рисованиеФигурToolStripMenuItem";
			this->рисованиеФигурToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->рисованиеФигурToolStripMenuItem->Text = L"Рисование фигур";
			this->рисованиеФигурToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::рисованиеФигурToolStripMenuItem_Click);
			// 
			// выходИзПриложенияToolStripMenuItem
			// 
			this->выходИзПриложенияToolStripMenuItem->Name = L"выходИзПриложенияToolStripMenuItem";
			this->выходИзПриложенияToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::X));
			this->выходИзПриложенияToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->выходИзПриложенияToolStripMenuItem->Text = L"Выход из приложения";
			this->выходИзПриложенияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходИзПриложенияToolStripMenuItem_Click);
			// 
			// P_Titul
			// 
			this->P_Titul->Controls->Add(this->TB_Titul);
			this->P_Titul->Dock = System::Windows::Forms::DockStyle::Top;
			this->P_Titul->Location = System::Drawing::Point(0, 30);
			this->P_Titul->Margin = System::Windows::Forms::Padding(4);
			this->P_Titul->Name = L"P_Titul";
			this->P_Titul->Size = System::Drawing::Size(1529, 148);
			this->P_Titul->TabIndex = 3;
			// 
			// TB_Titul
			// 
			this->TB_Titul->BackColor = System::Drawing::SystemColors::Window;
			this->TB_Titul->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TB_Titul->Enabled = false;
			this->TB_Titul->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TB_Titul->Location = System::Drawing::Point(0, 0);
			this->TB_Titul->Margin = System::Windows::Forms::Padding(4);
			this->TB_Titul->Multiline = true;
			this->TB_Titul->Name = L"TB_Titul";
			this->TB_Titul->Size = System::Drawing::Size(1529, 148);
			this->TB_Titul->TabIndex = 0;
			this->TB_Titul->Text = L"Здесь пишем задание и описание задачи\r\nПрограмма написана Борлаковым А.А. группы "
				L"1БИТС2\r\n\r\n\r\n";
			this->TB_Titul->TextChanged += gcnew System::EventHandler(this, &MyForm::TB_Titul_TextChanged);
			// 
			// P_Output
			// 
			this->P_Output->Controls->Add(this->LB_Oytput);
			this->P_Output->Dock = System::Windows::Forms::DockStyle::Left;
			this->P_Output->Location = System::Drawing::Point(0, 178);
			this->P_Output->Margin = System::Windows::Forms::Padding(4);
			this->P_Output->Name = L"P_Output";
			this->P_Output->Size = System::Drawing::Size(499, 632);
			this->P_Output->TabIndex = 4;
			// 
			// LB_Oytput
			// 
			this->LB_Oytput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LB_Oytput->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LB_Oytput->FormattingEnabled = true;
			this->LB_Oytput->ItemHeight = 24;
			this->LB_Oytput->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Здесь будут результаты" });
			this->LB_Oytput->Location = System::Drawing::Point(0, 0);
			this->LB_Oytput->Margin = System::Windows::Forms::Padding(4);
			this->LB_Oytput->Name = L"LB_Oytput";
			this->LB_Oytput->Size = System::Drawing::Size(499, 632);
			this->LB_Oytput->TabIndex = 7;
			this->LB_Oytput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::LB_Oytput_KeyDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1529, 810);
			this->Controls->Add(this->P_Output);
			this->Controls->Add(this->P_Titul);
			this->Controls->Add(this->menu);
			this->MainMenuStrip = this->menu;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Программа";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->DoubleClick += gcnew System::EventHandler(this, &MyForm::MyForm_DoubleClick);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->P_Titul->ResumeLayout(false);
			this->P_Titul->PerformLayout();
			this->P_Output->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void сведенияОПрограмистеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		TB_Titul->Text = "Программу создал студент Борлаков А.А. групы 1БИТС2";
	}
	private: System::Void выходИзПриложенияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}


	private: System::Void TB_Titul_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	public: void ClearToNewTask() {
		TB_Titul->Text = "Выберите пункт меню для решения задачи";
		TB_Titul->Enabled = false;
		LB_Oytput->Items->Clear();
		LB_Oytput->Visible - true;
		onaction = act_NONE;
		Refresh();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
	}
	private: System::Void маскаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		TB_Titul->Text = "Вывести числа удолетворяющие маске";
		MyFormInput^ f_input = gcnew MyFormInput();
		f_input->Show();
		//Input f = gcnew Input()
		f_input->Visible = false;
		if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sRes = f_input->GetText();
			if (sRes == "") return;

			int nRes = Convert::ToInt32(sRes);
			int nNumber, nCount = 0;
			for (int i = 0; i < 20; i++) {
				nNumber = rand();
				if ((nNumber & nRes) == nRes) {
					LB_Oytput->Items->Add(nNumber);
					nCount++;
				}
			}
			TB_Titul->AppendText("\r\nВ список были добавлены " + Convert::ToString(nCount) + " числа(ел) удолетворяющие условию (маске)");
		}
		else {
			f_input->Close();
			return;
		}
	}

	private: System::Void шифрованиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


		MyFormInput^ f_input = gcnew MyFormInput();
		ClearToNewTask();
		TB_Titul->Text = "";
		f_input->Text = "Введите текст для шифрования";
		if (f_input->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ stext = f_input->GetText();
			TB_Titul->AppendText("\r\nвведеная строка: " + stext + "\r\n");
			f_input->Visible = false;
			std::string ss;


			StringToChar(stext, ss);
			LB_Oytput->Items->Add("Шифрованый текст");
			//const char* sch = ss.c_str();
			std::string shifr = EncodeText((char*)ss.c_str());
			LB_Oytput->Items->Add(CharToString((char*)shifr.c_str()));
			LB_Oytput->Items->Add("");
			LB_Oytput->Items->Add("Расшифрованный текст: ");
			std::string unshifr = DecodeText((char*)shifr.c_str());
			LB_Oytput->Items->Add(CharToString((char*)unshifr.c_str()));

		}
		f_input->Close();
	}
	private: System::Void рекурсияИГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//

	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		switch (onaction) {
		case act_LABIRINT: {
			P_Output->Visible = false;
			onaction = LabirintDraw(e->Graphics);
			if (onaction == act_LABIRINTEXT) Refresh();
		}break;
		case act_LABIRINTEXT: {
			P_Output->Visible = true;
			LB_Oytput->Items->Clear();
			LB_Oytput->Items->Add("Жук достиг выхода из лабиринта!!! Крутяк!");
			//LabirintDraw(e->Graphics);
		}break;
		case act_LABIRINTPATH: {
			LabirintDraw(e->Graphics);
			StartMoving(e->Graphics);
			onaction = act_LABIRINT;
		}break;
		case act_BREAK: {
			P_Output->Visible = true;
			LB_Oytput->Items->Clear();
			LB_Oytput->Items->Add("Операция прервана оператором!!!");
			onaction = act_NONE;
		}break;
		case act_RECURSION: {
			P_Output->Visible = true;
			RECT rct{ 500, 200, 1250, 600 };
			//p_Output->Visible = false;
			DrawGraf(e->Graphics, RecOut, 20, rct);
			this->Focus();
		}break;
		case act_RECURSION1: {
			P_Output->Visible = true;
			RECT rct{ 600, 200, 1250, 600 };
			//p_Output->Visible = false;
			DrawGraf(e->Graphics, RecOut, 20, rct);
			this->Focus();
		}break;
		default: {
		};
		};
	};
	private: System::Void лабиринтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//P_Output->Visible = false;
		//TB_Titul->Text = "Задача Лабиринт\r\nНажмите клавиши стрелок вверх, вниз, влево, вправо для перемещение жука в лабиринте";
		//onaction = act_LABIRINT;
		//this->Focus();
		//Refresh();

	}
	private: System::Void лабиринтToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		P_Output->Visible = false;
		TB_Titul->Text = "Задача лабиринт\r\nНажмите стрелки вверх, вниз, влево, вправо для перемещения";
		onaction = act_LABIRINT;
		this->Focus();
		Refresh();
		//Labirint(0);
		P_Output->Visible = true;


	}
	private: System::Void лабораторнаяРабота1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		int d, f, g, h, min, max, C, D, x1, x2, x3;
		x1 = 7 / 10;
		x2 = 1;
		x3 = 5;

		TB_Titul->Text = "Лабораторная работа №1 Тема: Алгоритмы с ветвлением: ветвление с выбором формул\n\nУсловие задачи: Даны переменные d,f,g,h. Определить:\n C = min{d,f,g,h}+max{d,f,g,h};\n D = |d*f|-h, если C < 0.7;\n D = sqrt(2*C)+d, если 0.7 <= C < 1;\n D = g*g, если 1 <= C < 5;\n D = hsqrt(C), если C>=5.\n\n\r\r\n";
		MyFormInput^ inp = gcnew MyFormInput();
		inp->Text = "Введите переменную d";
		if (inp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			d = Convert::ToDouble(inp->GetText());
			MyFormInput^ inp2 = gcnew MyFormInput();
			inp2->Text = "Введите переменную f";
			if (inp2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				f = Convert::ToDouble(inp2->GetText());
				MyFormInput^ inp3 = gcnew MyFormInput();
				inp3->Text = "Введите переменную g";
				if (inp3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					g = Convert::ToDouble(inp3->GetText());
					MyFormInput^ inp4 = gcnew MyFormInput();
					inp4->Text = "Введите переменную h"; if (inp4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
						h = Convert::ToDouble(inp4->GetText()); TB_Titul->AppendText("\nВведены d = " + d + ", f = " + f + ", g = " + g + ", h = " + h); // эхо-печать
						// эхо-печать


						min = max = d;
						if (min > f)
							min = f;
						if (min > g)
							min = g;
						if (min > h)
							min = h;


						if (max < f)
							max = f;
						if (max < g)
							max = g;
						if (max < h)
							max = h;


						// Вычисляем C и D в зависимости от значения C
						C = min + max;
						if (C < x1) {
							D = abs(d * f) - h;
						}
						else if (x1 <= C && C < x2) {
							D = sqrt(2 * C) + d;
						}
						else if (x2 <= C && C < x3) {
							D = g * g;
						}
						else if (C >= x3) {
							D = h * sqrt(C);
						}

						// Вывод результатов в элементы управления
						LB_Oytput->Items->Add("Результаты:");
						LB_Oytput->Items->Add("Min = " + min);
						LB_Oytput->Items->Add("C = " + C);
						LB_Oytput->Items->Add("D = " + D);
						LB_Oytput->Items->Add("Max = " + max);
						LB_Oytput->Items->Add("");
					}
				}
			}
		}


	}
	private: System::Void лабораторнаяРабота2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		int W, V, H;
		TB_Titul->Text = ("Лабораторная работа №2 Тема: Вычисления с выбором формул\n\n" +
			"\nДаны переменные W,V,H. Определить, какая из переменных является квадратом суммы двух других.\nПри отсутствии такой переменной выводится соответствующее сообщение.\n");




		// Получение ввода от пользователя
		MyFormInput^ itp = gcnew MyFormInput();
		itp->Text = "Введите значение W = ";
		if (itp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			W = Convert::ToDouble(itp->GetText());
			MyFormInput^ itp3 = gcnew MyFormInput();
			itp3->Text = "Введите значение V = ";
			if (itp3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				V = Convert::ToDouble(itp3->GetText());
				MyFormInput^ itp4 = gcnew MyFormInput();
				itp4->Text = "Введите значение H = ";
				if (itp4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					H = Convert::ToDouble(itp4->GetText());
					TB_Titul->AppendText("\nВведены W = " + W + ", V = " + V + ", H = " + H);

					if (W != 0 && V != 0 && H != 0 && (W > 0 || V > 0 || H > 0))
						if ((W + V) * (W + V) == H)
							LB_Oytput->Items->Add("H = " + H + " является суммой квадратов переменных " + "W = " + W + " и " + "V = " + V + "\n\n");
						else if ((W + H) * (W + H) == V)
							LB_Oytput->Items->Add("V = " + V + " является суммой квадратов переменных " + "W = " + W + " и " + "H = " + H + "\n\n");
						else if ((V + H) * (V + H) == W)
							LB_Oytput->Items->Add("W = " + W + " является суммой квадратов переменных " + "V = " + V + " и " + "H	 = " + H + "\n\n");
						else LB_Oytput->Items->Add("Результат: Ни одна из переменных не является суммой двух других");
					else  LB_Oytput->Items->Add("Результат: Решение не принято, так как данные некорректные");


				}
			}

		}
	}




	private: System::Void лабораторнаяРабота3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		TB_Titul->Text = "Составление значений исходя из заданных парметров\r\n";
		TB_Titul->AppendText("Введите пременные А и k, они должны быть положительными.\n");

		TB_Titul->AppendText("\r\nЛабораторная работа №3 Тема: Циклические алгоритмы: Построение таблицы значений параметрической функции, зависящей от параметра и заданной на интервале конечной длины.\n\n");
		TB_Titul->AppendText("\r\nУсловие задачи: Вычислить N значений параметрической функции Y = для аргумента Х, изменяющегося от\n" + ("Х 1 с шагом Dx.\n\n"));
		TB_Titul->AppendText("\r\nВведите пременные А и k, они должны быть положительными");
		int n22;
		double A, N, k, n = 0, x_1 = -1, i;//Объявление переменных
		const double LN = 58;
		double H, dx, y{}, x;//Объявление переменных

		MyFormInput^ f = gcnew MyFormInput;


		do { // Исключение некорректного значения N
			f->Text = "\nВведите количество точек N: \n";
			if (f->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				N = Convert::ToDouble(f->GetText());
				if (N < 1) {
					LB_Oytput->Items->Add("Ошибка! N должно быть натуральным!\n");
				}
			}
		} while (N < 1);


		MyFormInput^ itp = gcnew MyFormInput();
		do { // Исключение некорректного значения A
			itp->Text = "Введите положительный параметр A: \n";
			if (itp->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				A = Convert::ToDouble(itp->GetText());
				if (A < 0) {
					LB_Oytput->Items->Add("A должно быть положительным\n");
				}
				else if (A == 0) {
					LB_Oytput->Items->Add("Ошибка! A не может быть равным нулю\n");
				}
			}
		} while (A < 0 || A == 0);

		dx = (3 * A / 10);

		MyFormInput^ itp1 = gcnew MyFormInput();
		do { // Исключение неккоректного значения k
			itp1->Text = "Введите положительное значение коэффициента выбранной функции K: ";
			if (itp1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				k = Convert::ToDouble(itp1->GetText());
				if (k < 0) {
					LB_Oytput->Items->Add("k должно быть положительным\n");
				}


			}
		} while (k < 0);

		LB_Oytput->Items->Add("\n\nИсходные данные:\t\r"); //+ "\nКоличество точек = " + N + "\nПараметр A = " + A+ "\nКоэффициент выбранной функции K = " + k + "\nШаг = " + dx + "\nНачальная точка = "+ x_1);
		LB_Oytput->Items->Add("\nКоличество точек =" + N);
		LB_Oytput->Items->Add("\nПараметр A = " + A);
		LB_Oytput->Items->Add("\nКоэффициент выбранной функции K = " + k);
		LB_Oytput->Items->Add("\nШаг = " + dx);
		LB_Oytput->Items->Add("\nНачальная точка = " + x_1 + "\n\r");

		LB_Oytput->Items->Add("\n\n№\t\t" + "X\t\t" + "Y\t\t");

		x = x_1;
		while (n < N) { //Цикл отвечающий за количество точек, которые будут выведены
			if (x < 0) { //Определение по какой формуле будем считать коорджинату Y
				H = (pow(A, 2 / 3) - (pow(x + A, 2 / 3)));
				y = sqrt(pow(H, 3));
			}
			if (x >= 0) {
				if (abs(2 * A - x) == 0) {
					y = -sqrt(pow(x, 3));
				}
				else {
					y = -sqrt((pow(x, 3) / abs(2 * A - x)));
				}
			}
			//Вывод точек
			n = n + 1;
			//LB_Oytput->Items->Add((n + 1) + "\t\t" + x + "\t\t" + y);
			LB_Oytput->Items->Add((n + 1) + "\t\t" + x + "\t\t" + y.ToString("F6"));


			x = x + dx;
			n22 = n;



		}
	}





	private: System::Void лабораторнаяРабота4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		Random^ rand = gcnew Random();
		TB_Titul->Text = ("Лабораторная работа №4 Тема: \n\n" +
			"Условие задачи: Даны массивы R1...R7,d1...d7, и число N. Построить новый массив S по формуле:\n S = (R[i]/P) * d[j](7 раз), где:\n P = N - d[i], если 1 < d[i] < 2;\n P = 1/N, это в противном случае\n");

		cli::array<double>^ R = gcnew cli::array<double>(7);
		cli::array<double>^ d = gcnew cli::array<double>(7);
		cli::array<double>^ S = gcnew cli::array<double>(7);

		double N, minD = 0.0, maxD = 10.0, P = 0, Pm = 1;

		MyFormInput^ ilp = gcnew MyFormInput();
		ilp->Text = "Введите целочисленное значение переменной N:";
		if (ilp->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			N = Convert::ToDouble(ilp->GetText());

			if (N == 0)
			{
				LB_Oytput->Items->Add("Ошибка! Значение не может быть равно 0");
				return;
			}

			for (int i = 0; i < 7; i++)
			{
				MyFormInput^ ilp2 = gcnew MyFormInput();
				ilp2->Text = "Введите " + (i + 1) + " элемент массива R:";
				if (ilp2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					R[i] = Convert::ToDouble(ilp2->GetText());
					LB_Oytput->Items->Add(R[i] + " ");
				}
			}

			LB_Oytput->Items->Add("\n");

			for (int i = 0; i < 7; i++)
			{
				MyFormInput^ ilp2 = gcnew MyFormInput();
				ilp2->Text = "Введите " + (i + 1) + " элемент массива d:";
				if (ilp2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					d[i] = Convert::ToDouble(ilp2->GetText());
					LB_Oytput->Items->Add(d[i] + " ");
				}
			}

			LB_Oytput->Items->Add("\n\nОтвет:\n");

			LB_Oytput->Items->Add("Массив R:\n");
			for (int i = 0; i < 7; i++)
			{
				R[i] = minD + R[i] * (maxD - minD);
				d[i] = minD + d[i] * (maxD - minD);
				Pm = d[i];

				if (d[i] > 1 && d[i] < 2)
				{
					if (N == d[i])
					{
						LB_Oytput->Items->Add("Ошибка!");
						return;
					}
					P += N - d[i];
				}
				else
				{
					P += 1 / N;
				}

				LB_Oytput->Items->Add(R[i].ToString("F3") + "\t" + d[i].ToString() + "\n");
			}

			LB_Oytput->Items->Add("\n");

			LB_Oytput->Items->Add("Массив S:\n");
			for (int i = 0; i < 7; i++)
			{
				S[i] = (R[i] / P) * Pm;
				LB_Oytput->Items->Add(S[i].ToString("F3") + "\t\n");
			}
		}
	}
	private: System::Void лабораторнаяРабота5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		// Инициализация генератора случайных чисел
		srand(time(NULL));

		// Вывод информации о студенте и теме лабораторной работы
		TB_Titul->Text = "Выполнил студент группы 1бИТС2 Борлаков Амин. Тема: Обработка матриц" +
			"\n\n\nВ положительной целочисленной матрице имеется несколько столбцов, только из единиц." +
			"\nЗаменить элементы этих столбцов полусуммой элементов всех остальных столбцов.\n";

		const int y0 = 4, x0 = 4;
		int arr[x0][y0], Y, sum = 0;

		// Ввод значения Y
		MyFormInput^ itp = gcnew MyFormInput();
		itp->Text = "Введите значение переменной Y для задания размерности матрицы (0 <= Y < " + y0 + ")";
		if (itp->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Y = Convert::ToInt32(itp->GetText());
			if (Y < 0 || Y >= y0)
			{
				LB_Oytput->Items->Add("Неверное значение Y, число должно быть в диапазоне от 0 до " + (y0 - 1));
				return;
			}

			// Заполнение массива случайными значениями или ввод с клавиатуры
			for (int i = 0; i < x0; i++)
			{
				for (int j = 0; j < y0; j++)
				{
					MyFormInput^ itp2 = gcnew MyFormInput();
					itp2->Text = "Введите элемент массива R[" + i + "][" + j + "]: ";
					if (itp2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					{
						arr[i][j] = Convert::ToInt32(itp2->GetText());
					}
				}
			}

			// Вывод исходной матрицы
			LB_Oytput->Items->Add("Вышла матрица:");
			for (int i = 0; i < x0; i++)
			{
				std::ostringstream oss;
				for (int j = 0; j < y0; j++)
				{
					oss << std::setw(4) << arr[i][j];
				}
				LB_Oytput->Items->Add(gcnew System::String(oss.str().c_str()));
			}

			// Замена элементов массива с индексом столбца Y на 1 и подсчет суммы остальных элементов
			for (int i = 0; i < x0; i++)
			{
				for (int j = 0; j < y0; j++)
				{
					if (j == Y)
					{
						arr[i][j] = 1;
					}
					else
					{
						sum += arr[i][j];
					}
				}
			}
			LB_Oytput->Items->Add("Сумма элементов массива, не входящих в столбец Y: " + sum);

			// Замена элементов массива с индексом столбца Y на сумму остальных элементов
			for (int i = 0; i < x0; i++)
			{
				for (int j = 0; j < y0; j++)
				{
					if (j == Y)
					{
						arr[i][j] = sum;
					}
				}
			}

			// Вывод измененной матрицы
			LB_Oytput->Items->Add("Матрица после замены столбца Y:");
			for (int i = 0; i < x0; i++)
			{
				std::ostringstream oss;
				for (int j = 0; j < y0; j++)
				{
					oss << std::setw(4) << arr[i][j];
				}
				LB_Oytput->Items->Add(gcnew System::String(oss.str().c_str()));
			}
		}
	}
	private: System::Void MyForm_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		onaction = act_NONE;
		LB_Oytput->Items->Clear();
		Refresh();
	}

	private: System::Void LB_Oytput_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		MyForm_KeyDown(this, e);
	}


	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (onaction == act_LABIRINT) {
			switch (e->KeyChar) {
			case 13:;
			};
		}
		else
			char ch = e->KeyChar;
	}





	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case System::Windows::Forms::Keys::F5:
			//case (System::Windows::Forms::Keys)116:
			//onaction = act_NONE;
			//onaction = act_LABIRINTPATH;
			onaction = act_NONE;
			LB_Oytput->Items->Clear();
			Refresh();


			break;
		}
		/*if (onaction = act_LABIRINT) {
			switch (e->KeyValue) {
			case 27: onaction = act_BREAK; Refresh(); break;
			case 115: onaction = act_LABIRINTPATH; Refresh(); break;
			case 37: case 38: case 39: case 40:
				LabirintKeys(e->KeyValue);
				Refresh();
				break;
			default:;
			};*/

		if (onaction == act_LABIRINT) {
			switch (e->KeyCode) {
			case Keys::Escape: onaction = act_BREAK; Refresh(); break;
			case Keys::F4: onaction = act_LABIRINTPATH; Refresh(); break;
			case Keys::Left: case Keys::Up: case Keys::Right: case Keys::Down:
				LabirintKeys(static_cast<int>(e->KeyCode));
				Refresh();
				break;
			default:;
			}

		}
	};




	private: System::Void выборомПоВозрастаниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		TB_Titul->Text = "Сортировка выбором по возрастанию. ";
		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра" };
		string nSort[20]{};
		string buf;
		bool dir = false;

		for (int i = 0; i < 20; i++) {
			nSort[i] = slova[i];
		}

		for (int i = 0; i < 20 - 1; i++) {
			for (int n = i + 1; n < 20; n++) {
				if ((nSort[i] > nSort[n]) ^ dir) {
					if (false) {
						buf = nSort[i];
						nSort[i] = nSort[n];
						nSort[n] = buf;
					}
					else //Перестановка без буфера
						nSort[i].swap(nSort[n]);
				}
			}

		}

		LB_Oytput->Items->Add("\nРезультаты : ");
		LB_Oytput->Items->Add("\n");

		std::ostringstream oss;
		for (int i = 0; i < 20; i++) {
			oss << std::left << std::setw(30) << slova[i];
			oss << std::left << std::setw(10) << nSort[i];
			System::String^ outputString = gcnew System::String(oss.str().c_str());
			LB_Oytput->Items->Add(outputString);
			oss.str(""); // Очищаем строковый поток

			;


		}


	}


	private: System::Void выборомПоУбываниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		TB_Titul->Text = "Сортировка выбором по убыванию. ";
		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра"
		};
		string nSort[20]{};
		string buf;
		bool dir = true;

		for (int i = 0; i < 20; i++) {
			nSort[i] = slova[i];
		}

		for (int i = 0; i < 20 - 1; i++) {
			for (int n = i + 1; n < 20; n++) {
				if ((nSort[i] > nSort[n]) ^ dir) {
					if (false) {
						buf = nSort[i];
						nSort[i] = nSort[n];
						nSort[n] = buf;
					}
					else //Перестановка без буфера
						nSort[i].swap(nSort[n]);
				}
			}

		}

		LB_Oytput->Items->Add("\nРезультаты : ");
		LB_Oytput->Items->Add("\n");

		std::ostringstream oss;
		for (int i = 0; i < 20; i++) {
			oss << std::left << std::setw(30) << slova[i];
			oss << std::left << std::setw(30) << nSort[i];
			System::String^ outputString = gcnew System::String(oss.str().c_str());
			LB_Oytput->Items->Add(outputString);
			oss.str(""); // Очищаем строковый поток
		}
	}
	private: System::Void пузырькомПоВозрастаниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		TB_Titul->Text = "Сортировка пузырьком по возрастанию. ";
		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра" };
		string nSort[20]{};
		string buf;
		bool dir = false;
		bool przn = 0;

		for (int i = 0; i < 20; i++) {
			nSort[i] = slova[i];
		}

		do {
			przn = false;
			for (int i = 0; i < 20 - 1; i++) {
				if ((nSort[i].compare(nSort[i + 1]) > 0) ^ dir) {
					nSort[i].swap(nSort[i + 1]);
					przn = true;
				}
			}
		} while (przn);

		LB_Oytput->Items->Add("\nРезультаты : ");
		LB_Oytput->Items->Add("\n");

		std::ostringstream oss;
		for (int i = 0; i < 20; i++) {
			oss << std::left << std::setw(30) << slova[i];
			oss << std::left << std::setw(30) << nSort[i];
			System::String^ outputString = gcnew System::String(oss.str().c_str());
			LB_Oytput->Items->Add(outputString);
			oss.str(""); // Очищаем строковый поток


		}

	}



	private: System::Void пузырькомПоУбываниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearToNewTask();
		TB_Titul->Text = "Сортировка пузырьком по убыванию ";
		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра" };
		string nSort[20]{};
		string buf;
		bool dir = true;
		bool przn = 0;

		for (int i = 0; i < 20; i++) {
			nSort[i] = slova[i];
		}

		do {
			przn = false;
			for (int i = 0; i < 20 - 1; i++) {
				if ((nSort[i].compare(nSort[i + 1]) > 0) ^ dir) {
					nSort[i].swap(nSort[i + 1]);
					przn = true;
				}
			}
		} while (przn);

		LB_Oytput->Items->Add("\nРезультаты : ");
		LB_Oytput->Items->Add("\n");

		std::ostringstream oss;
		for (int i = 0; i < 20; i++) {
			oss << std::left << std::setw(30) << slova[i];
			oss << std::left << std::setw(30) << nSort[i];
			System::String^ outputString = gcnew System::String(oss.str().c_str());
			LB_Oytput->Items->Add(outputString);
			oss.str(""); // Очищаем строковый поток


		}
	}



		   void QSortRec(int nFirst, int nEnd, int dir, string slova[], string nSort[]) {


			   string midle = nSort[(nEnd + nFirst) / 2];

			   int i = nFirst, j = nEnd;
			   do {
				   while ((nSort[i].compare(midle) * dir < 0)) i++;
				   while ((nSort[j].compare(midle) * dir > 0)) j--;
				   if (i <= j) {
					   nSort[i].swap(nSort[j]);
					   i++;
					   j--;
				   }
			   } while (i < j);
			   if (nFirst < j) QSortRec(nFirst, j, dir, slova, nSort);
			   if (i < nEnd) QSortRec(i, nEnd, dir, slova, nSort);
		   }



		   int QSort(int dir, string slova[], string nSort[]) {
			   cout << "Быстрая сортировка\n" << endl;
			   clock_t t_start = _Xtime_get_ticks();

			   for (int i = 0; i < 20; i++) {
				   nSort[i] = slova[i];
			   }


			   QSortRec(0, 19, dir, slova, nSort);


			   std::ostringstream oss;
			   for (int i = 0; i < 20; i++) {
				   oss << std::left << std::setw(30) << slova[i];
				   oss << std::left << std::setw(30) << nSort[i];
				   System::String^ outputString = gcnew System::String(oss.str().c_str());
				   LB_Oytput->Items->Add(outputString);
				   oss.str(""); // Очищаем строковый поток


			   }

			   clock_t t_end = _Xtime_get_ticks();
			   return t_end - t_start;
		   }



	private: System::Void быстраяСортировкаПоВозрастаниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		int timeproc = 0;//Время затраченное на процесс


		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра" };
		string nSort[20]{};

		TB_Titul->Text = "Быстрая сортировка по возрастанию. ";
		timeproc = QSort(1, slova, nSort);
		//Print("Время выполнения сортировки " + to_string(timeproc) + " В тиках\n\n");


	}
	private: System::Void быстраяСортировкаПоУбываниюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		int timeproc = 0;//Время затраченное на процесс


		string slova[20]{
		"Авиатор",
		"Шарф",
		"Карусель",
		"Медитация",
		"Парадокс",
		"Арбуз",
		"Философия",
		"Пикник",
		"Меланхолия",
		"Галактика",
		"Молния",
		"Капучино",
		"Американо",
		"Школа",
		"Парусник",
		"Вагнер",
		"Иллюзия",
		"Компас",
		"Аметист",
		"Игра"
		};
		string nSort[20]{};

		TB_Titul->Text = "Быстрая сортировка по убыванию. ";
		timeproc = QSort(-1, slova, nSort);
		//Print("Время выполнения сортировки " + to_string(timeproc) + " В тиках\n\n");


	}
	private: System::Void семестр1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		//T();
		Recursion2();
		onaction = act_RECURSION1;
		Refresh();
	}
	private: System::Void семестр2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		Recursion();
		onaction = act_RECURSION;
		Refresh();

	}
	private: System::Void классыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void рисованиеФигурToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearToNewTask();
		TB_Titul->Text = ("Отрисовка фигур. \r\n\nТругольник. Эллипс. Прямоугольник.");


	}

	};
}
