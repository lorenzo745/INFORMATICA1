#include<iostream>
using namespace std;
class frazione {
    private:
    int numeratore;
    int denominatore;

    public:
    Frazione() {}; //costuttore
    void setnumeratore(int n)
    {
        numeratore=n;
    }
    void setdenominatore(int d)
    {
        denominatore=d;
    }

    int getnumeratore()
    {
        return numeratore;
    }

    int getdeniminatore()
    {
        return denominatore;
    }
    
    void stampa()
    {
        
    }
}