#pragma once
#include <string>
#include "StorageInterface.h"
#include "FileStorage.h"

using namespace std;

class Battery: public MStorageInterface {
	public:
		float voltage;
		float amperage;
		bool typeCurrent;
	public:
		void Power(float voltage, float amperage) const;
		bool  getTypeCurrent() const;
		void setTypeCurrent(bool n_Type);
		Battery();
		Battery(bool n_type_current, float n_voltage, float n_amperage);
		~Battery();
		friend bool operator== (const Battery& left, const Battery& right);
};
