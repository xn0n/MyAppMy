#pragma once
#include "Header.h"
#include <Windows.h>
#include<string>
#include"MyForm.h"
 


using namespace System::Drawing;
using namespace System;

typedef
struct _stRectItem {
	int nIdSet;		//Индефикатор набора данных
	double nValue1,	//Значение 1
		nValue2;	//Значение2

	_stRectItem() :nIdSet(0), nValue1(0), nValue2(0) {}
	_stRectItem(int pID, double pValue1, double pValue2) : nIdSet(pID), nValue1(pValue1), nValue2(pValue2) {}

}stRecItem, * pstRecItem;

typedef struct _stRecursion {
	int nID;
	double nValue, nSum;
	_stRecursion() {
		nID = 0;
		nValue = 0;
		nSum = 0;
	}
} stRecursion, * pstRecursion;


static CURSORINFO pci;

void Recursion();

void DrawGraf2(Graphics^ pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect);
void DrawGraf(Graphics^ pgraph, pstRecursion pRec, int pnSizeRec, RECT pstRect);
//void DrawGrafSemestr1(stRect prect, stRecursion& pRecData);
void DrawAxisX(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 4);
void DrawAxisY(Graphics^ pgraph, RECT pArea, float pnMin, float pnMax, int pnSec = 4);
void DrawTextRotate(Graphics^ pgraph, String^ ptext, System::Drawing::Rectangle prect, Font^ pfont, Brush^ pbrush, float angle);
void DrawSideText(Graphics^ gr, Font^ font, Brush^ brush, RECT bounds, StringFormat string_format, String^ txt);
float nNext(float x, float nSum, int i, float nXi, pstRecursion pstRec);
