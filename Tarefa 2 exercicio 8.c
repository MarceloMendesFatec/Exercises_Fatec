/* Tarega 2 exercicio 6
 
 A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. 
 Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada). Na prática também vale a mesma fórmula. 
 As notas das duas partes se juntam no final do semestre para compor a nota do aluno na 
 disciplina, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. 
 Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre dele na disciplina.


*/
#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
   printf("Calculo de media do semestre \n");
//1 Var declaration
   
   float note1,note2,note3,note4,media;

//2 input
   printf("Digite sua primeira nota teorica: ");
   scanf ("%f",&note1);
   printf("Digite sua segunda nota teorica: ");
   scanf ("%f",&note2);
   printf("Digite sua primeira nota pratica: ");
   scanf ("%f",&note3);
   printf("Digite sua segunda nota pratica: ");
   scanf ("%f",&note4); 
    
//3 calc
  media   = ((note1*3)+(note2*3)+(note3*2)+(note4*2))/10;
  
//4 output   
  printf("sua media é :%.1f",media);
  
return 0;

}
