/* 	
    6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas. 
    Este programa dever� mostrar no final:

 - a menor altura do grupo;
 - a m�dia de altura das mulheres;
 - o n�mero de homens; 
 - o sexo da pessoa mais alta. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	int sex,i,masc,fem;
 	float alt,alt_fem,media_fem,menor_alt,maior_sex;
 	
 	masc=0;
 	i=0;
 	fem=0;
 	alt_fem=0;
 	maior_sex=0;
 	menor_alt=9999;
 	
   
//2 input
 	
	 do{
	 	printf("Digite a altura: \n");
 		scanf("%f",&alt);
 		printf("Digite [1] para masculino ou [2] para feminino: \n");
 		scanf("%d",&sex);
 		
		 
		if( sex == 1){
 		 masc+=1;
	 	}
	 	else if (sex == 2){
	 	 fem+=1;
	 	 alt_fem+=alt;	
		}
	 	else if (alt > maior_sex){
	 		maior_sex=alt;
	 		maior_sex=sex;
		}
		else if (alt < menor_alt){
			menor_alt=alt;
		}
	 	
	 	i++;
	} while( i < 15);
	
	
	media_fem=alt_fem / fem;
	
	printf("O total de homens � de: %d\n",masc);
	printf("A menor altura do grupo � de: %.2f\n",alt);
	printf("A media de altura das mulheres � de : %.2f\n",media_fem);
	printf("O sexo da pessoa mais alta � : %d\n",sex);
	
return 0;

}
