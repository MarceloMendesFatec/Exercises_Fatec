/* Tarefa 2 exercicio 3

 Receber um comprimento em metros e convertê-lo para centímetros.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
    float lenght,result;
//2 input
    printf("digite um comprimento em metros :");
    scanf (" %f", &lenght);
//3 calc
   result = lenght*100;
//4 output   
   printf("O resultado em centimetros é : %.0fcm",result);
   
return 0;

}
