/* 	
    24)Desenvolva um programa que receba 10 números, 
	armazene-os num vetor e imprima estes números 
	a) na ordem inversa à da leitura, 
	b) somente os que estão nas posições ímpares, 
	c) somente os valores pares informados, 
	d) a média dos valores armazenados, 
	e) o maior valor informado.   
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de funçoes no sistema

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int i,maior = 0,sum_vetor = 0,vetor[10];
 	float media;
 	
//2 input
 	for(i = 0 ; i < 10 ; i++){// preenche dados do vetor
 		
		printf("Digite um numeto para o vetor[%d]: ",i);
 		scanf("%d",&vetor[i]);
 		sum_vetor += vetor[i];// somatoria dos valores do vetor
	 	if(vetor[i] > maior ){
	 		maior = vetor[i];
		 }
	 }
//3calc
	
	media = sum_vetor/10.0;	 //calculo da media 
	 
//4 output	 
	 printf("\nVetor em ordem inversa");
 	for(i = 9 ; i >= 0 ; i--){// imprime o vetor de ordem inversa
 		
		 printf(" \n Vetor [%d] valor : %d",i,vetor[i]);
	 }
 	
 	printf("\n*******************************");
 	printf("\nSomente indices impares");
 	
	for(i = 0 ; i < 10 ; i++){// percorre os indices impares
		if(i%2 != 0){
			printf(" \n Vetor [%d] valor : %d",i,vetor[i]);
		}
		
	}
	 
	printf("\nSomente os Valores pares informados");
 	
	for(i = 0 ; i < 10 ; i++){//imprime os valores pares inseridos
 		if( vetor[i] % 2 == 0 ){
 			printf("\n Vetor [%d] valor : %d",i,vetor[i]);
		 }
	 }
	
	printf("\n*******************************");
	printf(" \nA media dos valores informados é de %.1f",media);
	printf("\n O maior valor informado foi : %d",maior);

	
return 0;

}
