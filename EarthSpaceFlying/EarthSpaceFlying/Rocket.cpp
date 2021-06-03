#include "Global.h"
#include "MyForm.h"

Rocket::Rocket() {
	height = 0;
	startX = 0;
	startY = 0;
}
void Rocket::rocketUpdate(System::Windows::Forms::PictureBox^ rocketPt) {
	rocketPicture = rocketPt;
};
System::Windows::Forms::PictureBox^ Rocket::getRocket() {
	return rocketPicture;
};
void Rocket::initRocket(int h, System::Windows::Forms::PictureBox^ rocketpt) {
	height = h;
	rocketPicture = rocketpt;
	startX = Global::GlobalPlanet::globalPlanet->getCenterX();
	startY = Global::GlobalPlanet::globalPlanet->getCenterY() - Global::GlobalPlanet::globalPlanet->getPlanetRad();
	rocketImg = rocketPicture->Image;
	rocketPicture->Left = startX;
	rocketPicture->Top = startY;
	rocketPicture->Image = resizeRocket(0.1);
	rocketPicture->Visible = true;
};
Bitmap^ Rocket::resizeRocket( float scale) { 
	int wt = (int)(rocketPicture->Width * scale);
	int ht = (int)(rocketPicture->Height * scale);
	Size sz = Size(wt,ht);
	Bitmap^ bmp0 = gcnew Bitmap(rocketImg, sz);
	return bmp0;

};
void Rocket::setHeight(int h) {height = h;}
int Rocket::getHeight() { return height; }
void Rocket::setStartPosition(int x, int y) {
	startX = x;
	startY = y;
}
int Rocket::getStartX() { return startX; }
int Rocket::getStartY() { return startY; }
int Rocket::yPoint(float t) {
	ellipsB = Global::GlobalRocket::globalRocket->getHeight() + Global::GlobalPlanet::globalPlanet->getPlanetRad();
	float y = ellipsB * Math::Sin(t);
	ellipsA = ellipsB + 200;
	return (int)y;
};
int Rocket::xPoint(float t) {
	float x = ellipsA * Math::Cos(t);
	ellipsA = ellipsB + 400;
	return (int)x;
};
 void Rocket::startFlying(float scale) {
	 if (rocketPicture->Top <= startY + height) {
		 rocketPicture->Top -= 5;
		 rocketPicture->Image = resizeRocket(scale);

	 }
	
};