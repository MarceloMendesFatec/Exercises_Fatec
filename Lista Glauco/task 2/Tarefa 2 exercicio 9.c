/* Tarefa 2 exercicio 9

Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade através do pagamento de um imposto único sobre o salário, de 37%. 
Receber o salário bruto (valor do salário sem descontos) 
de um trabalhador dinamarquês e calcular o salário líquido (valor do salário após os descontos).
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
   printf("O salario liquido é de :%.2f$",ns);
   
return 0;

}
