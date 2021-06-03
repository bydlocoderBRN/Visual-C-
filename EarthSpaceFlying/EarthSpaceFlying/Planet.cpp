#include "Planet.h"
Planet::Planet() {
	centerX = 0;
	centerY = 0;
	planetRad = 0;
};
void Planet::initPlanet(int cx, int cy, int r, System::Windows::Forms::PictureBox^ planetImage) {
	picturePlanet = planetImage;
	planetRad = planetImage->Width / 2;
	centerX = planetImage->Location.X + planetRad;
	centerY = planetImage->Location.Y + planetRad;
	
};
int Planet::getPlanetRad() { return planetRad; }
void Planet::setPlanetRad(int r) { planetRad = r; }
int Planet::getCenterX() {return centerX;};
int Planet::getCenterY() { return centerY; };