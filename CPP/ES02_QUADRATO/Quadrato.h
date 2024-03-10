#include "Rettangolo.h"
#include <iostream>

#ifndef QUADRATO_H
#define QUADRATO_H

class Quadrato:public Rettangolo {

    public:
    Quadrato(double base=5):Rettangolo(base){};

    double Area();
    double Perimetro();

};

#endif