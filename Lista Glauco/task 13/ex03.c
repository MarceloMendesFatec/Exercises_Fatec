/*
	3. Solicitar quantos números o usuário deseja informar, 
	receber cada um deles e mostrar a média aritmética dos valores positivos no final. 
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	
	int num1,num2,posit,media,i,sum;
	sum=0;
	i=0;
	posit=0;
   
//2 input
 	
	printf("Quantos numeros deseja informar: ?\n");
	scanf("%d",&num1);
//3 calc

	do{
		
		printf("Digite o numero: \n");
		scanf("%d",&num2);
		if(num2 >= 0)
		{
			sum+=num2;
			posit++;
		}
		
		i++;
		
	}while(i<num1);
	
	media=sum/posit;
	
	printf("A media é : %d\n",media);
	
	
return 0;

}
