
/*
2) Crie um programa que receba o nome e a senha do usuário. A senha padrão é “fatec123”. 
Se a senha digitada pelo usuário for diferente do padrão informe que a senha é inválida e de mais duas chances de digitação. 
Se a senha for válida apenas informe “usuário permitido” e finalize.

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
				n = strcmp(pw,padrao);				// função para comparar se as strings sao iguais 
					if( n == 0){
					printf("\nUsuario Permitido");
					exit(0);						// função para finalizar o progama caso a comparacao de string for verdadeira 
					
					}else if ( n != 0 ){			// condicao para continuar o laço de repeticao 
						
					printf("senha invalida + %d tentativas \n",j);
					
					}
			
		}
		
	
	
	return 0;	
}
