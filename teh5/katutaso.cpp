#include <iostream>
using namespace std;
#include "katutaso.h"


katutaso::katutaso()
{
    as1 = new asunto();
    as2 = new asunto();

    cout << "Katutaso luotu" << endl;
}

void katutaso::maaritaAsunnot()
{
    cout << "Määritetään katutason asunnot (2 kpl)" << endl;

    as1->maarita(3, 70);
    as2->maarita(3, 85);
}

double katutaso::laskeKustannus(double hinta)
{
    int katutasonKulutus = 0;
    katutasonKulutus += as1->laskeKulutus(hinta);
    katutasonKulutus += as2->laskeKulutus(hinta);

    // cout << "Katutason kulutus yhteensä: " << katutasonKulutus << endl;

    return katutasonKulutus;

}
katutaso :: ~katutaso(){
    delete as1;
    delete as2;
}
