/* 	
   1. Receber 10 números e mostrar o dobro de cada um deles 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	int i;
	
   
//2 input
 	for (i=1;i<=10;i++)
 	{
 		printf("Numero %d\n",i);
 		printf("O dobro é %d\n",i*2);
	 }
	
//3 calc

	
return 0;

}
