/* 	
   2. Receber um intervalo (dois valores) e em seguida um número. 
   Informar se o número está dentro, fora ou nas extremidades do intervalo. 
   Por exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 
   está em uma extremidade do intervalo. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int num1,num2,num3;

//2 input
 	
 	printf("\nDigite o primeiro numero para o intervalo: ");
 	scanf("%d",&num1);
 	printf("\nDigite o segundo numero para o intervalo: ");
 	scanf("%d",&num2);
 	printf("\nDigite o numero para verificar a posição: ");
 	scanf("%d",&num3);

//3 calc
	
	if (num3 == num1 || num3 == num2)
	{
		printf("\n\n O numero %d esta na extremidade",num3);
	}
	else if (num3 > num1 && num3 < num2)
	{
		printf("\nO numero %d esta dentro do intervalo",num3);
	}
	else (num3 < num1 || num3 > num2);
	{
		printf("\nO numedo %d esta fora do intervalo",num3);
	}
	
return 0;

}
