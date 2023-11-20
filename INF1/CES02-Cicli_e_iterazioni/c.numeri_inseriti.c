/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. 
* L’introduzione del valore 0 indica il termine del caricamento dei dati.
* 
*
*
* <specifiche del progetto>
* Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. 
* L’introduzione del valore 0 indica il termine del caricamento dei dati.
* 
* @author lorenzo zanirato, 3H
* @date 04/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	int num,somma,media,cont=0;
	
	do
	{
		printf("inserisci un numero \t");
		scanf("%d",&num);
		somma+=num;                    //per fare la somma tra i numeri
		cont++;
		
	}
	while(num!=0);                     // per far finire il programma quando si inserisce 0
	media=somma/cont;                 //per calcolare la media
	
	printf("la media e' %d",media);
	return 0;
}
