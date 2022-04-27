/* 

1. Receber um número e informar se ele é negativo ou não é negativo. 


	teste 1=positivo
		  0=positivo
		-13=negativo
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");


    int num1;

	printf("\nDigite um numero inteiro: ");
	scanf("%d",&num1);
	  

	if (num1 >= 0)
	{
		printf("O numero é positivo");
	}
	else
	{
		printf("O numero é negativo");
	}
  

return 0;

}
