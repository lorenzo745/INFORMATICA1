#include <iostream>
#include "Contatore.h"

using namespace std;

int main(){
    Contatore c;

    c.stampa();
    c.inc();
    c.stampa();

    c.setPasso(3);

    c.inc();

    c.stampa();

    c.dec();

    c.stampa();

    c.setValore(10);

    c.stampa();

    cout<<"Valore: "<<c.getValore()<<endl<<"Passo: "<<c.getPasso()<<endl;    
}