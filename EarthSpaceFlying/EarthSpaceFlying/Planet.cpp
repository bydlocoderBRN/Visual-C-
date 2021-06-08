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
System::Windows::Forms::PictureBox^ Planet::crushStarted(System::Windows::Forms::PictureBox^ object) {
	d1 = Math::Sqrt(picturePlanet->Width * picturePlanet->Width + picturePlanet->Height * picturePlanet->Height) / 2;
	d2 = Math::Sqrt(object->Width * object->Width + object->Height * object->Height) / 2;
	xa = picturePlanet->Location.X + picturePlanet->Height / 2;
	ya = picturePlanet->Location.Y + picturePlanet->Width / 2;
	xb = object->Location.X + object->Height / 2;
	yb = object->Location.Y + object->Width / 2;
	if (Math::Sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) <= (d1 + d2)) {
		craterPicture->Top = object->Top + object->Height;
		craterPicture->Left = object->Left + object->Width;
		return SomethingCrush();
	}
	
}
System::Windows::Forms::PictureBox^ Planet::getCrater() {
	craterPicture->Visible = true;
	return craterPicture;
}
void Planet::setCrater(System::Windows::Forms::PictureBox^ crater) {
	craterPicture = crater;
}
