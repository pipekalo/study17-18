#include "stdafx.h"
#include "View.h"


BaseView::BaseView() {
}

BaseView::BaseView(Accumulator *tmp) {
	this->tmp = tmp;
}

BaseView::~BaseView() {
}

Accumulator * BaseView::getDataSource(){
	return tmp;
}

void BaseView::display() {
	showHeader();
	showContent();
	showFooter();
}

void BaseView::showHeader() {
	cout << "Information about battery:" << endl;
}

void BaseView::showContent(){
	const Accumulator *tmp = getDataSource();
	cout << tmp->getTypeCurrent() << endl;
	cout << tmp->amperage << endl;
	cout << tmp->voltage << endl;
}

void BaseView::showFooter() {
	for (int i = 0; i <= 40; i++){
		wcout << wchar_t(196);
	}
	cout << endl;
}

void BaseView::setDataSource(Accumulator * n_Data){
	this->tmp = n_Data;
}

View::View(){
}

View::View(Accumulator * n_data):BaseView(n_data){
}


View::~View(){
}

void View::showContent(){
	string str;
	const Accumulator *tmp = getDataSource();
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

View2::View2(){
}

View2::View2(Accumulator * n_data):BaseView(n_data){
}

View2::~View2(){
}

void View2::showContent() {
	wcout << wchar_t(218) << "----------------" << wchar_t(191) << endl;
	wcout << wchar_t(179) << "Type|  V  |  A  " << wchar_t(179) << endl;
	wcout << wchar_t(195) << "----------------" << wchar_t(180) << endl;
	string tmps = "";
	const Accumulator *tmp = getDataSource();
	if (tmp->getTypeCurrent()) {
		tmps = "A.C.";
	}
	else {
		tmps = "D.C.";
	}
	cout << "|" << tmps << "|" << tmp->voltage << " |" << tmp->amperage << " |" << endl;
	wcout << wchar_t(192) << "----------------" << wchar_t(217) << endl;
}

View3::View3() {
}

View3::View3(Accumulator * n_data) :View2(n_data) {
}

View3::~View3(){
}

void View3::showContent(){
	View2::showContent();
	Accumulator *tmp = getDataSource();
	cout << "About accumulator:" << endl;
	cout << "Material:" << tmp->getMaterial() << endl;
	cout << "Size:(Ah)" << tmp->getCapacity() << endl;
}
