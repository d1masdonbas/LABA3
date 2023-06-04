#include <iostream>
#include <string>
#include "City.h"
#include "Megapolis.h"
#include "Place.h"
#include "Region.h"
using namespace std;


int main()
{
    Place* city0 = new City("Ternopil", 46001, 1939);
    city0->Add();
    Place* region0 = new Region("Ternopil region", 1939);
    region0->Add();
    Place* megapolis0 = new Megapolis("Bos-Wash", 170, 46001, 1939);
    megapolis0->Add();
    Place::Print();

    return 0;
}
