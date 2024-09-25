#include <iostream>
using namespace std;
struct s_nodo{
    int info;
    struct s_nodo *next;
}typedef s_nodo;

int main()
{
    s_nodo *pTesta,*p;
    pTesta = new s_nodo;
    p->info = 1;
    pTesta->next=NULL;

    for(int i=0;i<10;i++)
    {
        p=new s_nodo;
        p->info=i;
        p->next=pTesta;
        pTesta=p;
    }
    for(int i=0;i<10;i++)
    {
        p=pTesta;
        cout<<p->info<<endl;
    }
}