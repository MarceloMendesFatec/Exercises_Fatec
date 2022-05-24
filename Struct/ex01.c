/*
1)  Faça um programa de controle financeiro de uma pessoa. Para que isso seja feito deve ser:

    -- criada uma estrutura que armazene a descrição do gasto, o valor e data do gasto.

	-- a estrutura deve ter no máximo 100 registros

	-- receber os gastos de forma repetida. Somente finalizar se o usuário quiser. 
	Para isso, ao final da entrada, pergunte se o usuário deseja finalizar. 
	Se sim, mostre o total do gasto, se não receba mais uma entrada.

    -- a cada entrada de gasto vá acumulando os valores numa variável total de gastos.
    
    
    autor: Marcelo Junior Mendes 10/05/2022
*/


#include <stdio.h>  
#include <locale.h> 
#include <ctype.h>
#include <conio.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    

	int i;
	char op;
	float soma = 0;
	
	struct ficha_gasto			// tipo de dado
	{
		 char descricao[30];
		 float valor;
		 char data[10];
	};
	
	struct ficha_gasto total;	// variavel "total" que é do tipo "struct ficha_gasto"


	for(i = 0 ; i < 100 ; i++){ // inicio do laço de repetição
		
		printf("\nDigite a descricao do gasto  :  ");
		fflush(stdin);gets(total.descricao);		// função para receber uma string e armazenar dentro do struct
		
		printf("\nDigite o valor do gasto :  ");
		scanf("%f",&total.valor);
		soma += total.valor;						// variavel de contadora da soma 
		
		printf("\nDigite a data xx/xx/xxxx :  ");
		fflush(stdin);gets(total.data);				// função para receber uma string e armazenar dentro do struct
		
		printf("\ndeseja finalizar o progama  <s/n> ??  :  ");
		op = getche();
		if(op == 's'){								// condição para finalizar o progama
			printf("\nO total do valor gasto foi de %.2f",soma);
			exit(0);
		}
		
	}


return 0;

}
	
