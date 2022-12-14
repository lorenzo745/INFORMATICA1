/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit più significativo. 
*Il programma dovrà visualizzare il numero decimale corrispondente. 
Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la libreria math.h. 
* 
*<specifiche del progetto>
* Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit più significativo. 
*Il programma dovrà visualizzare il numero decimale corrispondente. 
* Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la libreria math.h. 
* 
* @author lorenzo zanirato, 3H
* @date 08/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>     
#include <math.h>

int main()  
{
	int bit,num=0,cont=7; 

    do{
    	printf("inserisci 8 bit:\t");
        scanf("%d",&bit);          

        num+=pow(2,cont)*bit;    
		cont--;
		                        
    } 
	while (cont>-1);                 

    printf("la conversione del numero in binario e': %d",num);            
}
