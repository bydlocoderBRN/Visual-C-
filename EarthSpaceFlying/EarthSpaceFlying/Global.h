#pragma once
#include "Rocket.h"
#include "Planet.h"
public ref class Global
{public:
	ref class GlobalRocket abstract sealed
	{
	public:
		static Rocket^ globalRocket = gcnew Rocket();
	};
	ref class GlobalPlanet abstract sealed
	{
	public:
		static Planet^ globalPlanet = gcnew Planet();
	};
};

