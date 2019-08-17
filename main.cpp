#include <iostream>
#include "Zivotinja.h"
#include "DivljaZivotinja.h"
using namespace std;

int main()
{

    DivljaZivotinja* medved  = new DivljaZivotinja();

    medved->setIme("Pera");
    medved->setBoja("Bela");
    medved->setStarost(15);
    medved->setTezina(80);
    medved->setVisina(4);
    medved->setLoviste("Tara");

    medved->info();

    delete medved;


    return 0;
}
