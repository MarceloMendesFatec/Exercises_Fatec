/* Tarefa 2 exercicio 10

Receber o ano de nascimento do usuário e dizer aproximadamente quantos dias de vida ele tem.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
printf("Receber o ano de nascimento do usuário e dizer aproximadamente quantos dias de vida ele tem.\n");

//1 Var declaration
    int Age,result;
//2 input
    printf("Qual ano de seu nascimento? : ");
    scanf ("%d",&Age);
    
//3 calc
result=(2021-Age)*365;
//4 output   
    printf("Voce possui aproximadamente  :%d dias de vida",result);
    
return 0;

}
