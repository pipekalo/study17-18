#pragma once
#include "Data.h"
#include "Data2.h"

using namespace std;

class BaseView {
	Accumulator* tmp;
protected:
	Accumulator* getDataSource();
	virtual void showHeader();
	virtual void showContent();
	virtual void showFooter();
	virtual void setDataSource(Accumulator* n_Data);
public:
	BaseView();
	~BaseView();
	BaseView(Accumulator *tmp);
	void display();
};

class View: public BaseView {
public:
	View();
	View(Accumulator *n_data);
	~View();
	void showContent();
};

class View2: public BaseView {
public:
	View2();
	View2(Accumulator *n_data);
	~View2();
	void showContent();
};

class View3 : public View2 {
public:
	View3();
	View3(Accumulator *n_data);
	~View3();
	void showContent();
};