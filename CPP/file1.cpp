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
        cout<< numeratore << "/" << denominatore << end1;
    }
}

int main 
{
    Frazione f1;

    f1.setnumeratore(12);
    f1.setdenominatore(5);
    f1.stampa();
}