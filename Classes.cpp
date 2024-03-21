#include "Header.h"
#include<fstream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <string>

void StringToChar(String^ s, std::string& os);
String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);
int GetValueInt(std::string ptext);




using namespace System;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;


extern int GetValueInt(std::string ptext);
extern std::string GetName(std::string ptext);


class CID {
	//идентефикатор объекта
protected:
	int nid;
	std::string sname;		//имя класса
public:
	CID() :nid(0), sname("CID") {}
	CID(int pid, std::string pname = "CID") :nid(pid), sname(pname) {}

	int GetId() { return nid; }
	void SetId(int pid) { nid = pid; }
	int ID() { return nid; }
	std::string GetName() { return sname; }
	virtual void SetName(std::string pname) { sname = pname; }
};
class CFigura : public CID {
protected:
	int nx,				//координата левого верхнего угла прямоугольника по оси х
		ny,				//координата левого верхнего угла прямоугольника по оси y
		nWidth,			//ширина фигуры
		nHeight;		//высота фигуры
	int brushcolor,		//цвет заливки(кисти)
		pencolor;		//цвет контура(пера)

public:
	CFigura() : nx(0), ny(0), nWidth(100), nHeight(50), brushcolor(RGB(255, 15, 245)), pencolor(RGB(128, 0, 128)) {
		sname = "CFigura";
	}
	CFigura(int pnx, int pny) : nx(pnx), ny(pny) {
		nWidth = 100, nHeight = 50, brushcolor = RGB(255, 15, 245), pencolor = RGB(128, 128, 128), sname = "CFigura";
	}
	CFigura(int pnx, int pny, int pnWidth, int pnHeight) {
		nx = pnx, ny = pny, nWidth = pnWidth, nHeight = pnHeight, brushcolor = RGB(255, 10, 245), pencolor = RGB(128, 128, 128), sname = "CFigura";
	}
	CFigura(int pnx, int pny, int pid) : nx(pnx), ny(pny), CID(pid, "CFigura") {
		nWidth = 100, nHeight = 50, brushcolor = RGB(255, 15, 245), pencolor = RGB(128, 128, 128);
	}

	int X() { return nx; }
	void X(int px) { nx = px; }
	int Y() { return ny; }
	void Y(int py) { ny = py; }

	int Width() { return nWidth; }
	void Width(int pWidth) { nWidth = pWidth; }
	int Height() { return nHeight; }
	void Height(int pHeight) { nHeight = pHeight; }

	int BrushColor() { return brushcolor; }
	void BrushColor(int pbcolor) { brushcolor = pbcolor; }
	int PenColor() { return pencolor; }
	void PenColor(int ppcolor) { pencolor = ppcolor; }

	int Left() { return nx; }
	int Top() { return ny; }
	int Right() { return nx + nWidth; }
	int Bottom() { return ny + nHeight; }

	int MiddleX() { return nx + nWidth / 2; }
	int MiddleY() { return ny + nHeight / 2; }

	void Move(int px, int py, bool anime = false) {
		if (anime) {
			int dx = (px - nx),
				dy = (py - ny);
			for (int i = 1; i < 30; i++) {
				nx = nx + dx * i / 30;
				ny = ny + dy * i / 30;
				Sleep(100 / i);
			}
		}
		else {
			nx = px;
			ny = py;
		}
	}



	virtual void Draw(System::Drawing::Graphics^ graph) = 0;

};

class CRectangle : public CFigura {
public:
	CRectangle() { CID::sname = "Прямоугольник"; }
	CRectangle(int pnx, int pny) :CFigura(pnx, pny) { CID::sname = "Прямоугольник"; }
	CRectangle(int pnx, int pny, int pnWidth, int pnHeight) : CFigura(pnx, pny, pnWidth, pnHeight) { CID::sname = "Прямоугольник"; }
	CRectangle(int pnx, int pny, int pid) :CFigura(pnx, pny, pid) { CID::sname = "Прямоугольник"; }


	void Draw(System::Drawing::Graphics^ graph) {

		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::FromArgb(255, GetRValue(pencolor), GetGValue(pencolor), GetBValue(pencolor)));
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
		System::Drawing::Rectangle rc(nx, ny, nWidth, nHeight);

		graph->FillRectangle(brush, rc);
		graph->DrawRectangle(pen, rc);

		int clr = -brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nid);
		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class CTriangle :public CFigura {
public:
	CTriangle() {
		brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Треугольник";
	}
	CTriangle(int pnx, int pny) :CFigura(pnx, pny) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Треугольник"; }
	CTriangle(int pnx, int pny, int pnWidth, int pnHeight) : CFigura(pnx, pny, pnWidth, pnHeight) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Треугольник"; }
	CTriangle(int pnx, int pny, int pid) :CFigura(pnx, pny, pid) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Треугольник"; }

	void Draw(System::Drawing::Graphics^ graph) {

		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::FromArgb(255, GetRValue(pencolor), GetGValue(pencolor), GetBValue(pencolor)));
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);

		PointF pt1 = PointF((float)nx + nWidth / 2, (float)ny);
		PointF pt2 = PointF((float)nx + nWidth, (float)ny + nHeight);
		PointF pt3 = PointF((float)nx, (float)ny + nHeight);
		PointF pt4 = PointF((float)pt1.X, (float)pt1.Y);
		cli::array<PointF, 1>^ pt = { pt1, pt2, pt3, pt4 };

		graph->FillPolygon(brush, pt);
		graph->DrawPolygon(pen, pt);

		int clr = -brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nid);
		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class CEllipse : public CFigura {
public:
	CEllipse() { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Эллипс"; };
	CEllipse(int pnx, int pny) :CFigura(pnx, pny) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Эллипс"; }
	CEllipse(int pnx, int pny, int pnWidth, int pnHeight) : CFigura(pnx, pny, pnWidth, pnHeight) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Эллипс"; }
	CEllipse(int pnx, int pny, int pid) :CFigura(pnx, pny, pid) { brushcolor = RGB(55, 250, 45); pencolor = RGB(255, 250, 245); CID::sname = "Эллипс"; }
	void Draw(System::Drawing::Graphics^ graph) {

		System::Drawing::Color bclr = System::Drawing::Color::FromArgb(255, GetRValue(brushcolor), GetGValue(brushcolor), GetBValue(brushcolor));
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(bclr);
		System::Drawing::Pen^ pen = gcnew Pen(Color::FromArgb(255, GetRValue(pencolor), GetGValue(pencolor), GetBValue(pencolor)));
		System::Drawing::Font^ font = gcnew Font("Times New Roman", 12);
		System::Drawing::Rectangle rc(nx, ny, nWidth, nHeight);

		graph->FillEllipse(brush, rc);
		graph->DrawEllipse(pen, rc);

		int clr = -brushcolor;
		brush->Color = Color::FromArgb(GetRValue(clr), GetGValue(clr), GetBValue(clr));
		String^ text = Convert::ToString(nid);
		graph->DrawString(text, font, brush, MiddleX() - 5, MiddleY() - 5);
	}
};

class CUnion : public CID {
	CFigura* fig1, * fig2;
	int color,
		width;
public:
	CUnion(CFigura* pfig1 = NULL, CFigura* pfig2 = NULL) : fig1(pfig1), fig2(pfig2) { color = RGB(255, 255, 0); width = 5; }
	~CUnion() { fig1 = 0; fig2 = 0; }

	CFigura* GetFigura1() { return fig1; }
	CFigura* GetFigura2() { return fig2; };
	void SetFigura1(CFigura* pfig = 0) { fig1 = pfig; }
	void SetFigura2(CFigura* pfig = 0) { fig2 = pfig; }
	void Add(CFigura* pf1, CFigura* pf2) { fig1 = pf1; fig2 = pf2; }
	int GetColor() { return color; }
	void SetColor(int color) { this->color = color; }
	int GetWidth() { return width; };
	void SetWidth(int width) { this->width = width; };

	CUnion* GetUnion(int index);
	void Draw(System::Drawing::Graphics^ graph) {
		Pen^ pen = gcnew Pen(Color::Black, 3);
		graph->DrawLine(pen, fig1->MiddleX(), fig1->MiddleY(), fig2->MiddleX(), fig2->MiddleY());
	}
};
class CManager : public CID {
private:
	CFigura** ofigury;		//динамический массив объектов
	int ncount;
	CUnion** ounions; //это динамический массив элементов CUnion
	int nunion;
public:
	CManager() :ofigury(NULL), ncount(0), ounions(NULL), nunion(0) {}
	CManager::~CManager() {
		for (int i = 0; i < ncount; i++) delete GetFigura(i);
		if (ofigury != NULL) delete ofigury;
		if (ounions != NULL) {
			CUnion* obj = 0;
			for (int i = 0; i < nunion; i++) {
				obj = ounions[i];
				delete obj;
			}
			delete ounions;
		}
	}

	int CManager::AddFigura(CFigura* pFigura) {
		if (pFigura == NULL) return -1;
		ofigury = (CFigura**)realloc(ofigury, sizeof(CFigura*) * (++ncount));
		ofigury[ncount - 1] = pFigura;
		return ncount - 1;
	}
	int CManager::AddUnion(CUnion* punion) {
		ounions = (CUnion**)realloc(ounions, sizeof(CUnion) * (++nunion));
		ounions[nunion - 1] = punion;
		return nunion - 1;
	}

	void Clear() {
		ofigury = (CFigura**)realloc(ofigury, 0);
		ncount = 0;
		ounions = (CUnion**)realloc(ounions, 0);
		nunion = 0;
	}
	CUnion* CManager::GetUnion(int index) {
		if (index < 0 || index >= nunion) return 0;
		return ounions[index];
	}

	int InsertFigura(CFigura* pFigura, int pIndex) {
		if (pFigura == NULL) return -1;
		if (pIndex < 0) pIndex = 0;
		if (pIndex >= ncount) return AddFigura(pFigura);

		ofigury = (CFigura**)realloc(ofigury, sizeof(CFigura*) * (++ncount));
		for (int i = ncount - 2; i >= pIndex; i--)
			ofigury[i + 1] = ofigury[i];

		ofigury[pIndex] = pFigura;
		return pIndex;
	}
	int Size() { return ncount; }
	void Safe(std::string pfile) {
		std::ofstream fout;
		fout.open(pfile);
		if (!fout) return;			//если файл открыт с ошибкой или не смог открыться, то выход из метода

		for (int i = 0; i < ncount; i++) {		//сохранили все объекты фигуры
			CFigura* figura = ofigury[i];
			if (figura == NULL) continue;
			fout << figura->GetName() << "\n";
			fout << "id=" << figura->GetId() << "\n";
			fout << "x=" << figura->X() << "\n";
			fout << "y=" << figura->Y() << "\n";
			fout << "width=" << figura->Width() << "\n";
			fout << "height=" << figura->Height() << "\n";
			fout << "bcolor=" << figura->BrushColor() << "\n";
			fout << "pcolor=" << figura->PenColor() << "\n";
			fout << "end\n";
		}
		for (int i = 0; i < nunion; i++) {		//сохраним все линии
			CUnion* ounion = GetUnion(i);
			fout << ounion->GetName() << "\n";
			fout << "figura1=" << ounion->GetFigura1()->ID() << "\n";
			fout << "figura2=" << ounion->GetFigura2()->ID() << "\n";
			fout << "width=" << ounion->GetWidth() << "\n";
			fout << "color=" << ounion->GetColor() << "\n";
			fout << "end\n";
		}
		fout.close();
	}

	void Load(std::string pfile) {
		std::ifstream fin(pfile, std::ios::beg);
		std::string sline{}, sname{};
		CFigura* figura = 0, * figura2 = 0;
		CUnion* ounion = 0;
		while (fin) {
			getline(fin, sline);
			sname = GetFName(sline);
			figura = 0;
			ounion = 0;
			if (sname.compare("Прямоугольник") == 0) figura = new CRectangle;
			if (sname.compare("Треугольник") == 0) figura = new CTriangle;
			if (sname.compare("Эллипс") == 0) figura = new CEllipse;
			if (sname.compare("CID") == 0) ounion = new CUnion;
			if (figura != 0) {
				while (fin && sname.compare("end") != 0) {
					fin >> sline;
					sname = GetFName(sline);
					if (sname.compare("id") == 0) figura->SetId(GetValueInt(sline)); else
						if (sname.compare("x") == 0) figura->X(GetValueInt(sline)); else
							if (sname.compare("y") == 0) figura->Y(GetValueInt(sline)); else
								if (sname.compare("width") == 0) figura->Width(GetValueInt(sline)); else
									if (sname.compare("height") == 0) figura->Height(GetValueInt(sline)); else
										if (sname.compare("bcolor") == 0) figura->BrushColor(GetValueInt(sline)); else
											if (sname.compare("pcolor") == 0) figura->PenColor(GetValueInt(sline)); else
												if (sname.compare("end") == 0) AddFigura(figura);

				}
			}
			if (ounion != 0)
				while (fin && sname.compare("end") != 0) {
					fin >> sline;
					sname = GetFName(sline);
					if (sname.compare("figura1") == 0) {
						int nid = GetValueInt(sline);
						figura = this->GetFigura(nid);
						ounion->SetFigura1(figura);
					}
					else
						if (sname.compare("figura2") == 0) {
							int nid = GetValueInt(sline);
							figura2 = this->GetFigura(nid);
							ounion->SetFigura2(figura2);
						}
						else
							if (sname.compare("width") == 0) ounion->SetWidth(GetValueInt(sline)); else
								if (sname.compare("color") == 0) ounion->SetColor(GetValueInt(sline)); else

									if (sname.compare("end") == 0 && figura != 0 && figura2 != 0) this->AddUnion(ounion);
				}
		}
	}
	CFigura* GetFigura(int pX, int pY) {
		CFigura* fig = 0;
		for (int i = 0; i < ncount; i++) {
			fig = ofigury[i];
			if ((fig->X() <= pX) && (pX <= fig->Right()) && (fig->Y() <= pY) && (pY <= fig->Bottom())) {
				return fig;
			}
			fig = 0;
		}
		return fig;
	}
	CFigura* GetFigura(int pindex) {
		if ((pindex < 0) || (pindex >= ncount)) return NULL;
		return ofigury[pindex];
	}

	CFigura* GetFiguraId(int pid) {
		for (int i = 0; i < ncount; i++) {
			if (ofigury[i]->GetId() == pid) return ofigury[i];
		}
		return NULL;
	}

	void Draw(System::Drawing::Graphics^ graph) {
		for (int i = 0; i < nunion; i++) ounions[i]->Draw(graph);
		for (int i = 0; i < ncount; i++) ofigury[i]->Draw(graph);
	}
	void Draw(std::string pcname, System::Drawing::Graphics^ graph) {
		for (int i = 0; i < ncount; i++) {
			if (ofigury[i]->GetName().compare(pcname) == 0) ofigury[i]->Draw(graph);
		}
	}
	std::string GetFName(std::string ptext) {
		if (ptext.empty()) return "";

		std::string text{ "   " };
		int npos = ptext.find("=");
		if (npos > 0) {
			char* ctext = new char[42] { 0 };
			ptext.copy(ctext, npos);
			text = ctext;
			delete[] ctext;
			return text;
		}
		return ptext;
	}
	int GetValueInt(std::string ptext) {
		if (ptext.empty()) return 0;
		int npos = ptext.find("="),
			nval = atoi(ptext.substr(npos + 1).c_str());
		return nval;
	}


};