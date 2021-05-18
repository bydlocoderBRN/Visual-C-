#pragma once
#include "Rocket.h"
#include "Planet.h"
ref class Moving
{
private:
	
	int ellipsA;
	int ellipsB;
public:
	void calculateEllips() {
		ellipsA = MyForm().souz.getHeight() + MyForm().plan.getPlanetRad();
		ellipsB = (int)Math::Sqrt(1 / (1 - (MyForm().souz.getStartX() * MyForm().souz.getStartX()) / (ellipsA * ellipsA)) * (1 / (MyForm().souz.getStartY() * MyForm().souz.getStartY())));
	}
public:
	int pointFor(int x) {
		float y = Math::Sqrt((1-(x*x/ellipsA*ellipsA))*ellipsB*ellipsB);
		return (int)y;
	}

	
};

