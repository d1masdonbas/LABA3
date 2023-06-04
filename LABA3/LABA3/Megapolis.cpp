#include "Megapolis.h"
#include <iostream>
#include <string>

Megapolis::Megapolis()
{

};

Megapolis::Megapolis(string name, int area, int index, int date):City(name, index, date)
{
	this->area = area;
};

string Megapolis::toString() {
	string str = "Name:" + name;
	str += "\nArea:" + to_string(area);
	return str;
}

