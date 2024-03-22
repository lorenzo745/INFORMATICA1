#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;
struct s_nodo{
    string cognome;
    int info;
    struct s_nodo *next;
}typedef nodo;


class Pila{
    private:
        nodo *testa;
        nodo *p;
    public:
        Pila(int dato=0)
        {
            testa = new nodo;
            p->info = 0;
            testa->next=NULL;
        }
        void push(int x);
        void pop();
        int top();
        void stampa();
};

#endif