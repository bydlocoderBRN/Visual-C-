#pragma once
using System::Math;
using namespace System::Drawing;
public ref class Rocket
{
	;
private:
	int height;
	int startX;
	int startY;
	float ellipsB;
	float ellipsA;
	Image^ rocketImg;
	Graphics^ gr;
	System::Windows::Forms::PictureBox^ pictureRocket;
public:
	Rocket();
	void initRocket(int h, System::Windows::Forms::PictureBox^ rocketImage);
	void setHeight(int h);
	int getHeight();
	void setStartPosition(int x, int y);
	int getStartX();
	int getStartY();
	int yPoint(float t);
	int xPoint(float t);
	Bitmap^ resizeRocket( float scale);
	System::Windows::Forms::PictureBox^ rocketPicture;
	void rocketUpdate(System::Windows::Forms::PictureBox^ rocketPt);
	System::Windows::Forms::PictureBox^ getRocket();
	void startFlying( float scale);

	//void initGraphicsRocket(Object^ sender,
	//	System::Windows::Forms::PaintEventArgs^ e);
	/*void drawRocket();*/
};

