/* 	
    6. Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o, 
	que deve ser 1 para adi��o, 2 para subtra��o, 
	3 para multiplica��o e 4 para divis�o. 
	Mostrar na tela caso seja informada uma op��o inv�lida.	  
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
	printf("\nDigite o numero correspondente para a opera��o");
	printf("\n\n 1=+ 2=- 3=* 4=/:  ");
	scanf("%d",&oper);

//3 calc

	if (oper < 1 || oper > 4)
	{
		printf("\n ERRO OP�AO INVALIDA!");
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
	
	printf("\n O resultado � : %2.f",result);
	
return 0;

}
