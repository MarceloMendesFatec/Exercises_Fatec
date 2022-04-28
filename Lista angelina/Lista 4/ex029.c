/* 	29)Faça um programa que receba na função main() um número inteiro e o envie para  a  função  calcularQuadrado.  
A  função  calcular  Quadrado  fará  a multiplicação do número recebido por ele mesmo e depois retornará o resultado para a função que a chamou. 
Ao final deverá ser mostrado o resultado do quadrado do número na função principal. 
   	  
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de funçoes no sistema
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
 	printf("\nO numero %d ao quadrado é : %d",num,square);

//3 calc

	
return 0;

}

int calcularQuadrado(int num){
	
	int qd = num*num;
	
	return qd;
}
