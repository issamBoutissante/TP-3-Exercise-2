#pragma once
class Voiture
{
protected:
	float vitesse;
	bool lumiere;
public:
	Voiture(float vitesse, bool lumiere);
	void setLumOn();
	void setLumOff();
	void setVitesse(float vitesse);
	void affichage();
};

