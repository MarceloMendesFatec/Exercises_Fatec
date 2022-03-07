/* 	
    6. Implementar uma calculadora onde o usuário digita dois números e uma opção, 
	que deve ser 1 para adição, 2 para subtração, 
	3 para multiplicação e 4 para divisão. 
	Mostrar na tela caso seja informada uma opção inválida.	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int oper;
   		
   	float num1,num2,result;
   	
//2 input
	printf("\nDigite o primeiro numero: ");
	scanf("%f",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%f",&num2);
	printf("\nDigite o numero correspondente para a operação");
	printf("\n\n 1=+ 2=- 3=* 4=/:  ");
	scanf("%d",&oper);

//3 calc

	if (oper < 1 || oper > 4)
	{
		printf("\n ERRO OPÇAO INVALIDA!");
	}
	else if (oper == 1)
	{
		result= num1 + num2;
	}
	else if (oper == 2)
	{
		result= num1 - num2;
	}
	else if (oper == 3)
	{
		result= num1 * num2;
	}
	else if (oper == 4)
	{
		result= num1 / num2;
	}
	
	printf("\n O resultado é : %2.f",result);
	
return 0;

}
