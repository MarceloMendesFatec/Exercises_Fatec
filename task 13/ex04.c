/* 	
  4. Receber 10 números e, ao final, informar qual é o maior e o menor deles. 
    	  
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
	
	printf("O maior é : %d e o menor é : %d\n",maior,menor);
	



	
return 0;

}
