/* 	
   	 Desafio jogo da memoria simples com 5 numeros 
   	 autor: Marcelo Mendes
   	 Fatec itu 05/2022
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h>//Biblioteca padrao para o uso de funçoes no sistema
#include <windows.h> //contém declarações para todas as funções na API do Windows
#include <conio.h>  //são utilizadas para manipular caracteres na tela.
#include <time.h>  //para manipulação de datas e horários  de modo padrão.

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("Jogo da memoria simples");
	srand(time(NULL));// gerar numeros aleatorios
//1 Var declaration
 	
 	char op;
 	int i,j,soma = 0,number[5],resposta[5];

	
   
//2 start
	printf("Adivinhe os Valores !!");
	printf("\n\n\n\tSe estiver preparado pressione uma tecla: ");
	op = getch();
 	
 	system ("cls");

//3 output

	for(i = 0 ; i < 5 ; i++){// laço de repetição de  geração de numeros randomicos
		number[i]=(rand() % 10);// numeros randomicos de 0 a 10
	}
			
        printf ("\nDecore os numeros abaixo \n\n\n");
    	
        for (i=0;i<5;i++){//laco de repeticao para impressao dos numeros randomicos
            Sleep (100);	// contador de 100ms
			printf ("%d\t", number[i]);
        }
        Sleep(1000);		// pausa de 1s
		system ("cls");
		
		
		printf("Quais sao os numeros na sequencia mostrada ? : \n");
		
		for(i = 0 ; i < 5 ; i++){ // laço de repetição para obtenção de respostas
			printf("Numero [%d]º: ",i+1);
			scanf("%d",&resposta[i]);
			 if(resposta[i] == number[i]){
			 	soma++;     // variaavel contadora de acertos 
			 }
		}
		
       printf("Total de %d acertos :)",soma);
   
return 0;

}
