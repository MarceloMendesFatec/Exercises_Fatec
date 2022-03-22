/* 	

		4. Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles. 

		Exemplo: 
             Se você digitar os valores 5 e 11, exibir os valores 6, 7, 8, 9, 10.
             Se você digitar os valores 11 e 5, exibir os valores 6, 7, 8, 9, 10.
             Se você digitar os valores -3 e 8, exibir os valores   -2, -1, 0, 1, 2, 3, 4, 5, 6, 7.
             Se você digitar os valores  8 e -3, exibir os valores  -2, -1, 0, 1, 2, 3, 4, 5, 6, 7.
             Se você digitar os valores  -1 e -6 exibir os valores  -5, -4, -3, -2
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int num1,num2;
   
//2 input
 	
 	printf("Digite o primeiro numero: ");
 	scanf("%d",&num1);
 	printf("Digite o segundo numero: ");
 	scanf("%d",&num2);

//3 calc
	if(num1<num2)
	{
		for(num1++;num1<num2;num1++)
		{
			printf("%d\n",num1);
		}	
	}
	else(num1>num2);
	{
		for(num2++;num2<num1;num2++)
		{
			printf("%d\n",num2);
		}
	}
			
		
	
	
	
	
return 0;

}
