/* 	
  2. Receber um número e mostrar sua tabuada do 1 ao 10.  	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int number,i;
   
//2 input
	printf("Digite um numero: \n");
	scanf("%d",&number); 	
	printf("======================\n");
//3 calc

	for (i=1;i<=10;i++)
	{
		printf("Tabuada %d X %d = %d\n",number,i,number*i);
	}
	
	
return 0;

}
