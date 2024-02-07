#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class asunto{
public:
    asunto();


    int asukasMaara;
    int neliot;
    void maarita(int , int );
    double laskeKulutus(double);
};
asunto :: asunto(){
    cout << "asunto luotu" << endl;
}

void asunto :: maarita(int asukkaat, int koko){
    asukasMaara  = asukkaat;
    neliot= koko ;

    cout << "asunto maaritety asukkaita = "<< asukkaat << " nelioita = "<< koko<< endl;
}

double asunto :: laskeKulutus(double h){
    int hinta = h;
    int kulutus = hinta * asukasMaara * neliot;

    cout << "asunnon kulutus, kun hinta = "<< hinta<< " on " << kulutus<< endl;

    return kulutus;
}
#endif // ASUNTO_H
