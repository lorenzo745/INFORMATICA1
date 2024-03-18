#include<iostream>
#include "Coda.h"
using namespace std;

int main()
{
    Coda C1;

    C1.push(5);
    C1.push(7);
    C1.push(6);
    C1.top();
    C1.stampa();
}