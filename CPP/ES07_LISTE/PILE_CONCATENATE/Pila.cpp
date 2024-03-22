#include "pila.h"
#include<iostream>
using namespace std;

void Pila::push(int x)
{
    p=new nodo;
    p->info=x;
    p->next=testa;
    testa=p;
}

void Pila::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int Pila::top()
{
    return testa->info;
}


void Pila::stampa()
{p=testa;
     do{
        cout<<p->info<<endl;
        p=p->next;
    }while(p->next!=NULL);
}
   