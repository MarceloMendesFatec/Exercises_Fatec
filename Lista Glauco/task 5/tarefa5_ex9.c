/* 	
    9. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, 
	sen�o exibir na tela �Ano N�o-Bissexto�. 
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
    Um ano tamb�m � bissexto se for divis�vel por 400	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int ano, resto;
   
//2 input
 
	printf("Forneca o ano:");
	scanf("%d",&ano);
	
//calc

	if (ano%100 == 0)	
		if (ano%400 == 0)
	{	
		printf("\nO Ano %d e bissexto ", ano);
	}
	else
	{
		printf("\n O Ano %d Nao e bissexto", ano);
 	}
	
	else 
		if (ano%4 == 0)
	{
		printf("\nO Ano %d e bissexto ", ano );
	}
	else
	{
	
	printf("\nO Ano %d nao e bissexto ", ano);
	
	}
			
return 0;

}
