#pragma once
#include "Region.h"

class City : public Region 
{
	int index;
public:
	City();
	City(string name, int index, int date);
	string toString() override;
};