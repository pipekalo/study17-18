// SEC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "View.h"
#include "timer.h"
#include "SEC.h"

int main(){
	/*Accumulator *kek = new Accumulator(true,12.1,11.1, 5000, "Li-On");
	View3 foo = View3(kek);
	foo.display();
	*kek = "Ba-On";
	foo.display();
	timer(1500,4);*/
	cout << "Test of data storage work: " << endl;
	cout << "Before load: " << endl;
	Accumulator *tmp = new Accumulator(true,4,5,4700,"Li-On");
	CFileStorage* storage = CFileStorage::Create(*tmp, "datafile.tst");
	View test = View(tmp);
	bool success = storage->Store();
	if (!success) {
		cerr << "Storing returned error: " << storage->GetLastError() << endl;
	}
	test.display();
	success = storage->Load();
	if (!success) {
		cerr << "Loading returned error: " << storage->GetLastError() << endl;
	}
	else {
		cout << "After load: " << endl;
	}
	test.display();
    return 0;
}
