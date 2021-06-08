#include "Global.h"
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
	rocketImg = rocketPicture->Image;
	rocketPicture->Left = startX;
	rocketPicture->Top = startY;
	rocketPicture->Image = resizeRocket(0.1);
	rocketPicture->Visible = true;
	flyingStatus = true;
	Global::GlobalRocket::globalRocket->RocketBoom += gcnew Rocket::RocketBoomHandler(this, &Rocket::getBoom);
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
int Rocket::yPoint(float ellipsB ,float t) {
	this->ellipsB = ellipsB;
	float y = this->ellipsB * Math::Sin(t);
	return (int)y;
};
int Rocket::xPoint(float t) {
	ellipsA = ellipsB + 200;
	float x = ellipsA * Math::Cos(t);
	
	return (int)x;
};
 void Rocket::startFlying(float scale) {
	 if (rocketPicture->Top <= startY + height) {
		 rocketPicture->Top -= 5;
		 rocketPicture->Image = resizeRocket(scale);

	 }
};
 void Rocket::setBoom(System::Windows::Forms::PictureBox^ boom) {
	 boomPicture = boom;
 }
 System::Windows::Forms::PictureBox^ Rocket::getBoom() {
	 boomPicture->Top = rocketPicture->Top - rocketPicture ->Width /2;
	 boomPicture->Left = rocketPicture->Left - rocketPicture->Height/2;
	 boomPicture->Visible = true;
	 setFlyingStatus(false);
	 rocketPicture->Visible = false;
	 return boomPicture;
	
 }
 bool Rocket::isFlying() {
	 return flyingStatus;
 }
 void Rocket::setFlyingStatus(bool status) {
	 flyingStatus = status;
 }
 System::Windows::Forms::PictureBox^ Rocket::rocketDamaged(System::Windows::Forms::PictureBox^ object) {
	 d1 = Math::Sqrt(rocketPicture->Width * rocketPicture->Width + rocketPicture->Height * rocketPicture->Height) / 2;
	 d2 = Math::Sqrt(object->Width * object->Width + object->Height * object->Height) / 2;
	 xa = rocketPicture->Location.X + rocketPicture->Height / 2;
	 ya = rocketPicture->Location.Y + rocketPicture->Width / 2;
	 xb = object->Location.X + object->Height / 2;
	 yb = object->Location.Y + object->Width / 2;
	 if (Math::Sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) <= (d1 + d2)) {
		 return RocketBoom();
	 }

 }
 