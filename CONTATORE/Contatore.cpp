#include<iostream>
#include<cmath>
using namespace std;
#include "Contatore.h"
    Contatore::Contatore()
    {
        this->valore=0;
        this->passo=1;
    }
    Contatore::Contatore(int valore)
    {
        this->valore=valore;
        this->passo=1;
    }
    Contatore::Contatore(int valore, int passo)
    {
        this->valore=valore;
        this->passo=passo;
    }

    void Contatore::setValore(int valore)
    {
        this->valore=valore;
    } 
    int Contatore::getValore()
    {
        return valore;
    }
    void Contatore::setPasso(int passo)
    {
        this->passo=passo;
    }
    
    int Contatore::getPasso()
    {
         return passo;
    }
    void Contatore::reset()
    {
        this valore=0;
    }
    void Contatore::inc()
    {
        
    }
    double Rettangolo::calcolaDiagonale()
    {
        return sqrt(base*base+altezza*altezza);
    }
    void Rettangolo::stampaTutto()
    {
        cout<<"base "<<base<<endl;
        cout<<"altezza "<<altezza<<endl;
        cout<<"perimetro "<<calcolaPerimetro()<<endl;
        cout<<"area "<<calcolaArea()<<endl;
        cout<<"diagonale "<<calcolaDiagonale()<<endl;
    }




    int Contatore::media()
    {
        int v[N];
        for(int i=0;i<N;i++)
        {
            cout<<"base "<<base<<endl;
            cin>>v[i];
        }
    }
