#pragma once
#include "Data.h"

class View {
public:
	Data tmp;
	View();
	View(Data n_data);
	~View();
	void showelem();
};