#include"MyForm.h"
#include"Recursion.h"
#include<string.h>
#include<stdlib.h>
#include"MyFormInput.h"


namespace MyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Maze
	/// </summary>
	public ref class Maze : public System::Windows::Forms::Form
	{
	public:
		Maze(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		int* nMov = 0;

		const short START_X = 0,
			START_Y = 0,
			FINISH_X = 31,
			FINISH_Y = 17,
			L_WIDTH = 32,
			L_HEIGHT = 32;

		unsigned int bit = 0b10000000000000000000000000000000;

		short bx = 0,
			by = 0;
		int scale = 20;

		void redraw() {
			Graphics^ g = Maze::CreateGraphics();
			Brush^ bWall = gcnew SolidBrush(Color::Aqua);
			Brush^ bBack = gcnew SolidBrush(Color::Blue);
			Brush^ bStart = gcnew SolidBrush(Color::Red);
			Brush^ bFinish = gcnew SolidBrush(Color::Green);
			Brush^ bBug = gcnew SolidBrush(Color::Yellow);
			if (bx == START_X && by == START_Y) g->FillRectangle(bStart, bx * scale, by * scale, scale, scale);
			else if (bx == FINISH_X && by == FINISH_Y) g->FillRectangle(bFinish, bx * scale, by * scale, scale, scale);
			else g->FillRectangle(bBack, bx * scale, by * scale, scale, scale);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Maze()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Maze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 582);
			this->Name = L"Maze";
			this->Text = L"";
			this->Load += gcnew System::EventHandler(this, &Maze::Maze_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Maze::Maze_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Maze::Maze_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Maze::Maze_KeyPress);
			this->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Maze::Maze_PreviewKeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Maze_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Maze_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = Maze::CreateGraphics();
		Brush^ bWall = gcnew SolidBrush(Color::Aqua);
		Brush^ bBack = gcnew SolidBrush(Color::Blue);
		Brush^ bStart = gcnew SolidBrush(Color::Red);
		Brush^ bFinish = gcnew SolidBrush(Color::Green);
		Brush^ bBug = gcnew SolidBrush(Color::Yellow);
		unsigned int map[32] =
		{ 
0b10111111111111111111111111111111,
0b10100000000000000000010001000111,
0b10101011011010111101010101010111,
0b10001011010010111101010101010111,
0b10111111010110111101000100010111,
0b10100000010110111101111111110111,
0b10001011110110000000000000000011,
0b11111010000111111111111111111011,
0b10011011111100001000100000000011,
0b10100010001111101010001111111111,
0b10101100100000001011111100010011,
0b10001101111110100011000101000111,
0b11101100000000111100010101111111,
0b11101111101110000101110001111111,
0b11100011101111110000111111110001,
0b11111011101100001110111000000101,
0b11010001101101100000001010111101,
0b11010101101100011111101111111101,
0b11010100101001110001100000000001,
0b11000110101101100101111111111111,
0b11010110000000001101000110001111,
0b11000110101001100000010110101111,
0b11011110111011101111110000100011,
0b11000000000011101111111111111011,
0b11111111111011000000000000000001,
0b11110000000011011111111111111101,
0b10000110101100000001000000011101,
0b11110010100001111101111101000001,
0b11011010001100010001000001111111,
0b11001011101111010111011111000001,
0b11100010001000010001000000011101,
0b11111111111111111111111111111101
		};
		g->Clear(Color::White);
		//Pen^ p = gcnew Pen(cdPenColor->Color, Convert::ToDouble(tbs->Text));

		for (int ny = 0; ny < 32; ny++) {
			for (int nx = 0; nx < 32; nx++) {
				if ((bit >> nx) & map[ny]) {
					//setColor(CLR_WALL);
					//cout << "??";
					g->FillRectangle(bWall, nx * scale, ny * scale, scale, scale);
				}
				else {
					if (nx == START_X && ny == START_Y) g->FillRectangle(bStart, nx * scale, ny * scale, scale, scale);
					else if (nx == FINISH_X && ny == FINISH_Y) g->FillRectangle(bFinish, nx * scale, ny * scale, scale, scale);
					else g->FillRectangle(bBack, nx * scale, ny * scale, scale, scale);
				}
			}
		}
		g->FillEllipse(bBug, bx * scale, by * scale, scale, scale);
	}
	private: System::Void Maze_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	}
	private: System::Void Maze_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//String^ s = Convert::ToString(e->KeyCode);
		//MessageBox::Show(s);
	}
	private: System::Void Maze_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
		Graphics^ g = Maze::CreateGraphics();
		Brush^ bWall = gcnew SolidBrush(Color::Aqua);
		Brush^ bBack = gcnew SolidBrush(Color::Blue);
		Brush^ bStart = gcnew SolidBrush(Color::Red);
		Brush^ bFinish = gcnew SolidBrush(Color::Green);
		Brush^ bBug = gcnew SolidBrush(Color::Yellow);
		unsigned int map[32] =
		{ 0b10111111111111111111111111111111,
	0b10100000000000000000010001000111,
	0b10101011011010111101010101010111,
	0b10001011010010111101010101010111,
	0b10111111010110111101000100010100,
	0b10100000010110111101111111110101,
	0b10001011110110000000000000000001,
	0b11111010000111111111111111111011,
	0b10011011111100001000100000000011,
	0b10100011111111111111111111111111,
	0b10001001000000000000000010010011,
	0b11010111001010011001001011101011,
	0b10010111001010100101001011101001,
	0b10101111000100100101001011110101,
	0b10101111000100011000110011110101,
	0b10101111000000000000000011110101,
	0b10101111000000000000000011110101,
	0b10101111010101001001001011110101,
	0b10010111010101000001101011101001,
	0b11010111010101001001011011101001,
	0b11001001001010001001001010010101,
	0b11000101000000000000000010100001,
	0b11010011111111111111111111011011,
	0b11010100110000000000001100000011,
	0b10010101001110000001110001110111,
	0b10110000100001111110001011000001,
	0b10000110101100000001000000011101,
	0b11110010100001111101111101000001,
	0b11011010001100010001000001111111,
	0b11001011101111010111011111000001,
	0b11100010001000010001000000011101,
	0b11111111111111111111111111111101
		};
		//String^ s = Convert::ToString(e->KeyCode);
		//MessageBox::Show(s);
		switch (e->KeyCode) {
			//case 63:
			//	nMov = new UINT[32]{ 0 };
			//	memset(nMov, 0, sizeof(UINT) * 32);
			//	moving(bx, by);
			//	delete[] nMov;
			//	break;
		case Keys::Up:
			if ((bit >> bx) & map[by - 1])
				//cout << "\a";
				void();
			else
			{
				redraw();
				by--;
			}
			break;
		case Keys::Down:
			if ((bit >> bx) & map[by + 1])
				//cout << "\a";
				void();
			else
			{
				redraw();
				by += 1;
			}
			break;
		case Keys::Left:
			if ((bit >> (bx - 1)) & map[by])
				void();
			else {
				redraw();
				bx -= 1;
			}
			break;
		case Keys::Right:
			if ((bit >> (bx + 1)) & map[by])
				void();
			else {
				redraw();
				bx += 1;
			}
			break;
			//case KEY_ESCAPE:
			//	setCaret(24, 16);
			//	setColor(0xC0);
			//	cout << "????????? ?????\n";
			//	goto end;
		}
		if (bx == FINISH_X && by == FINISH_Y) {
			MessageBox::Show("");
			delete(this);
		}
		g->FillEllipse(bBug, bx * scale, by * scale, scale, scale);
	}
	};
}
