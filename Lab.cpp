#include"Lab.h"


using namespace System::Drawing;

int nSR = 0, nSC = 2, nFR = 8, nFC = 31;

const int nL = 32, nC = 32;
UINT nRow = 0, nCol = 2;
UINT bit = 0b1000'0000'0000'0000'0000'0000'0000'0000;
//UINT nRow = 0, nCol = 2;

UINT* nMov = 0, * nPath = 0;

UINT nCash = 0;
COORD position;

int nWBlock = 16, nHBlock = 16,
nLC = 500, nTC = 200;

UINT nLab[nL] = {
0b10111111111111111111111111111111,
0b10100000000000000000010001000111,
0b10101011011010111101010101010111,
0b10001011010010111101010101010111,
0b10111111010110111101000100010101,
0b10100000010110111101111111110101,
0b10001011110110000000000000000001,
0b11111010000111111111111111111011,
0b10011011111100001000100000000000,
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
0b11111111111111111111111111111101 };



//// полуглобальные переменные будут

int StartMoving(System::Drawing::Graphics^ graph) {
    nMov = new(UINT[nL]);
    memset(nMov, 0, sizeof(UINT) * nL);
    nPath = new UINT[nL];
    memset(nPath, 0, sizeof(UINT) * nL);

    int res = Moving(nRow, nCol, graph, false);
    delete nMov;
    return res;
}

/*int StartMoving(System::Drawing::Graphics^ graph) {
    nMov = new UINT[nL];
    memset(nMov, 0, sizeof(UINT) * nL);
    nPath = new UINT[nL];
    memset(nPath, 0, sizeof(UINT) * nL);

    int res = Moving(nRow, nCol, graph, false);
    delete[] nMov;
    delete[] nPath;
    return res;
}*/


//t Moving(char nRow, char nCol, const BOOL pkey) {

int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, const BOOL pKey) {				// Функция маршрута правильного пути, рекурсия
    //int Moving(char pnRow, char pnCol, System::Drawing::Graphics^ graph, System::Drawing::SolidBrush^ brush, const BOOL pKey) {
    int nRes = 0;

    System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
    System::Drawing::Color clr = System::Drawing::Color::Yellow;

    System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);
    //System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Yellow);
    rcBlock.Y = nTC + pnRow * nHBlock;
    rcBlock.X = nLC + nWBlock * pnCol;
    graph->FillRectangle(brush, rcBlock);

    nMov[pnRow] |= bit >> pnCol;
    nPath[pnRow] |= bit >> pnCol;


    if ((pnRow == nFC) && (pnCol == nFR)) return 99;

    if (pnRow - 1 >= 0)
        if (!(nLab[pnRow - 1] & (bit >> pnCol)) && !((nMov[pnRow - 1] & (bit >> pnCol)))) {
            nRes = Moving(pnRow - 1, pnCol, graph, pKey);
            if (nRes) { return nRes; }
        }
    if (pnRow - 1 >= 0)
        if (!(nLab[pnRow] & (bit >> (pnCol - 1))) && !(nMov[pnRow] & (bit >> (pnCol - 1)))) {
            nRes = Moving(pnRow, pnCol - 1, graph, pKey);
            if (nRes) return nRes;
        }
    if (pnCol + 1 <= nC)
        if (!(nLab[pnRow] & (bit >> (pnCol + 1))) && !(nMov[pnRow] & (bit >> (pnCol + 1)))) {
            nRes = Moving(pnRow, pnCol + 1, graph, pKey);
            if (nRes) return nRes;
        }
    if (pnRow + 1 <= nL)
        if (!(nLab[pnRow + 1] & (bit >> (pnCol))) && !(nMov[pnRow + 1] & (bit >> pnCol))) {
            nRes = Moving(pnRow + 1, pnCol, graph, pKey);
            if (nRes) return nRes;
        }




    brush->Color = Color::Black;
    //brush->Color = Color::Yellow;
    graph->FillRectangle(brush, rcBlock);
    nPath[pnRow] &= ~(bit >> pnCol);
    return 0;


}



void LabirintKeys(int pkey) {
    switch (pkey) {
        //case 27:break;
    case 37:
        if (nCol - 1 < 0 || nLab[nRow] & (bit >> (nCol - 1))) Beep(750, 300); else nCol--;
        break;
    case 38:
        if (nRow == 0 || (nLab[nRow - 1] & (bit >> nCol))) Beep(750, 300); else nRow--;
        break;
    case 39:
        if (nCol + 1 > nC || nLab[nRow] & (bit >> (nCol + 1))) Beep(750, 300); else nCol++;
        break;
    case 40:
        if (nRow == nL || nLab[nRow + 1] & (bit >> nCol)) Beep(750, 300); else nRow++;
        break;
    }
}




MyAction LabirintDraw(System::Drawing::Graphics^ graph) {
    //void Labirint() {

    //}

    UINT i, j;



    // Отрисовка места под лабиринт
    System::Drawing::Rectangle rc(nLC, nTC, nWBlock * nL, nHBlock * nC);
    System::Drawing::Rectangle rcBlock(0, 0, nWBlock, nHBlock);
    System::Drawing::Color clr = System::Drawing::Color::FromArgb(255, 192, 192, 192);
    //Color clrIO = Color::FromArgb(0);
    System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(clr);
    graph->FillRectangle(brush, rc); // Отрисовка поля лабиринта





    for (i = 0; i < nL; i++) {
        rcBlock.Y = nTC + i * nHBlock;
        for (j = 0; j < nC; j++) {
            rcBlock.X = nLC + nWBlock * j;


            if ((i == nRow) && (j == nCol))
            {
                brush->Color = Color::Blue;
                graph->FillRectangle(brush, rcBlock);
            }
            else
                if ((i == nSR) && (j == nSC) || ((i == nFR) && (j == nFC))) {
                    brush->Color = Color::Red;
                    graph->FillRectangle(brush, rcBlock);
                }
                else
                    if (!(nLab[i] & (bit >> j))) {
                        if ((nPath != 0) && (nPath[i] & (bit >> j)))
                            brush->Color = Color::Yellow;
                        else
                            brush->Color = Color::Black;
                        graph->FillRectangle(brush, rcBlock);
                    }
        }
    }
    if ((nRow == nFR) && (nCol == nFC)) return act_LABIRINTEXT; else return act_LABIRINT;



}

