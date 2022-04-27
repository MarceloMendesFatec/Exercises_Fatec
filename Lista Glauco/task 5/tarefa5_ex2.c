/* 

2. Receber um número e verificar se ele esta na faixa de 0 à 9. 
  Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma 
  mensagem indicando que o número não se encontra na faixa. 

 	teste 2=ok
 		 11=erro
 		  0=ok
 		 -8=erro
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
   
   int num;

//2 input
	printf("\nVerificar se o numero se encontra entre 0 e 9");
	printf("\nDigite um numero: ");
	scanf("%d",&num);
		
//3 calc

	if (num >=0 && num<=9)
	{
		printf("\nO numero esta dentro da faixa");
	}
	else
		printf("\nO numero NAO esta dentro da faixa");
		
 

return 0;

}
