#include "City.h"
#include <iostream>
#include <string>

City::City()
{

};
string City::toString() {
	string str = "Name:"+name;
	str += "\nIndex:"+to_string(index);
	return str;
}
City::City(string name, int index, int date):Region(name, date)
{
	this->index = index;
};
