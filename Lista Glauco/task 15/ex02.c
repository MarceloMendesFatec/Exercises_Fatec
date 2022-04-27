/* 	
  2 Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int maior,lin,col,tab[5][3];
 	maior=0;
 
//2 input
 	for(lin=0;lin<5;lin++){
 		for(col=0;col<3;col++){
 			printf("Digite o valor para tab[%d][%d]",lin,col);
 			scanf("%d",&tab[lin][col]);
 			if(tab[lin][col]>maior){
 				maior=tab[lin][col];
 				
			 }
 	
		}
	}

//3 output

	printf("O maior numero é: %d",maior);

	
return 0;

}
