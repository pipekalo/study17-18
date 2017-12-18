#include "stdafx.h"
#include "Data.h"


void Battery::Power(float voltage, float amperage) const{
}

bool Battery::getTypeCurrent() const{
	return typeCurrent;
}

void Battery::setTypeCurrent(bool n_Type){
	typeCurrent = n_Type;
}

Battery::Battery(){
	typeCurrent = NULL;
	voltage = NULL;
	amperage = NULL;
}

Battery::Battery(bool n_typeCurrent, float n_voltage, float n_amperage){
	typeCurrent = n_typeCurrent;
	voltage = n_voltage;
	amperage = n_amperage;
}

Battery::~Battery(){
}

bool operator==(const Battery & left, const Battery & right){
	if (left.amperage == right.amperage && left.typeCurrent == right.typeCurrent) {
		return true;
	}
	else { return false; }
}
