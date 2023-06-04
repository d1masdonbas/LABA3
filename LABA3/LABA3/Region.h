#pragma once
#include "Place.h"

class Region : public Place 
{
	int dateOfCreation;
public:
	Region();
	Region(string name, int date);
	string toString();
};
