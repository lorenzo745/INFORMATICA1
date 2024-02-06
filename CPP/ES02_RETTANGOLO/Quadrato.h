#include <iostream>
#include "Rettangolo.h"

class Quadrato
{
    protected:
        int lato;

    public:

    Quadrato(int lato=5)
    this->lato=lato;
    int area();
    int perimetro();
    int diagonale();
}