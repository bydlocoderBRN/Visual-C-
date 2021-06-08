#pragma once
using System::Math;
using namespace System::Drawing;
public ref class Rocket
{
	
private:
	int height;
	int startX;
	int startY;
	float ellipsB;
	float ellipsA;
	float d1;
	float d2;
	int xa, ya, xb, yb;
	bool flyingStatus;
	Image^ rocketImg;
public:
	Rocket();
	void initRocket(int h, System::Windows::Forms::PictureBox^ rocketImage);
	void setHeight(int h);
	int getHeight();
	void setStartPosition(int x, int y);
	int getStartX();
	int getStartY();
	int yPoint(float ellipsB, float t);
	int xPoint(float t);
	Bitmap^ resizeRocket( float scale);
	System::Windows::Forms::PictureBox^ rocketPicture;
	System::Windows::Forms::PictureBox^ boomPicture;
	void setBoom(System::Windows::Forms::PictureBox^ boom);
	void rocketUpdate(System::Windows::Forms::PictureBox^ rocketPt);
	System::Windows::Forms::PictureBox^ getRocket();
	System::Windows::Forms::PictureBox^ getBoom();
	void startFlying( float scale);
	System::Windows::Forms::PictureBox^ rocketDamaged(System::Windows::Forms::PictureBox^ object);
	bool isFlying();
	void setFlyingStatus(bool status);
	delegate System::Windows::Forms::PictureBox^ RocketBoomHandler();
	event RocketBoomHandler^ RocketBoom;

	
};

