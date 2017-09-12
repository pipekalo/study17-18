#pragma once

class Data {
public:
	bool typeCurrent;
	float voltage;
	float amperage;
	Data();
	Data(bool n_type_current, float n_voltage, float n_amperage);
	~Data();
};