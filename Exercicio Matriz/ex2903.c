/* 	
   	faça o controle das notas dos alunos do 2ºsem do curso de ADS
	Neste semestre estao matriculados 35 alunos , cada aluno cursa 6 disciplinas
	O progama devera mostrar a media de cada disciplina e ao final a media geral do semestre.  
*/

#include <stdio.h>  
#include <locale.h> 
#define A 35 // ALUNO
#define D 6 // DISCIPLINA

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int i,j,aluno,disc; // i = linha , j= coluna
 	float sum_mediaD,mediaD,mediaG,tab[D][A];
 	float sum_mediaG = 0;
 	
//2 input
 	
 	for(i = 0 ; i < D ; i++){
 		 sum_mediaD = 0;
		 printf("\n\nDisciplina de Nº: %d", i + 1);
 			for(j = 0 ; j < A; j++){
 		 		printf("\nDigite a nota do aluno %d : ", j + 1);
 				scanf("%f",&tab[i][j]);
 				sum_mediaD += tab[i][j]; //variavel que guarda a soma das notas 
 				mediaD =  sum_mediaD / A ; // formula de resultado da media da disciplina 
		    }
		 printf("\nA media da disciplina %d é : %.2f", i + 1 , mediaD);
		 sum_mediaG += mediaD;
	 }
	
//3 output
	mediaG = sum_mediaG / D; // formula de resultado media geral do semestre
	printf("\n***************************");
	printf("\n\nA media geral do semestre é : %.2f ",mediaG);

	
return 0;

}
