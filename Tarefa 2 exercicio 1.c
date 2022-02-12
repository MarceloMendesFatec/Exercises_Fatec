/*

     Tarefa 02 - Exercicio 1 receber dois valores e calcular a media aritmetica
     0. Ler com atencao o enunciado do exercicio!!
      se voce realmente sabe o que precisa ser feito, comeca a codificar o exercicio
      
      
      5. Tests
           se num1 = 10 e num2 = 20, average =15.00

		   
*/   

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    //1. var declaration
	// Tudo que eu digito eu guardo em variavel
	// tudo que e calculado e guardado em uma variavel
	// quais serao os tipos de variaves int ou float?
		
	float num1,num2,average;
	

	//2. input
	printf("Digite um numero real: ");
	scanf("%f", &num1);
	
    printf("Digite um numero real: ");
	scanf("%f", &num2);

    //3.Calc
    
     average = (num1 + num2) / 2;
  
	//4. Output
	printf("\nMedia = %.2f",average);
	//5. Testes

return 0;

}
	
