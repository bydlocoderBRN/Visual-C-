#pragma once
public ref class Planet
{
private:
	int centerX;
	int centerY;
	int planetRad;
	System::Windows::Forms::PictureBox^ picturePlanet;
	System::Windows::Forms::PictureBox^ craterPicture;
public:
	void setCrater(System::Windows::Forms::PictureBox^ crater);
	delegate System::Windows::Forms::PictureBox^ SomethingCrushedHandler(int cratX, int cratY);
	event SomethingCrushedHandler^ SomethingCrush;
	Planet();
	void initPlanet( System::Windows::Forms::PictureBox^ planetImage);
	int getPlanetRad();
	void setPlanetRad(int r);
	int getCenterX();
	int getCenterY();
	System::Windows::Forms::PictureBox^ crushStarted(int craterX, int craterY);
	System::Windows::Forms::PictureBox^ getCrater(int cratX, int cratY);
};

