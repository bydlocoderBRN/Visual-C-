#include "Global.h"
Rocket::Rocket() {
	height = 0;
	startX = 0;
	startY = 0;
}
void Rocket::initRocket(int h, int sx, int sy) {
	height = h;
	startX = sx;
	startY = sy;
	
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