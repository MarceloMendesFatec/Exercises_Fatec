/* Tarega2 exercicio 5

A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia percorrida pelo tempo, 
ou seja, Vm = DS / Dt. Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso.

*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

  printf("Calcular a velocidade media de um veiculo em uma estrada \n");
//1 Var declaration
     float Speed,Distance,Time;
     
//2 input
    printf("Digite a distancia percorrida em Km: ");	
    scanf (" %f", &Distance);
    printf("Digite em minutos o tempo percorrido : ");
    scanf (" %f", &Time);
    
//3 calc
    Speed = Distance / ( Time/60 );

//4 output   
   printf("A velocidade media em Km/h � de : %.1f", Speed);
   

return 0;

}
