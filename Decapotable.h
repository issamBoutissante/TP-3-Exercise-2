#pragma once
#include "Voiture.h"
class Decapotable:virtual public Voiture
{
private:
	bool eToit;
public:
	Decapotable(float vitesse, bool lumiere,bool eToit);
	void setToitHaut();
	void setToitBas();
	void affichage();
};

