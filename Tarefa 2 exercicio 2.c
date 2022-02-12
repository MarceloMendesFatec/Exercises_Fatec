/* Tarefa 02 exercicio 2

Receber base e altura de um triângulo e calcular sua área.

*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration

    float base,height,area;
    
//2 input

    printf("Digite a base do Triangulo : ");
    scanf (" %f",&base);
    printf("Digite a altura do Triangulo : ");
    scanf (" %f",&height);
    
//3 calc

    area=(base*height) / 2;

//4 output

    printf("Resultado da area do triangulo : %.2f",area);
    

return 0;

}
