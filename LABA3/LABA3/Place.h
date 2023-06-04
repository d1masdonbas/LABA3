#pragma once
#include <string>
using namespace std;
class Place
{
protected:
	string name;
public:
	static int count;
	void Add();
	Place();
	Place(string name);
	static void Print();
	virtual string toString();
	virtual ~Place();
};