/* Faça um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcionário.
Calcular e mostrar o salário base (horas trabalhada * valor hora).
Se o funcionário tiver um salário base menor que R$ 1500,00, dar uma bonificação de 15%, caso contrário dar uma bonificação de 5%.
Mostrar o salário base, bonificação e o salário final.
O salário final é igual ao salário base mais o valor da bonificação.

*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration

	int hour;
	float bonus1,bonus2,final_salary,salary,money;
    
//2 input
 	
	printf("Calculo de Salario :");
 	printf("\n=========================================================");
	printf("\nDigite as horas trabalhadas: ");
	scanf("%d",&hour);
	printf("Digite o valor da hora trabalhada em R$: ");
	scanf("%f",&money);
	printf("=========================================================");

//3 calc
	
	salary= hour*money;
	bonus1= salary*0.15;
	bonus2= salary*0.05;
	
//4 output   
	printf("\nO salario base é de : R$ %.2f",salary);
	
	if (salary<=1500)
	{
		printf("\nBonificação é de : R$%.2f",bonus1);
	}
	else
	{
		printf("\nBonificação é de : R$%.2f",bonus2);
	}
	
	if (salary<=1500)
	{
		final_salary= bonus1+salary;
	}
	else
	{
		final_salary= bonus2+salary;
	}
	
	printf("\nO salario final é de : R$%.2f",final_salary);
	printf("\n\n");
		

return 0;

}
