#pragma once
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include "MyFunction.h"
#include <bitset>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <io.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//using namespace System::Windows::Forms::DataVisualization::Charting;


typedef enum _Action {
	act_LABIRINT,
	act_RECURSION,
	act_NONE,
	act_LABIRINTEXT,
	act_LABIRINTPATH,
	act_BREAK,
	act_RECURSION1

} MyAction, * pMyAction;


using namespace std;



