#pragma once
#include "MyForm.h"
ref class Planet
{
private:
	int centerX;
	int centerY;
	int planetRad;
public:
	Planet() {};
	int getPlanetRad(){
		planetRad = MyForm().getPlanetWidth();
		return planetRad;
	}
	void setPlanetRad(int r) {
		planetRad = r;
	}
};

