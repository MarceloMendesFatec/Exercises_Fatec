/* 
16) Faça aparecer na tela as opções do menu abaixo: 
------------------------------------ 
1 – Multiplicação 
2 – Adição 
3 – Divisão 
4 – Subtração 
5 – Fim de processo 
Informe o primeiro valor: 
Informe o segundo valor: 
----------------------------------- 
Solicitar uma opção por parte do usuário 
Faça o cálculo da operação escolhida. Somente finalize se for digitado 5. 
 	
   	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
	float n1,n2,result;
	int op;
  	
//2 input
 	printf("1 – Multiplicação\n");
	printf("2 – Adição\n");
	printf("3 – Divisão\n");
	printf("4 – Subtração\n");
	printf("5 – Fim de processo \n");
	printf("Escolha a Opção: ");
	scanf("%d",&op);
	if (op == 5){// condição para o encerramento do progama
		exit(0);
	}
	printf("Informe o primeiro Valor: ");
	scanf("%f",&n1);
	printf("Informe o segundo Valor: ");
	scanf("%f",&n2);
	
	
//3 calc

	switch (op){// estrutura para o calculo com base no operador escolhido
		
		case 1 : result = n1*n2;
		break;
		case 2 : result = n1+n2;
		break;
		case 3 : result = n1/n2;
		break;
		case 4 : result = n1-n2;
		break;
	}
	
	printf("O resultado é:  %.2f",result);
	
return 0;

}
