/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief tabella potagorica
* 
* <specifiche del progetto>
*tabella pitagorica
* 
* @author lorenzo zanirato, 3H
* @date 05/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>
int main()
{
	int n=1,cont=0,num=0;
	for (cont=1;cont<=10;cont++)
	{
		for(n=1;n<=10;n++)
		{
			num+=cont;
			printf("%5d",num);
			
		}
		printf("\n");
		num=0;
	} return 0;
}
