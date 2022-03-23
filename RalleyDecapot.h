#pragma once
#include "Decapotable.h"
#include "Ralley.h"
class RalleyDecapot:public Decapotable,public Ralley
{
public:
	RalleyDecapot(float vitesse, bool lumiere, bool eToit);
};

