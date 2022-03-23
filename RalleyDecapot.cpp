#include "RalleyDecapot.h"
RalleyDecapot::RalleyDecapot(float vitesse, bool lumiere, bool eToit) 
	:Decapotable(vitesse,lumiere,eToit)
	,Voiture(vitesse,lumiere)
	,Ralley(vitesse,lumiere) {
}
