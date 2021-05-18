#pragma once
using System::Math;
ref class Rocket
{
private:
	int height;
	int startX;
	int startY;
public:

	void setHeight(int h) {
		height = h;
	}
	int getHeight() { return height; }


	
	void setStartPosition(int x, int y) {
	startX = x;
	startY = y;
}
	 int getStartX() {return startX;}
	 int getStartY() {return startY;}
};

