/* 	
    4. Receber três números e dizer se existe algum número repetido entre eles. 
	Em caso afirmativo, mostre qual o número esta repetido.	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	
 	float num1,num2,num3;

//2 input
 	
 	printf("\nDigite o primeiro numero: ");
 	scanf("%f",&num1);
 	printf("\nDigite o segundo numero: ");
 	scanf("%f",&num2);
 	printf("\nDigite o terceiro numero: ");
 	scanf("%f",&num3);
	
//3 calc

	if ( num1 == num2 || num1 == num3)
	{
		printf("\nO numero repetido é %.2f",num1);
	}
	else if ( num2 == num3)
	{
		printf("\nO numero repetido é %.2f",num2);
	}
	else
	{
		printf("\nNao tem numero repetidos");
	}
return 0;

}
