#pragma once
using System::Math;
public ref class Rocket
{
private:
	int height;
	int startX;
	int startY;
	float ellipsB;
	float ellipsA;
public:
	Rocket();
	void initRocket(int h, int sx, int sy);
	void setHeight(int h);
	int getHeight();
	void setStartPosition(int x, int y);
	int getStartX();
	int getStartY();
	int yPoint(float t);
	int xPoint(float t);
};

