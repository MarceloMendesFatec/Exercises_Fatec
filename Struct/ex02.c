
/*
2) Crie um programa que receba o nome e a senha do usu�rio. A senha padr�o � �fatec123�. 
Se a senha digitada pelo usu�rio for diferente do padr�o informe que a senha � inv�lida e de mais duas chances de digita��o. 
Se a senha for v�lida apenas informe �usu�rio permitido� e finalize.

 autor: Marcelo Junior Mendes 10/05/2022
 
*/


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>




int main()
{
	char pw[10], user[50], padrao[] = "fatec123";
	int n,j,i = 3;									// declaracao de variaveis 
	printf("Digite o USERNAME :  ");
	fflush(stdin);gets(user);  						// funcao para limpar o buffer do teclado e em seguida receber uma string
	
	
		for ( j = 2 ; j >= 0 ; j--)
		{
				printf("Digite o PASSWORD :  ");
				fflush(stdin);gets(pw);				// funcao para limpar o buffer do teclado e em seguida receber uma string
				n = strcmp(pw,padrao);				// fun��o para comparar se as strings sao iguais 
					if( n == 0){
					printf("\nUsuario Permitido");
					exit(0);						// fun��o para finalizar o progama caso a comparacao de string for verdadeira 
					
					}else if ( n != 0 ){			// condicao para continuar o la�o de repeticao 
						
					printf("senha invalida + %d tentativas \n",j);
					
					}
			
		}
		
	
	
	return 0;	
}
