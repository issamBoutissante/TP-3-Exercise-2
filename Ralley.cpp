#include "Ralley.h"

Ralley::Ralley(float vitesse, bool lumiere) 
	:Voiture(vitesse,lumiere) {
	this->setVitesse(vitesse);
}
void Ralley::setVitesse(float vitesse) { this->vitesse = (vitesse > 200 ? 200 : vitesse); }