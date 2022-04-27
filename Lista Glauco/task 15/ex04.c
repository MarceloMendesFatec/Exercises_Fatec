/* 	
  4.Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.

*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	int i,lin,col,tab[4][4];
   
//2 input
 	
 	 for(lin=0;lin<4;lin++){
 	 	for(col=0;col<4;col++){
 	 		printf("Digite um valor de tab[%d][%d]: ",lin,col);
 	 		scanf("%d",&tab[lin][col]);
		}
	}
	 	
//3 output

	printf("\n\nDiagonal principal: ");
	
	for(i=0;i<4;i++){
		printf("%d ",tab[i][i]);
	}
	
	
return 0;

}
