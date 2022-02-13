/*
 Receber uma temperatura em Fahrenheits e convertê-la para Celsius.

Celsius = (Fahrenheit - 32) / 1.8.

*/



#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    printf("Calculo para conversao de Fahrenheit para Celsius \n");
//1 Var declaration
    
    float Fahrenheit,Celsius;
    
//2 input
    printf("Digite a temperatura em Fahrenheit : ");
    scanf ("%f", &Fahrenheit);
    
//3 calc
    Celsius = (Fahrenheit - 32) / 1.8;
    
//4 output   
    printf("O resultado em celsius é %.1fºC",Celsius);
    
return 0;

}
