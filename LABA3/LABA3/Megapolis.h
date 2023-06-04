#pragma once
#include "City.h"

class Megapolis : public City 
{
	int area;
public:
	Megapolis();
	Megapolis(string name, int area, int index, int date);
	string toString();
};