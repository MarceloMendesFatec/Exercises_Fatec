/* 	
   	  Defini��o de struct
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padr�o
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de fun�oes no sistema
#include <windows.h> //cont�m declara��es para todas as fun��es na API do Windows
#include <conio.h>  //s�o utilizadas para manipular caracteres na tela.
#include <time.h>  //para manipula��o de datas e hor�rios  de modo padr�o.

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
