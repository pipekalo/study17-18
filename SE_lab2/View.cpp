#include "stdafx.h"
#include "View.h"

using namespace std;

View::View(){
}

View::View(Data *n_data){
	tmp = n_data;
}

View::~View(){
}

void View::showelem(){
	string str;
	if (tmp->getTypeCurrent()) {
		str = "A.C.";
	}
	else {
		str = "D.C.";
	}
	cout << "Type of electric current:" << str << endl;
	cout << "Current strength:" << tmp->amperage << endl;
	cout << "Voltage:" << tmp->voltage << endl;
}

void View2::SetDataSource(const Data * aData){
	this->tmp = aData;
}

void View2::PrintData(const Data &aData){
	wcout << wchar_t(218) << "------------" << wchar_t(191) << endl;
	wcout << wchar_t(179) <<"Type| V | A " << wchar_t(179) << endl;
	wcout << wchar_t(195) << "------------" << wchar_t(180) << endl;
	string tmp = "";
	if (aData.getTypeCurrent()) {
		 tmp = "A.C.";
	}
	else {
		 tmp = "D.C.";
	}
	cout << "|" << tmp << "|" << aData.voltage << " |" << aData.amperage << " |" <<  endl;
	wcout <<wchar_t(192) << "------------" <<wchar_t(217) << endl;
}


View2::View2(){
}

View2::View2(Data * n_data){
	tmp = n_data;
}

View2::~View2(){
}
