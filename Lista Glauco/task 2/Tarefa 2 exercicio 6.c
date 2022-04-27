/* Tarefa 2 exercicio 6

Calcular o perímetro de uma circunferência recebendo seu raio. C = 2 *  * r (utilizar  = 3.14).
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
   
   
    printf("Calcular o perimetro de uma circuferencia recebendo seu raio \n");
    
//1 Var declaration

   float result,radius,pi;
    
//2 input
    printf("Digite em cm o valor do raio : ");
    scanf ("%f",&radius);
//3 calc
    pi=3.14;
    result= 2*pi*radius;
//4 output   
  printf("O perimetro desta circuferencia é : %.2fcm",result);
  
return 0;

}
