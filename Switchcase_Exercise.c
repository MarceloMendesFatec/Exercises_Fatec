
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	
	do{
		printf("\n Digite o numero do codigo: ");
		scanf("%d",&num);
		if(num < 0 || num > 7 || num == 6 || num == 4){
			printf("Invalido, Digitar novamente!");
		}
		
	}while(num < 0 || num > 7 || num == 6 || num == 4);
	
	switch(num){
		
		case 1 : printf("Dor de cabe�a : Receitar analgesico e descanso");
		break;
		case 2 : case 3 : printf("Gripe : Acompanhar evolu��o de sintomas");
		break;
		case 5 : case 7 : printf("Virose: Descanso e boa alimenta��o");
		break;
	}
	
	
	
	return 0;
}
