/* Tarefa 2 exercicio 9

Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade atrav�s do pagamento de um imposto �nico sobre o sal�rio, de 37%. 
Receber o sal�rio bruto (valor do sal�rio sem descontos) 
de um trabalhador dinamarqu�s e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

printf("Receber o salario bruto e calcular o salario liquido \n");

//1 Var declaration
    float gs /* Gross Salary */ , ns /*net salary */;
//2 input
     printf("digite o salario bruto : ");
     scanf ("%f", &gs);
//3 calc
    ns=gs-(gs*0.37);
//4 output   
   printf("O salario liquido � de :%.2f$",ns);
   
return 0;

}
