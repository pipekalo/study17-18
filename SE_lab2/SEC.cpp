// SEC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "View.h"
#include <windows.h>


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Data *kek = new Data(true,12.0,11);
	View ses = View(kek);
	View2 sas = View2(kek);
	Data kek1 = Data(true,12.0,11);
	sas.PrintData(kek1);
	ses.showelem();
    return 0;
}

