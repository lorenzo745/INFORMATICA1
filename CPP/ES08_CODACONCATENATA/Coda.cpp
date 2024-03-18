#include "Coda.h"
#include<iostream>
using namespace std;

void Coda::push(int x)
{
    p=testa;
    while(p->next!=NULL)
    { 
        p=p->next;
    }
    p->next=new nodo;
    p=p->next;
    p->info=x;
    p->next=NULL;
}

void Coda::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int Coda::top()
{
    return testa->info;
}


void Coda::stampa()
{p=testa;
    while(p!=NULL){
        cout<<p->info<<endl;
        p=p->next;
    }
}
   