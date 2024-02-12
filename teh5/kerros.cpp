#include <iostream>
using namespace std;
#include "kerros.h"

kerros::kerros()
{
    as1 = new asunto();
    as2 = new asunto();
    as3 = new asunto();
    as4 = new asunto();
    cout << "Kerros luotu" << endl;
}



void kerros::maaritaAsunnot()
{
    cout << "Määritetään kerroksen asunnot (4 kpl)" << endl;

    as1->maarita(1, 50);
    as2->maarita(2, 75);
    as3->maarita(3, 80);
    as4->maarita(4, 100);
}

double kerros::laskeKulutus(double hinta)
{
    int kulutus = 0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);



    return kulutus;
}
kerros ::~kerros(){
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}
