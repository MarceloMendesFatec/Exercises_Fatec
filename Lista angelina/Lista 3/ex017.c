/* 	
17) A escola São Judas realizou um exame médico para verificar se os alunos estão 
aptos a frequentar as aulas de Educação Física. No exame verificou-se o peso, 
o gênero e a altura dos alunos. Elabore um programa que receba os dados e 
determine: 
-quantidade de alunos com mais 1.60 de altura; 
-quantidade de alunos do gênero feminino. 
O programa será finalizado de acordo com a resposta a seguinte 
pergunta: “Deseja finalizar <S/N>? “ 	  
*/

#include <stdio.h>  
#include <locale.h> 
#include <stdlib.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
	float altura;
	int   peso,sex;
	int total_fem = 0, total_alt = 0;
	char op;
	
   
//2 input
 	do{
 		printf("\nDigite o peso KG  do Aluno: ");
 		scanf("%d",&peso);
 		printf("\nDigite a altura do aluno: ");
 		scanf("%f",&altura);
 		if(altura > 1.60){
 			total_alt += 1;
		 }
 		printf("\nDigite 1 para M ou 2 para F: ");
 		scanf("%d",&sex);
 		if(sex == 2){
 			total_fem += 1;
		 }
 		printf("\nDeseja finalizar <S/N>?");
 		op = getche();
	 }while(op != 's');
 	

//3 output

	printf("\nQuantidade de alunos com mais 1.60 de altura : %d",total_alt); 
	printf("\nQuantidade de alunos do gênero feminino: %d",total_fem);

	
return 0;

}
