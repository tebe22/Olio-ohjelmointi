#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
class kerrostalo{



public:
    kerrostalo();
    ~kerrostalo();

    katutaso *eka;
    kerros *toka;
    kerros *kolmas;

    double laskeKulutus(double);
};

#endif // KERROSTALO_H
