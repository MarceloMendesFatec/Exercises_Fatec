/* 	
    7. Implemente um programa que calcule aumento de sal�rio no ano corrente. 
    Se o sal�rio for de at� R$ 1000.00 deve ser calculado o novo sal�rio com aumento de 5%, 
	para um sal�rio maior que R$ 1000.00 o aumento � de 7%
	
	teste salario 1000=1050
	              1100=1777
*/
  
#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	float baseSalary,finalSalary;
   
//2 input
 	
	printf("\nDigite o salario: ");
	scanf ("%f",&baseSalary);
	
//3 calc

	if (baseSalary<=1000)
	{
		finalSalary = (baseSalary*0.05)+baseSalary;
		printf("O salario com aumento � %.2f",finalSalary);
	}
	else
		finalSalary = (baseSalary*0.07)+baseSalary;
		printf("O salario com aumento � %.2f",finalSalary);
	
return 0;

}
