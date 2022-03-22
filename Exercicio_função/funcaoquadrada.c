/* 	
   	  exercicio com uma funcao para elevar um numero ao quadrado
   	  FUNÇÃO COM PASSAGEM DE PARÂMETRO POR VALOR

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
 	printf("\nNa função MAIN o numero digitado é : %.2f",num);
 	square = funcaoqd(num);
	printf("\nO numero quadrado é : %.2f",square);
//3 calc

	
return 0;

}

float funcaoqd(float num){ // funcao quadratitica 
	
	float qd = num*num;
	printf("\nNa funçãoqd o numero digitado tem valor : %.2f",qd);
	return qd;
}
