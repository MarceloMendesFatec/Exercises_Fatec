/* 	
    2. Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int num1,negat,posit,i;
 	i=0;
 	negat=0;
 	posit=0;

   
//2 input
 	
 	do {
 		
		printf("Digite um numero: \n");
 		scanf("%d",&num1);
 		i++;
 			if(num1 < 0)
 			{
 				negat++;
			}
 			else (num1 >= 0);
 			{
 				posit++;
			}
	}while(i<10);
	
	printf("Quantidade de negativos: %d e positivos: %d\n",negat,posit);
	
 	
//3 calc

	
return 0;

}
