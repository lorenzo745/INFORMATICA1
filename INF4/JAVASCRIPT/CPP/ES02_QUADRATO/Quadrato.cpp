#include "Quadrato.h"
#include <iostream>

double Quadrato::Area()
{
    Rettangolo::calcolaArea();
}

double Quadrato::Perimetro()
{
    double x;
    x=base*4;
    return x;
}