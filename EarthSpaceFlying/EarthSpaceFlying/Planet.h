#pragma once
public ref class Planet
{
private:
	int centerX;
	int centerY;
	int planetRad;
	float d1;
	float d2;
	int xa, ya, xb, yb;
	System::Windows::Forms::PictureBox^ picturePlanet;
	System::Windows::Forms::PictureBox^ craterPicture;
public:
	void setCrater(System::Windows::Forms::PictureBox^ crater);
	delegate System::Windows::Forms::PictureBox^ SomethingCrushedHandler();
	event SomethingCrushedHandler^ SomethingCrush;
	Planet();
	void initPlanet( System::Windows::Forms::PictureBox^ planetImage);
	int getPlanetRad();
	void setPlanetRad(int r);
	int getCenterX();
	int getCenterY();
	System::Windows::Forms::PictureBox^ crushStarted(System::Windows::Forms::PictureBox^ object);
	System::Windows::Forms::PictureBox^ getCrater();
};

