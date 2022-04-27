/* 	
  7. Para 30 alunos da turma de Algoritmos e Programação, 
  receber a média de teoria e a média de laboratório, 
  calcular a média final (final = teoria * 0.6 + laboratório * 0.4) e informar   	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
		float soma1,soma2,note1,note2,media;
		int i;
		
		soma1=0;
		soma2=0;
   		
		for(i=1;i<=30;i++)
		{
			printf("Digite a nota da teoria do aluno %d: \n",i,note1);
			scanf("%f",&note1);
			soma1=soma1+note1;
			printf("Digite a nota do laboratorio %d: \n",i,note2);
			scanf("%f",&note2);
			soma2=soma2+note2;
		}
		
		media= ((soma1*0.6)+(soma2*0.4))/30;
		
		printf("A media da sala é %.2f",media);4
		

	
return 0;

}
