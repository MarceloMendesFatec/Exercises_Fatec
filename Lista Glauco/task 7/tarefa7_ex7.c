/* 	
   7. Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados: 

- Um tri�ngulo equil�tero possui todos os lados de mesma medida. 
- Um tri�ngulo is�sceles possui dois lados de mesma medida. 
- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes. 

Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3) 
e classific�-lo em equil�tero, is�sceles ou escaleno. 	  
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
		printf("\nEste � um triangulo equilatero");
	}
	else
	{
		if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
		{
			printf("\nEste � um triangulo isoceles");
		}
		else
		{
			printf("\nEste � um triangulo escaleno");
		}
	}

	
return 0;

}
