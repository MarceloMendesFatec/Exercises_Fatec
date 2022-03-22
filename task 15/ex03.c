/* 	
  3.Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz com o dobro
  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int lin,col,tab[3][3],tab2[3][3];

   
//2 input
 	for (lin=0;lin<3;lin++){
 		for(col=0;col<3;col++){
 			printf("Digite o valor de tab[%d][%d]: ",lin,col);
			 scanf("%d",&tab[lin][col]);
			 tab2[lin][col]=tab[lin][col]*2;
		}
	}
//3 output  test

	printf("tab[1][1] %d",tab[1][1]);
	printf("\ntab2[1][1] %d",tab2[1][1]);

	
return 0;

}
