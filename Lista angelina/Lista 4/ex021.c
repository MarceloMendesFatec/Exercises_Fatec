/*21)
Faça um programa que cadastre as notas da disciplina de programação
dos 20 alunos da turma e as armazene num vetor. Calcule e mostre: a maior nota,
a média das notas digitadas, as notas que estão acima da média.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#define N 5



int main(){
	setlocale(LC_ALL, "Portuguese");


int i, aluno, cont=0;
float nota[N], maior,soma=0.0, media;



	for (i=0;i<N;i++){
		printf("Nota do aluno %i: ", i+1);
		scanf("%f",& nota[i]);

			if (i==0){
				maior = nota[i];
				}
		else{
			if (nota[i] > maior){
				maior = nota[i];
				}
			}	
		soma += nota[i];

	}
	media = soma/N;
	
	for (i=0;i<N;i++){

		if (nota[i] > media){
			cont +=1;
		}
	}
printf("\nA media das notas digitadas foi %.2f", media);
printf("\nA maior nota foi %.2f ",maior);
printf("\n%i estao acima da media", cont);



}
