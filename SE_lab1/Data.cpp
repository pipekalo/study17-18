#include "stdafx.h"
#include "Data.h"

Data::Data(){
	typeCurrent = NULL;
	voltage = NULL;
	amperage = NULL;
}

Data::Data(bool n_typeCurrent, float n_voltage, float n_amperage){
	typeCurrent = n_typeCurrent;
	voltage = n_voltage;
	amperage = n_amperage;
}

Data::~Data(){
}
