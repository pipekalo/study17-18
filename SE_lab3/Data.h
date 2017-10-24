#pragma once
#include <string>

using namespace std;

class Battery {
		bool typeCurrent;
	public:
		float voltage;
		float amperage;
		void Power(float voltage, float amperage) const;
		bool  getTypeCurrent() const;
		void setTypeCurrent(bool n_Type);
		Battery();
		Battery(bool n_type_current, float n_voltage, float n_amperage);
		~Battery();
};

class Accumulator : public Battery {
	int capacity;
	string material;
	Accumulator();
	~Accumulator();
public:
	void setCapacity(int n_capacity);
	void setMaterial(string n_material);
	int getCapacity();
	string getMaterial();
	Accumulator(int n_capacity, string n_material);
	Accumulator(bool n_type_current, float n_voltage, float n_amperage,int n_capacity, string n_material);
};