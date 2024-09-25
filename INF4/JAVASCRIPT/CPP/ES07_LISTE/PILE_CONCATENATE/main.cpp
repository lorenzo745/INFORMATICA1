#include<iostream>
#include "Pila.h"
using namespace std;

int main()
{
    Pila p1;

    p1.push(5);
    p1.push(7);
    p1.push(69);
    p1.pop();
    p1.top();
    p1.stampa();
}