#pragma once
#include "Data.h"

class View {
public:
	Data *tmp;
	View();
	View(Data *n_data);
	~View();
	void showelem();
};

class View2 {
public:
	const Data* tmp;
	void SetDataSource(const Data* n_Data);
	void PrintData(const Data& aData);
	View2();
	View2(Data *n_data);
	~View2();
};