#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;
struct s_nodo{
    string cognome;
    int info;
    struct s_nodo *next;
}typedef nodo;


class Lista{
    private:
        nodo *testa;
        nodo *p;
    public:
        Lista(int dato=0)
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