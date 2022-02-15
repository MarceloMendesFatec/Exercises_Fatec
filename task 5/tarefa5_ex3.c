/* 

3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    Se não for possível dividir, apenas escreva “não existe divisão por zero”. 
    
    teste 10/5=2
      10,8/2,3=4,70
		  10/0= “não existe divisão por zero”.
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	float num1,num2,result;
  
//2 input

	printf("\nCalculo de Divisão");
	printf("\n\nDigite o numerador: ");
	scanf("%f",&num1);
	printf("\nDigite o denominador: ");
	scanf("%f",&num2);

//3 calc
	if (num2<=0)
	{
		printf("\nNao é possivel dividir por 0");
	}
	else
	{
		result=num1/num2;
		printf("\n o resultado é %.2f",result);
	}
	
return 0;

}
