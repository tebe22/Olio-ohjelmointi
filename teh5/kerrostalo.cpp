#include <iostream>
using namespace std;
#include "kerrostalo.h"

kerrostalo :: kerrostalo(){
    eka = new katutaso();
    toka = new kerros();
    kolmas = new kerros();

    cout << "kerrostalo luotu" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double kerrostalo :: laskeKulutus(double k){
    double katutasonKulutus = eka->laskeKulutus(k);
    double k2Kulutus = toka->laskeKulutus(k);
    double k3Kulutus = kolmas->laskeKulutus(k);

    int kerrostalonKulutus = katutasonKulutus + k2Kulutus + k3Kulutus;
    return kerrostalonKulutus;
}

kerrostalo :: ~kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;
}
