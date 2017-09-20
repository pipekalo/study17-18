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
		str = "Переменный";
	}
	else {
		str = "Постоянный";
	}
	cout << "Тип тока:" << str << endl;
	cout << "Сила тока:" << tmp->amperage << endl;
	cout << "Напряжение:" << tmp->voltage << endl;
}

void View2::SetDataSource(const Data * aData){
	this->tmp = aData;
}

void View2::PrintData(const Data &aData){
	cout << "--------------" << endl;
	cout << "|Type| V | A |" << endl;
	cout << "--------------" << endl;
	string tmp = "";
	if (aData.getTypeCurrent()) {
		 tmp = "A.C.";
	}
	else {
		 tmp = "D.C.";
	}
	cout << "|" << tmp << "|" << aData.voltage << " |" << aData.amperage << " |" <<  endl;
	cout << "--------------" << endl;
}


View2::View2(){
}

View2::View2(Data * n_data){
	tmp = n_data;
}

View2::~View2(){
}
