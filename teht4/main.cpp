#include <iostream>
#include "kerrostalo.h"



int main()
{

    kerrostalo kt;
    int hinta = 1;
    int kulutus = kt.laskeKulutus(hinta);
    cout << "Koko kerrostalon kulutus hinnalla " << hinta << ": " << kulutus << endl;

    return 0;
}
