/* 	
   5. Receber três números e mostrar qual é o maior deles. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	float num1,num2,num3,max;
   
//2 input
 	
 	printf("\nDigite o primeiro numero: ");
 	scanf("%f",&num1);
 	printf("\nDigite o segundo numero: ");
 	scanf("%f",&num2);
 	printf("\nDigite o terceiro numero: ");
 	scanf("%f",&num3);

//3 calc

	if ( num1 > num2)
	{
		if(num1 > num3)
		{
			max=num1;
			printf("\nO maior numero é: %.f",max);
		}
		else
		{
			max=num3;
			printf("\nO maior numero é: %.f",max);
		}
	}
	else
	{
		if(num2 > num3)
		{
			max=num2;
			printf("\nO maior numero é: %.f",max);
		}
		else
		{
			max=num3;
			printf("\nO maior numero é: %.f",max);
		}
	}

	
return 0;

}
