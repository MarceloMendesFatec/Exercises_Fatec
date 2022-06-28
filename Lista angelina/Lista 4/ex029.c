/* 	29)Fa�a um programa que receba na fun��o main() um n�mero inteiro e o envie para  a  fun��o  calcularQuadrado.  
A  fun��o  calcular  Quadrado  far�  a multiplica��o do n�mero recebido por ele mesmo e depois retornar� o resultado para a fun��o que a chamou. 
Ao final dever� ser mostrado o resultado do quadrado do n�mero na fun��o principal. 
   	  
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de fun�oes no sistema
int calcularQuadrado();
int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int square,num;

   
//2 input
 	
 	printf("Digite um numero inteiro: ");
 	scanf("%d",&num);
 	square = calcularQuadrado(num);
 	printf("\nO numero %d ao quadrado � : %d",num,square);

//3 calc

	
return 0;

}

int calcularQuadrado(int num){
	
	int qd = num*num;
	
	return qd;
}
