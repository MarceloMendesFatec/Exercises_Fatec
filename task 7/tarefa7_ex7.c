/* 	
   7. Um triângulo pode ser classificado de acordo com as medidas de seus lados: 

- Um triângulo equilátero possui todos os lados de mesma medida. 
- Um triângulo isósceles possui dois lados de mesma medida. 
- Um triângulo escaleno possui as medidas dos três lados diferentes. 

Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) 
e classificá-lo em equilátero, isósceles ou escaleno. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	
 	int lado1,lado2,lado3;
  
//2 input
 	
 	printf("\nDigite o primeiro lado do Triangulo: ");
 	scanf("%d",&lado1);
	printf("\nDigite o segundo lado do Triangulo: ");
	scanf("%d",&lado2);
	printf("\nDigite o terceiro lado do Triangulo: ");
	scanf("%d",&lado3);
	
//3 calc

	if ( lado1 == lado2 && lado1 == lado3)
	{
		printf("\nEste é um triangulo equilatero");
	}
	else
	{
		if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
		{
			printf("\nEste é um triangulo isoceles");
		}
		else
		{
			printf("\nEste é um triangulo escaleno");
		}
	}

	
return 0;

}
