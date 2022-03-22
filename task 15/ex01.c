

/* 	
  1.Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int soma,lin,col,tab[3][4];
 	
 	soma=0;

//2 input
 	
 	for (lin=0;lin<3;lin++){
 		for(col=0;col<4;col++){
 			printf("Digite um valor  para tab [%d][%d]: ",lin,col);
 			scanf("%d",&tab[lin][col]);
 			soma+=tab[lin][col];
		}
	}
//3 output

	printf("A soma dos valores da matriz é de : %d",soma);

return 0;

}
