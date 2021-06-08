#include "Meteor.h"
Meteor::Meteor(System::Windows::Forms::PictureBox^ meteorPict) {
	meteorPicture = meteorPict;
}
System::Windows::Forms::PictureBox^ Meteor::getMeteor() { return meteorPicture; }