#include<iostream>
#include "lista.h"
using namespace std;

int main()
{
    Lista l1;

    l1.push(5);
    l1.push(5);
    l1.push(69);
    l1.pop();
    l1.top();
    l1.stampa();
}