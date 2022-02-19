/* Fa�a um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcion�rio.
Calcular e mostrar o sal�rio base (horas trabalhada * valor hora).
Se o funcion�rio tiver um sal�rio base menor que R$ 1500,00, dar uma bonifica��o de 15%, caso contr�rio dar uma bonifica��o de 5%.
Mostrar o sal�rio base, bonifica��o e o sal�rio final.
O sal�rio final � igual ao sal�rio base mais o valor da bonifica��o.

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
	printf("\nO salario base � de : R$ %.2f",salary);
	
	if (salary<=1500)
	{
		printf("\nBonifica��o � de : R$%.2f",bonus1);
	}
	else
	{
		printf("\nBonifica��o � de : R$%.2f",bonus2);
	}
	
	if (salary<=1500)
	{
		final_salary= bonus1+salary;
	}
	else
	{
		final_salary= bonus2+salary;
	}
	
	printf("\nO salario final � de : R$%.2f",final_salary);
	printf("\n\n");
		

return 0;

}
