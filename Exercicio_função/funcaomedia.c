/* 	
   	  Exercicio de fun��o com medias
*/

#include <stdio.h>  
#include <locale.h> 
float media_notas(float nota1, float nota2);
int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
	float media,n1,n2;

   
//2 input
 	
 	printf("Digite a nota 1 : \n");
 	scanf("%f",&n1);
	printf("Digite a nota 2 : \n");
 	scanf("%f",&n2);
//3 calc
	media = media_notas(n1,n2);
	printf("A media das duas notas � de %.2f",media);
	
return 0;

}

float media_notas(float nota1,float nota2)// a fun��o necessita receber 2 parametros
{
	float media = (nota1 + nota2)/2;
	return media;// retorna o valor para media para a fun��o  MAIN
}
