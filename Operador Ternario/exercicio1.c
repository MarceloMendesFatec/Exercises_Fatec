/* 
Mostra o quadrado de um n�mero diferente de zero 
Se o n�mero digitado for zero aparece a mensagem Erro 
*/ 
#include <stdio.h> 
#include <stdlib.h> 

	int main() 
{ 
 	int x; 
 	printf("Entre com o valor de x: "); 
 	scanf("%i", &x); 
 	x!= 0  ? printf("\n Quadrado de x = %i", (x*x)) : printf("\nErro"); 
 	sleep(2000); 
} 
