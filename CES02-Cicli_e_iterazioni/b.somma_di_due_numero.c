/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
* 
*
*
* <specifiche del progetto>
* Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
* 
* @author lorenzo zanirato, 3H
* @date 04/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

# include  <stdio.h>      

int  main ()
{
	int num1,num2;          

    for (num1=1;num1<8;num1++)        //per fare la somma tra i numeri tra 1 a 7 e da 8 a 14      

        for (num2=1;num2<15;num2++)         

            if (num1+num2==15)                     
                printf ("%d + %d =15 \n",num1,num2);
    
}
