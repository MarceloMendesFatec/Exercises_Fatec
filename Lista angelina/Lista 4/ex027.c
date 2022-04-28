
/* 	
	27)Receber o nome de uma fruta e mostre quantas vogais tem. 
*/

#include <stdio.h>  //biblioteca de entrada/saida de perifericos padrão
#include <locale.h> // Biblioteca para setar o idioma utilizado
#include <stdlib.h> //Biblioteca padrao para o uso de funçoes no sistema
#include <string.h> // Biblioteca de String
int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	char fruta[20];
 	int i,cont = 0;
 	
 	printf("Digite o nome de uma Fruta: ");
 	scanf("%s",fruta);
 	
 	for (i = 0; i < 20 ; i++){
 		if(fruta [i] == 'a'   || fruta[i] == 'e'
		   ||fruta [i] == 'i' || fruta[i] == 'o'
		  				      || fruta[i] == 'u')
			{
 				cont++;
		 	}
	 }
 
 	printf("O Total de vogais é de : %d",cont);
  

   
//2 input
 	

//3 calc

	
return 0;

}
