/* 	
    6. Implementar um programa que exibe todos os n�meros inteiros 
	de 1 a 1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1). 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int i;
	
	for(i=1000;i>=1;i--)
	{
		printf("%d\n",i);
	}

	
return 0;

}
