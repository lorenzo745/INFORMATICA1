/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
*
*
* <specifiche del progetto>
* Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author lorenzo zanirato, 3H
* @date 04/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h> //printf, scanf
#include <math.h>

int main ()
{
	int num,div;
	
	printf ("inserire un numero: \t");	
	scanf ("%d",&num);
	
	for (div=2;div<num;div++)	//calcolo del divisore
	{
		if (num%div==0)								 
			printf ("%d e' un divisore \n",div);	//visualizzare il divisore
    }
return 0;
}
