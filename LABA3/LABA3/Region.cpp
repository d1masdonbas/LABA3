#include "Region.h"
#include <iostream>
#include <string>

Region::Region()
{

};

Region::Region(string name, int date):Place(name)
{
	this->dateOfCreation = date;
};
string Region::toString() {
	string str = "Name:" + name;
	str += "\nDate of creation:" + to_string(dateOfCreation);
	return str;
}