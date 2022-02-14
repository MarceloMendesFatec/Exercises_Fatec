/* 	
   Terceira Parte (Versão 3)
 Usando a versão 1 faça o programa ser executado quantas vezes o usuário quiser e ao final
mostre quantas vezes foram detectadas temperaturas frias. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
//1 Var declaration
 
	float F,C,K;
	int i,could,count;
	i = 0;
	could = 0;
   
//2 input
 	printf("Quantas vezes sera executado: ?");
 	scanf("%d",&count);
 
	do{

 	printf("Digite o valor em Fahrenheit (F): ");
 	scanf("%f",&F);

//3 calc

	 C = ((F-32)/1.8);
	 K = C+273;
//4 output

	printf(" A temperatura em Celsius é : %.2fº \n",C);
	printf(" A temperatura em Kelvin é : %.2fº \n",K );
	
	if( C < 15){
		printf("frio\n");
		could++;
	}else if ( C <= 30){
		printf("normal\n");
	}else if( C >= 31){
		printf("quente\n");
	}i++;

	}while(i < count);
	
	printf("Total de vezes considerado frio : %d",could);
	
return 0;

}
