#include <iostream>
using namespace std;
#include "asunto.h"

#ifndef KERROSTALO_H
#define KERROSTALO_H





class kerros{
public:
    kerros();
    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    asunto as1, as2, as3, as4;
};

kerros::kerros()
{
    cout << "Kerros luotu" << endl;
}



void kerros::maaritaAsunnot()
{
    cout << "Määritetään kerroksen asunnot (4 kpl)" << endl;

                                                               as1.maarita(1, 50);
    as2.maarita(2, 75);
    as3.maarita(3, 80);
    as4.maarita(4, 100);
}

double kerros::laskeKulutus(double hinta)
{
    int kulutus = 0;
    kulutus += as1.laskeKulutus(hinta);
    kulutus += as2.laskeKulutus(hinta);
    kulutus += as3.laskeKulutus(hinta);
    kulutus += as4.laskeKulutus(hinta);



    return kulutus;
}


class katutaso : public kerros{
public:
    katutaso();
    void maaritaAsunnot();
    double laskeKustannus(double);

private:
    asunto as1, as2;
};

katutaso::katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void katutaso::maaritaAsunnot()
{
    cout << "Määritetään katutason asunnot (2 kpl)" << endl;
                                                           as1.maarita(3, 70);
    as2.maarita(3, 85);
}

double katutaso::laskeKustannus(double hinta)
{
    int katutasonKulutus = 0;
    katutasonKulutus += as1.laskeKulutus(hinta);
    katutasonKulutus += as2.laskeKulutus(hinta);

    // cout << "Katutason kulutus yhteensä: " << katutasonKulutus << endl;

    return katutasonKulutus;

}

class kerrostalo{
private:
    katutaso eka;
    kerros toka;
    kerros kolmas;

public:
    kerrostalo();
    double laskeKulutus(double);
};
kerrostalo :: kerrostalo(){
    cout << "kerrostalo luotu" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double kerrostalo :: laskeKulutus(double k){
    double katutasonKulutus = eka.laskeKulutus(k);
    double k2Kulutus = toka.laskeKulutus(k);
    double k3Kulutus = kolmas.laskeKulutus(k);

    int kerrostalonKulutus = katutasonKulutus + k2Kulutus + k3Kulutus;
    return kerrostalonKulutus;
}






#endif // KERROSTALO_H
