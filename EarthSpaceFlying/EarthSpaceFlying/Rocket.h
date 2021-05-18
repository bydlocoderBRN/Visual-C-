#pragma once
using System::Math;
class Rocket
{
	int a;
	int b;
	int startX;
	int startY;
public: void setEllipse(int aRad, int bRad) {
	a = aRad;
	b = bRad;
}
public: int getARad() {
	return a;
}
public:int getBRad() { return b;}
public: int pointFor(int x) {

	float y = Math::Sqrt(getARad() * getARad() + getBRad() * getBRad() - x * x);
	return (int)y;
}
public: void setStartPosition(int x, int y) {
	startX = x;
	startY = y;
}
public: int getStartX() {
	return startX;
}
public: int getStartY() {
	return startY;
}
};

