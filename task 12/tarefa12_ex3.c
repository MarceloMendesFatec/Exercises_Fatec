/* 	
    3. Receber 10 números e informar se cada um deles 
	é negativo, positivo ou nulo. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int number,i;

   
//2 input
 	
 	for (i=1;i<=10;i++)
 	{
 		printf("Digite um numero: \n");
 		scanf("%d",&number);
 		
 		if (number == 0)
 		{
 			printf("O numero é nulo \n\n");
		}
		else if (number > 0)
		{
			printf("O numero é positivo \n\n");
		}
		else 
		{
			printf("O numero é negativo \n\n");
		}
	}

//3 calc

	
return 0;

}
