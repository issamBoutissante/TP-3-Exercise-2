#include "Decapotable.h"
#include<iostream>
using namespace std;

Decapotable::Decapotable(float vitesse, bool lumiere, bool eToit)
	:Voiture(vitesse,lumiere) {
	this->eToit = eToit;
}
void Decapotable::setToitHaut() { this->eToit = true; }
void Decapotable::setToitBas() { this->eToit = false; }
void Decapotable::affichage(){
	Voiture::affichage();
	cout << "- Etat Toit est : " << (this->eToit ? "Eleve" : "Baisse") << endl;
}