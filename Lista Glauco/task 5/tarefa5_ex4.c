/* 

4. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
   Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 
    
		  teste	  10+10=aprovado
		  		  8+3=aprovado
		  		  3+2=reprovado
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	float note1,note2,media,rec;
  
//2 input

	printf("\nDigite a nota 1: ");
	scanf("%f",&note1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&note2);
	
//3 calc

	media=(note1+note2)/2;
	
//4 output
	
	if (media>=5)
	{
		printf("\n Parabens voce foi aprovado com media %.2f",media);
	}
	else
	{
		rec= 5-media;
		printf("\n Faltou apenas %.2f para atingir a media ",rec);
	}
return 0;

}
