/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla tastiera.
*Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1 
* 
*<specifiche del progetto>
* Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla tastiera. 
*Si ricordi che il fattoriale di un numero n (simbolo n!)viene calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1 
* 
* @author lorenzo zanirato, 3H
* @date 08/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/


#include <stdio.h>     

int main()  
{
	int num,cont;  
	
	printf("inserisci un numero:\t");   
    scanf("%d",&num);

    if(num>0) 
	{                          
        for(cont=num-1;cont>0;cont--) //per calcolare i fattoriale 
		{
            num*=cont;                    
        }

        printf("il fattoriale e': %d",num);     
    }
    else 
	{
        printf("non e' possibile calcolare il fattoriale di un numero negativo\n");     
    }
    return 0;
}
