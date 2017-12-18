#pragma once
#include "Data.h"

class Accumulator : public Battery {
	int capacity;
	string material;
	Accumulator();
	~Accumulator();
public:
	void OnStore(ostream& aStream);
	void OnLoad(istream& aStream);
	void setCapacity(int n_capacity);
	void setMaterial(string n_material);
	void setData(const int &n_capacity, const string &n_material);
	void setData(const int &n_capacity);
	int getCapacity();
	string getMaterial();
	Accumulator(int n_capacity, string n_material);
	Accumulator(bool n_type_current, float n_voltage, float n_amperage, int n_capacity, string n_material);
	Accumulator& operator= (const char* right);
};
