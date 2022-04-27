/* 	
   18)A empresa de perfumes Tabajuru está fazendo uma pesquisa para saber a preferência do público. 
   Os entrevistados respondem as seguintes perguntas: 
    "Gosta de perfume com cheiro de fruta <S/N> ?" 
    "Qual sua idade?" 
    Faça um programa que calcule e mostre: 
	-quantas pessoas responderam que sim a pergunta nº 1;  
	-quantas pessoas menores que 40 anos responderam não; 
	-média de idade das pessoas entrevistadas.     
	O programa será finalizado de acordo com a resposta a seguinte pergunta: 
	“Deseja finalizar <S/N>? “	  
*/

#include <stdio.h>  
#include <locale.h>
#include <stdlib.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	char op,answer;
 	int total_answer = 0 ,total_n = 0,age,sum_age = 0,people = 0;
 	float media;
   
//2 input
 	do{
 		printf("\nGosta de perfume com cheiro de fruta <S/N> ?: ");
 		answer = getche();
 		if( answer == 's'){
 			total_answer++;
		 }
 		printf("\nQual a sua idade ?: ");
 		scanf("%d",&age);
 		sum_age += age;
 		if( answer == 'n' && age < 40){
 			total_n++;
		 }
 		printf("\nDeseja finalizar <S/N>?");
 		op = getche();
 		
		people++;
		
	}while(op != 's');
	
//3 calc
		media = sum_age/people;
//4 output

	printf("\nquantas pessoas responderam que sim a pergunta nº 1: %d",total_answer);
	printf("\nquantas pessoas menores que 40 anos responderam não: %d",total_n);
	printf("\nMedia de idade das pessoas entrevistadas foi de : %.1f anos",media);

	
return 0;

}
