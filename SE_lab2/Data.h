#pragma once

class Data {
	bool typeCurrent;
public:
	float voltage;
	float amperage;
	void Power(float voltage, float amperage) const;
	bool  getTypeCurrent() const;
	void setTypeCurrent(bool n_Type);
	Data();
	Data(bool n_type_current, float n_voltage, float n_amperage);
	~Data();
};