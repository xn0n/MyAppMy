#pragma once
#include "Header.h"

//void Labirint();
MyAction LabirintDraw(System::Drawing::Graphics^ graph);
void LabirintKeys(int pkey);
int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, const BOOL pKey);
int StartMoving(System::Drawing::Graphics^ graph);
