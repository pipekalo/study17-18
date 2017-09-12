#include "stdafx.h"
#include "View.h"

using namespace std;

View::View(){
}

View::View(Data n_data){
	tmp = n_data;
}

View::~View(){
}

void View::showelem(){
	string str;
	if (tmp.typeCurrent) {
		str = "Переменный";
	}
	else {
		str = "Постоянный";
	}
	cout << "Тип тока:" << str << endl;
	cout << "Сила тока:" << tmp.amperage << endl;
	cout << "Напряжение:" << tmp.voltage << endl;
}

