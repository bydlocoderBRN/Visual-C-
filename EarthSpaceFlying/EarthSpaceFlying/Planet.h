#pragma once
public ref class Planet
{
private:
	int centerX;
	int centerY;
	int planetRad;
	System::Windows::Forms::PictureBox^ picturePlanet;
public:
	Planet();
	void initPlanet(int cx, int cy, int r, System::Windows::Forms::PictureBox^ planetImage);
	int getPlanetRad();
	void setPlanetRad(int r);
	int getCenterX();
	int getCenterY();
};

