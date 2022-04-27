/* 	
    6. Define-se como elemento minimax de uma matriz o menor elemento da linha 
	onde se encontra o maior elemento da matriz. Faça um programa que recebe uma matriz 4x4 e 
	mostra qual é seu elemento minimax, bem como sua posição na matriz.	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int minimax,maior,linha,lin,col,tab[4][4];
	
//2 input
 	
 	for(lin=0;lin < 4; lin++){
 		for(col=0;col < 4; col++){
 			printf("Digite um numero [%d][%d]: ",lin,col);
	 		scanf("%d",&tab[lin][col]);
		}
	}

//3 calc
	maior = tab[0][0];
	for(lin=0;lin <4; lin++){
		for(col=0;col <4; col++){
			if(tab[lin][col] > maior){
				
				maior = tab[lin][col];
				linha = lin;
			}
		}
	}

	minimax = tab[linha][0];//Var linha esta armazenando o valor da linha do maior numero
	for(col=0; col < 4; col++){
		if(tab[linha][col] < minimax){
			minimax = tab[linha][col];
		}
   	
	}
	
//output
	
	printf("\n Elemento minimax = %d",minimax);
	
return 0;

}
