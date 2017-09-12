// SEC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "View.h"
#include <windows.h>


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Data kek = Data(true,12.0,11);
	View ses = View(kek);
	ses.showelem();
    return 0;
}

