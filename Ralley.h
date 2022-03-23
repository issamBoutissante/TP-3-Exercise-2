#pragma once
#include"Voiture.h"
class Ralley:virtual public Voiture
{
public:
	Ralley(float vitesse, bool lumiere);
	void setVitesse(float vitesse);
};

