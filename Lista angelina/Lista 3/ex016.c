/* 
16) Fa�a aparecer na tela as op��es do menu abaixo: 
------------------------------------ 
1 � Multiplica��o 
2 � Adi��o 
3 � Divis�o 
4 � Subtra��o 
5 � Fim de processo 
Informe o primeiro valor: 
Informe o segundo valor: 
----------------------------------- 
Solicitar uma op��o por parte do usu�rio 
Fa�a o c�lculo da opera��o escolhida. Somente finalize se for digitado 5. 
 	
   	  
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
 	printf("1 � Multiplica��o\n");
	printf("2 � Adi��o\n");
	printf("3 � Divis�o\n");
	printf("4 � Subtra��o\n");
	printf("5 � Fim de processo \n");
	printf("Escolha a Op��o: ");
	scanf("%d",&op);
	if (op == 5){// condi��o para o encerramento do progama
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
	
	printf("O resultado �:  %.2f",result);
	
return 0;

}
