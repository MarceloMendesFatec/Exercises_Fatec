/* 	
    	1. Receber um número e informar se ele é positivo, negativo ou nulo.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int num1;

   
//2 input
 	
 	printf("\nDigite um numero: ");
 	scanf("%d",&num1);

//3 calc

	if (num1 > 0)
	{
		printf("\nÉ um numero positivo");
	}
	else if (num1 < 0)
	{
		printf("\nÉ um numero negativo");
	}
	else
	{
		printf("\nÉ um numero nulo");
	}
	
return 0;

}
