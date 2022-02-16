/* 	
    6. Receber dois números e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int num1,num2,menor,maior;
   
//2 input
 	
	printf("Digite o primeiro numero: ");
 	scanf("%d",&num1);
 	printf("Digite o segundo numero: ");
 	scanf("%d",&num2);
 	
 	menor=num1;
 	maior=num2;
 	
//3 calc
	if (maior < menor )
	{
		menor=num2;
		maior=num1;
	}

	printf("\n %d %d ",menor,maior);
	
return 0;

}
