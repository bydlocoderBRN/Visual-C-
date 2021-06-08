#pragma once
public ref class Meteor
{
private:
	System::Windows::Forms::PictureBox^ meteorPicture;

public:
	Meteor(System::Windows::Forms::PictureBox^ meteorPict);
	System::Windows::Forms::PictureBox^ getMeteor();



};

