/* 	
  4. Receber 10 n�meros e, ao final, informar qual � o maior e o menor deles. 
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int num1,maior,menor,aux,i;
	i=1; 
	 
	
//2 calc
 	printf("Digite um numero: \n");
 	scanf("%d",&num1);
 	maior=num1;
 	menor=num1;
 	
	do
	{
		printf("Digite um numero: \n");
		scanf("%d",&num1);
		i++;
		
		if( num1 > maior){
			maior = num1;
		}
		if( num1 < menor){
			menor= num1;
		}
		
	}while(i < 10);
	
	printf("O maior � : %d e o menor � : %d\n",maior,menor);
	



	
return 0;

}
