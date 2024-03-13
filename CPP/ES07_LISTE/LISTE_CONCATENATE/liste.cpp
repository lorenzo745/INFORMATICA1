#include "lista.h"
#include<iostream>
using namespace std;

void Lista::push(int x)
{
    p=new nodo;
    p->info=x;
    p->next=testa;
    testa=p;
}

void Lista::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int Lista::top()
{
    return testa->info;
}


void Lista::stampa()
{
     do{
        cout<<p->info<<endl;
        p->next;
    }while(p->next!=NULL);
}
   