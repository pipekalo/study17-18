#include "stdafx.h"
#include "Data2.h"


void Accumulator::OnStore(ostream & aStream) {
	aStream.write((const char*)&voltage, sizeof(voltage));
	aStream.write((const char*)&amperage, sizeof(amperage));
	aStream.write((const char*)&typeCurrent, sizeof(typeCurrent));
}

void Accumulator::OnLoad(istream & aStream) {
	aStream.read((char*)&voltage, sizeof(voltage));
	aStream.read((char*)&amperage, sizeof(amperage));
	aStream.read((char*)&typeCurrent, sizeof(typeCurrent));
}

Accumulator::Accumulator() {
	material = "";
	capacity = NULL;
}
Accumulator::~Accumulator() {

}

void Accumulator::setCapacity(int n_capacity) {
	capacity = n_capacity;
}

void Accumulator::setMaterial(string n_material) {
	material = n_material;
}

void Accumulator::setData(const int & n_capacity, const string & n_material) {
	capacity = n_capacity;
	material = n_material;
}

void Accumulator::setData(const int & n_capacity) {
	capacity = n_capacity;
}

int Accumulator::getCapacity() {
	return capacity;
}

string Accumulator::getMaterial()
{
	return material;
}

Accumulator::Accumulator(int n_capacity, string n_material) {
	capacity = n_capacity;
	material = n_material;
}

Accumulator::Accumulator(bool n_type_current, float n_voltage, float n_amperage, int n_capacity, string n_material) :Battery(n_type_current, n_voltage, n_amperage) {
	capacity = n_capacity;
	material = n_material;
}

Accumulator & Accumulator::operator=(const char* right) {
	material = right;
	return *this;
}
