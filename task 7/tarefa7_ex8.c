 /* 	
   8. Fa�a um programa para calcular o peso ideal de uma pessoa. 
   Ao iniciar o programa, pe�a a idade da pessoa, pois o �ndice n�o � preciso 
   para crian�as e pessoas idosas.
   Assim, n�o calcule para pessoas maiores que 65 anos e menores que 12 anos. 
   Atrav�s do sexo (1 para masculino, 2 para feminino) e da altura, calcular o 
   peso ideal de uma pessoa. 
   Receber tamb�m o peso atual dela e indicar se a mesma est� no peso ideal 
   (margem de erro de +- 5%), acima ou abaixo, conforme o c�lculo: 

F�rmula do peso ideal do homem: (72.7 * altura) � 62 
F�rmula do peso ideal da mulher: (62.1 * altura) � 48.7 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int age,sex;
 	float alt,ideal,pesoideal,peso;

   
//2 input
 	
 	printf("\nDigite a sua idade: ");
 	scanf("%d",&age);
 	printf("\nDigite 1 para masculino e 2 para feminino: ");
 	scanf("%d",&sex);
 	printf("\nDigite a altura no formato ( 1,78 ):  ");
 	scanf("%f",&alt);
 	printf("\nDigite seu peso em KG: ");
 	scanf("%f",&peso);
 	

//3 calc
	
	if ( age < 12 || age > 65 )
	{
		printf("\nNao � possivel calcular nesta faixa etaria");
	}
	else
	{
		if ( sex == 1)
		{
			pesoideal = (72.7 * alt) - 62;
			printf("\n O peso ideal � de %.2f",pesoideal);
		}
		else
		{
			pesoideal = (62.1 * alt) - 48.7;
			printf("\n O peso ideal � de %.2f",pesoideal);
		}
	}
	
	if (peso > (pesoideal * 1.05) || peso < (pesoideal * 0.95))
	{
		printf("\nVoce nao esta no seu peso ideal");
	}
	else
	{
		printf("\nVoce esta no seu peso ideal");
	}

	

return 0;

}
