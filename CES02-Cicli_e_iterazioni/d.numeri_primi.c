/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. Un numero � primo quando ha come divisore uno e s� stesso.
* Quindi � primo ciascun numero naturale maggiore di 1 che sia divisibile solamente per 1 e per s� stesso.
* 
*<specifiche del progetto> Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. Un numero � primo quando ha come divisore uno e s� stesso. 
* Quindi � primo ciascun numero naturale maggiore di 1 che sia divisibile solamente per 1 e per s� stesso.
* 
* @author lorenzo zanirato, 3H
* @date 08/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>     

int main()  
{
    int num1,num2,cont=1;        

    for(num1=2;num1<101;num1++)  //per visulizzare i numeri primi
	{
        for(num2=2;num2<num1;num2++)
		{ 
            if(num1%num2==0)  //per calcolare se � un numero primo 
                cont=0;          
            
        }
        if(cont) 
            printf("%d e' un numero primo\n", num1);
        
        cont=1;
    }
}
