/* 	
   	  exercicio com uma funcao para elevar um numero ao quadrado
   	  FUN��O COM PASSAGEM DE PAR�METRO POR VALOR

*/

#include <stdio.h>  
#include <locale.h> 

float funcaoqd(float num); // prototipo da funcao

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
	
	float num,square;

   
//2 input
 	
 	printf("Digite um numero: ");
 	scanf("%f",&num);
 	printf("\nNa fun��o MAIN o numero digitado � : %.2f",num);
 	square = funcaoqd(num);
	printf("\nO numero quadrado � : %.2f",square);
//3 calc

	
return 0;

}

float funcaoqd(float num){ // funcao quadratitica 
	
	float qd = num*num;
	printf("\nNa fun��oqd o numero digitado tem valor : %.2f",qd);
	return qd;
}
