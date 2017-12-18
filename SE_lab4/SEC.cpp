// SEC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "View.h"
#include <windows.h>

int timer(int ms, int numCntActions);

int main(){
	Accumulator *kek = new Accumulator(true,12.1,11.1, 5000, "Li-On");
	View3 foo = View3(kek);
	foo.display();
	*kek = "Ba-On";
	foo.display();
	timer(1500,4);
    return 0;
}
