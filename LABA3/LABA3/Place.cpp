#include "Place.h"
#include <iostream>
#include <string>

Place** place = new Place * [100];
int Place::count = -1;

Place::Place() 
{
	++count;
}

Place::Place(string name) 
{
	++count;
	this->name = name;
}

void Place::Add() 
{
	::place[count] = this;
}

void Place::Print()
{
	for (int i = 0; i <= Place::count; i++)
		if (place[i] != nullptr)
			cout<< place[i]->toString() << endl;
}
string Place::toString() {
	string str = "Name:" + name;
	return str;
}
Place::~Place() 
{
	delete[] place;
}