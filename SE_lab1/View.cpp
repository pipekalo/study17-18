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
		str = "����������";
	}
	else {
		str = "����������";
	}
	cout << "��� ����:" << str << endl;
	cout << "���� ����:" << tmp.amperage << endl;
	cout << "����������:" << tmp.voltage << endl;
}

