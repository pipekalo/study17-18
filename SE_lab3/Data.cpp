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

Accumulator::Accumulator() {
	material = "";
	capacity = NULL;
}
Accumulator::~Accumulator(){

}

void Accumulator::setCapacity(int n_capacity){
	capacity = n_capacity;
}

void Accumulator::setMaterial(string n_material){
	material = n_material;
}

int Accumulator::getCapacity(){
	return capacity;
}

string Accumulator::getMaterial()
{
	return material;
}

Accumulator::Accumulator(int n_capacity, string n_material){
	capacity = n_capacity;
	material = n_material;
}

Accumulator::Accumulator(bool n_type_current, float n_voltage, float n_amperage, int n_capacity, string n_material):Battery(n_type_current, n_voltage, n_amperage){
	capacity = n_capacity;
	material = n_material;
}
