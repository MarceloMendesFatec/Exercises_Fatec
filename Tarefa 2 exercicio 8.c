/* Tarega 2 exercicio 6
 
 A disciplina Algoritmos e Programa��o � dividida em duas partes: teoria e pr�tica. 
 Na teoria, s�o aplicadas duas provas (com nota de 0 a 10 cada). Na pr�tica tamb�m vale a mesma f�rmula. 
 As notas das duas partes se juntam no final do semestre para compor a nota do aluno na 
 disciplina, mas a teoria tem peso de 60%, enquanto a pr�tica tem peso de 40%. 
 Receba as notas de um aluno em cada prova te�rica e pr�tica e mostre a nota final do semestre dele na disciplina.


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
  printf("sua media � :%.1f",media);
  
return 0;

}
