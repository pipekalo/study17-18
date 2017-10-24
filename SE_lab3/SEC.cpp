// SEC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "View.h"
#include <windows.h>


int main(){
	//setlocale(LC_ALL, "UTF-8");

	Accumulator *kek = new Accumulator(true,12.1,11.1, 5000, "Li-On");
	View sas = View(kek);
	sas.display();
	View2 s = View2(kek);
	s.display();
	View3 foo = View3(kek);
	foo.display();
    return 0;
}

