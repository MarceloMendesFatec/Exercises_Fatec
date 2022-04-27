/* Tarefa 2 exercicio 7
Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. 
Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês e calcular o salário dele.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

 printf("Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês e calcular o salário dele \n");
//1 Var declaration
    float rt /* regular time */, et /* extra time */, wage /* salario */;
//2 input
    printf("Digite o total de horas normais trabalhadas : ");
    scanf ("%f",&rt);
    printf("Digite o total de horas extras trabalhadas : ");
    scanf ("%f",&et);
//3 calc
 wage= (rt*10.00)+(et*15.00);
//4 output   
 printf("O Salario total é de : %.2f$",wage);
 
return 0;

}

