#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//include "minhasfuncoes.c"


void header();//prototipo da função
void header2();
int main()
{
	setlocale(LC_ALL, "Portuguese");
	header();// chama a rotina(função)
	
	
	
	
	return 0;//retorna ao sistema operacional windows o valor 0 significa sucesso de execução
}

void header()
{
	system ("color 0A");
	system("cls");
	printf("----------------\n");
	printf("Sistema Folha v 007\n");
	system("date /t");
	system("time /t");
	printf("---------------\n");
	printf("\n\n");
	
	 void header2();
	
		printf("--------------------\n");
		printf("--------------------\n");
		printf("Calculo IR \n");
		printf("--------------------\n");
		printf("--------------------\n");
}

