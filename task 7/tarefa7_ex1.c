/* 	
    	1. Receber um n�mero e informar se ele � positivo, negativo ou nulo.
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
		printf("\n� um numero positivo");
	}
	else if (num1 < 0)
	{
		printf("\n� um numero negativo");
	}
	else
	{
		printf("\n� um numero nulo");
	}
	
return 0;

}
