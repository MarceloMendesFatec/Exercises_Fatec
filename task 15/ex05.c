/* 	
  5.Faça um programa que recebe uma matriz 3x4 e mostra
   a soma dos elementos de uma linha escolhida pelo usuário.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int sum_lin,lin,col,indice,tab[3][4];
 	
//2 input
 	
	 for(lin=0;lin<3;lin++){
	 	for(col=0;col<4;col++){
	 		printf("Digite um numero [%d][%d]: ",lin,col);
	 		scanf("%d",&tab[lin][col]);
	 		
		 }
	 }
 		
//3 calc

	printf("Digite qual linha deseja fazer a soma: \n");
	scanf("%d",&indice);
	

	if(indice == 1){
		sum_lin = tab[0][0] + tab[0][1] + tab[0][2] + tab[0][3];
		printf("A somatoria dos valores desta linha é: %d",sum_lin);
	}else if(indice == 2){
		sum_lin = tab[1][0] + tab[1][1] + tab[1][2] + tab[1][3];
		printf("A somatoria dos valores desta linha é: %d",sum_lin);
	}else if(indice == 3){
		sum_lin = tab[2][0] + tab[2][1] + tab[2][2] + tab[2][3];
		printf("A somatoria dos valores desta linha é: %d",sum_lin);
	}
	
	
return 0;

}
