/* 	
   1. Solicitar quantos números o usuário deseja informar, 
   receber cada um deles e mostrar a média aritmética no final.  	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	
	int num1,num2,media,i,sum;
	sum=0;
	i=0;
   
//2 input
 	
	printf("Quantos numeros deseja informar: ?\n");
	scanf("%d",&num1);
//3 calc

	do{
		
		printf("Digite o numero: \n");
		scanf("%d",&num2);
		sum+=num2;
		i++;
		
	}while(i<num1);
	
	printf("sum= %d\n",sum);
	media=sum/num1;
	
	printf("A media é : %d\n",media);
	
	
return 0;

}
