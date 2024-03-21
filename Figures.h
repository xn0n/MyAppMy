#pragma once
#include "Header.h"
#include <iostream>

namespace MyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Figures
	/// </summary>
	public ref class Figures : public System::Windows::Forms::Form
	{
	public:
		Figures(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Figures()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pb_Box1;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pb_Box1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Box1))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_Box1
			// 
			this->pb_Box1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pb_Box1->Location = System::Drawing::Point(0, 0);
			this->pb_Box1->Name = L"pb_Box1";
			this->pb_Box1->Size = System::Drawing::Size(923, 484);
			this->pb_Box1->TabIndex = 0;
			this->pb_Box1->TabStop = false;
			this->pb_Box1->Click += gcnew System::EventHandler(this, &Figures::pb__Click);
			// 
			// Figures
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 484);
			this->Controls->Add(this->pb_Box1);
			this->Name = L"Figures";
			this->Text = L"Figures";
			this->Load += gcnew System::EventHandler(this, &Figures::Figures_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Box1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Figures_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:
		void DrawFigure() {
			Graphics^ g1 = CreateGraphics();
			Brush^ b = gcnew SolidBrush(Color::Blue);
			//Panel->Visible = false;
			//pictureBox1->Visible = true;
			int x = Convert::ToInt32(50);
			int y = Convert::ToInt32(50);
			int w = Convert::ToInt32(185);
			int h = Convert::ToInt32(100);
			Point p1 = Point(x + 200 + w / 2, y);
			Point p2 = Point(x + 200, h + y);
			Point p3 = Point(x + 200 + w, h + y);
			//g->Clear(SystemColors::Control);
			g1->FillRectangle(b, x, y, w, h);
			Point^ points = { p1 };
			Brush^ b1 = gcnew SolidBrush(Color::Red);
			Brush^ b2 = gcnew SolidBrush(Color::Green);
			
			g1->FillEllipse(b2, x, y + 200, w, h);
		}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pb__Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = CreateGraphics();
		//g->Clear(Color::White);
		//Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b = gcnew SolidBrush(Color::Blue);
		int x = 1;
		int y = 20;
		int w = 1;
		int h = 2;

		g->FillRectangle(b, x, y, w, h);

		Graphics^ g1 = CreateGraphics();
		//g->Clear(Color::White);
		//Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b1 = gcnew SolidBrush(Color::Aqua);
		int x1 = 1;
		int y1 = 20;
		int w1 = 1;
		int h1 = 5;

		Point p1 = Point(x + w / 2, y);
		Point p2 = Point(x, h + y);
		Point p3 = Point(x + w, h + y);
		Point^ points = { p1 };


		Graphics^ g2 = CreateGraphics();
		//g->Clear(Color::White);
		//Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));
		Brush^ b2 = gcnew SolidBrush(Color::Red);
		int x2 = 1;
		int y2 = 20;
		int w2 = 1;
		int h2 = 3;

		g2->FillEllipse(b2, x2, y2, w2, h2);
	}
};
}
