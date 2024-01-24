#include "Rettangolo.h"
#include <iostream>
int main()
{
    Rettangolo r1;
    Rettangolo r2(5);
    Rettangolo r3(10,5);
    r1.setBase(12);
    r1.setAltezza(8);
    r1.stampaTutto();
}