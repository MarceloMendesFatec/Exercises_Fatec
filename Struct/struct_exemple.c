/* 	
   	  Definição de struct
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de funçoes no sistema
#include <windows.h> //contém declarações para todas as funções na API do Windows
#include <conio.h>  //são utilizadas para manipular caracteres na tela.
#include <time.h>  //para manipulação de datas e horários  de modo padrão.

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
struct ficha_aluno
{
	char nome[40];
	int numero;
	float nota;
};

   
//2 input
 	
struct ficha_aluno aluno;

	printf("Digite o nome : ");
	fgets(aluno.nome,40,stdin);
	printf("Digite o numero : ");
	scanf("%d",&aluno.numero);
	printf("Digite a nota : ");
	scanf("%f",&aluno.nota);
//3 calc

	puts(aluno.nome);
	
return 0;

}
