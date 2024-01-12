#include<iostream>

using namespace std;

class Frazione {
    private:
        int numeratore;
        int denominatore;

    public:

        //int aiuto;
        Frazione () {
            numeratore=1;
            denominatore=1;
        }; //costuttore

        Frazione (int x) {
            numeratore=x;
            denominatore=1;
        };

        Frazione (int x, int y) {
            numeratore=x;
            denominatore=y;
        };
        /*void setnumeratore(int n)
        {
            numeratore=n;
        }
        void setdenominatore(int d)
        {
            denominatore=d;
        }
        */
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
            cout<< numeratore << "/" << denominatore << endl;
        }
        void semplifica ()
        {
            int min;
            min=MCD(numeratore,denominatore);
            numeratore/=min;
            denominatore/=min;
        }

        int MCD (int a,int b)
        {
	    int r=0;
	    while(b!=0)
	    {
		    r=a%b;
		    a=b;
		    b=r;
        } 
	    return a;	
        }   
};

int main ()
{
    Frazione f1;
    int n,d;
    cout<<"inserisci prima il numeratore e poi il deniminatore"<<endl;
    cin>>n;
    cin>>d;
    cout<<"\n"<<endl;
    //f1.setnumeratore(n);
    //f1.setdenominatore(d);
    
    f1.stampa();

    f1.semplifica();
    f1.stampa();

    //f1.aiuto=4;
}