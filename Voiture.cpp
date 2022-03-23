#include "Voiture.h"
#include<iostream>
using namespace std;

Voiture::Voiture(float vitesse, bool lumiere) {
	this->setVitesse(vitesse);
	this->lumiere = lumiere;
}
void Voiture::setLumOn() { this->lumiere = true; }
void Voiture::setLumOff() { this->lumiere = false; }
void Voiture::setVitesse(float vitesse) { this->vitesse = (vitesse>100?100:vitesse); }
void Voiture::affichage() {
	cout << "- Vitesse : " << this->vitesse << endl;
	cout << "- Lumiere est : " << (this->lumiere ? "On" : "Off") << endl;
}