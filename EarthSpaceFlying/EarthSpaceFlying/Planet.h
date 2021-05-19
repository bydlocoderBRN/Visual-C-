#pragma once
public ref class Planet
{
private:
	int centerX;
	int centerY;
	int planetRad;
public:
	Planet();
	void initPlanet(int cx, int cy, int r);
	int getPlanetRad();
	void setPlanetRad(int r);
};

