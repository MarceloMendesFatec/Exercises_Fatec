/* 	
Receber a idade de uma pessoa,

Classificar a pessoa conforme a sua idade:

Beb�, Crian�a, Adolescente, Jovem, Adulto, Idoso e Matusal�m.

Se o usu�rio digitar uma idade menor do que zero, mostrar uma mensagem de erro e finalizar a aplica��o.


0-1=Bebe
2-12=crian�a
13-17=adolescente
18-23=jovem
24-59=adulto
60-120=idoso
120+=Matusalem
*/
#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int idade;
   
//2 input
 	
 	printf("\n Digite a sua idade: ");
 	scanf("%d",&idade);
	
//3 calc
	if (idade <0)
	{
		printf("\nERRO");
	}
	else if (idade <2)
	{
		printf("\nVoce � um bebe");
	}
	else if (idade <13)
	{
		printf("\nVoce � uma crian�a");
	}
	else if (idade <18)
	{
		printf("\nVoce � um adolescente");
	}
	else if (idade <24)
	{
		printf("\nVoce � um jovem");
	}
	else if (idade <59)
	{
		printf("\nVoce � um adulto");
	}
	else if (idade <120)
	{
		printf("\nVoce � um idoso");
	}
	else if (idade >=120)
	{
		printf("\n Voce so pode ser o matusalem !");
	}
	
return 0;

}
