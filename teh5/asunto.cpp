#include "asunto.h"
#include <iostream>
using namespace std;

asunto :: asunto(){
    cout << "asunto luotu" << endl;
}

void asunto :: maarita(int asukkaat, int koko){
    asukasMaara  = asukkaat;
    neliot= koko ;

    cout << "asunto maaritety asukkaita = "<< asukkaat << " nelioita = "<< koko<< endl;
}

double asunto :: laskeKulutus(double h){
    double hinta = h;
    int kulutus = hinta * asukasMaara * neliot;

    cout << "asunnon kulutus, kun hinta = "<< hinta<< " on " << kulutus<< endl;

    return kulutus;
}
