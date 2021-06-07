#include"Global.h"
Planet::Planet() {
	centerX = 0;
	centerY = 0;
	planetRad = 0;
};
void Planet::initPlanet(System::Windows::Forms::PictureBox^ planetImage) {
	picturePlanet = planetImage;
	planetRad = planetImage->Width / 2;
	centerX = planetImage->Location.X + planetRad;
	centerY = planetImage->Location.Y + planetRad;
	Global::GlobalPlanet::globalPlanet->SomethingCrush += gcnew Planet::SomethingCrushedHandler(this, &Planet::getCrater);
	
};
int Planet::getPlanetRad() { return planetRad; }
void Planet::setPlanetRad(int r) { planetRad = r; }
int Planet::getCenterX() {return centerX;};
int Planet::getCenterY() { return centerY; };
System::Windows::Forms::PictureBox^ Planet::crushStarted(int craterX, int craterY) {
	return SomethingCrush(craterX,craterY);
}
System::Windows::Forms::PictureBox^ Planet::getCrater(int cratX, int cratY) {
	craterPicture->Top = cratY;
	craterPicture->Left = cratX;
	craterPicture->Visible = true;
	return craterPicture;
}
void Planet::setCrater(System::Windows::Forms::PictureBox^ crater) {
	craterPicture = crater;
}
