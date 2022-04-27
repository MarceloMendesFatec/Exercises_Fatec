/* 

5. Receber dois números e mostrar o maior deles.

	
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
   int num1,num2;
   
//2 input
	printf("\nDigite o numero 1º:");
	scanf("%d",&num1);
	printf("\nDigite o numero 2º:");
	scanf("%d",&num2);
//3 calc

	if (num1 > num2 )
	{
		printf("\nO maior numero é %d",num1);
	}
	else
	{
		(num2 > num1);
		printf("\nO maior numero é %d",num2);
	}
	
return 0;

}
