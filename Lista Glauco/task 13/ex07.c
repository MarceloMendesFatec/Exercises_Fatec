/* 

	7. Implemente um programa que imprime a figura abaixo. 
	A quantidade de linhas da figura abaixo deverá ser informada pelo usuário, 
	sendo o máximo de linhas permitido de 20 linhas, e o mínimo de 1 linha. 
	No exemplo abaixo a quantidade de linhas é de 4.

    *
   ***
  ***** 
 ******* 	
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int i,j,alt;
	
   
//2 input
 	
	printf("Digite a quantidade de linhas: \n");
	scanf("%d",&alt);

	if(alt < 1 || alt > 20){
		printf("ERRO \n");
	}else{
		for(i=1;i<=alt;i++)
		{
			for(j=1;j<=alt-i;j++)
				printf(" ");
			for(j=1;j<=2*i-1;j++)
				printf("*");
			
				printf("\n");
		
		}
	}
	

	
return 0;

}
