#include "Pila.h"
#include <iostream>
int main()
{
    Pila r1;
    //Pila r2(10);

    r1.push(2);
    r1.push(3);
    r1.pop();
    r1.stampa();
}