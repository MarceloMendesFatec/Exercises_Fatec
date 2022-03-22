/* 	
  5. Implementar um programa que exibe todos os números pares contidos entre 10 e 80.  	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;

	for(i=11;i<80;i++)
	{
		if( i%2 == 0)
		{
			printf("%d\n",i);
		}
	}

	
return 0;

}
