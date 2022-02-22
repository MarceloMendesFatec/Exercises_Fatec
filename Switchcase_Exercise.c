
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	do{//inicia o laço de repetição
	
		printf("\n Digite o numero do codigo: ");
		scanf("%d",&num);
		if(num < 1 || num > 7 || num == 6 || num == 4){
			printf("Invalido, Digitar novamente!");
		}
		
	}while(num < 1 || num > 7 || num == 6 || num == 4); // Encerra o laço de repetição
	
	switch(num){//teste a variavel num para o diagnostico
		
		case 1 : printf("Dor de cabeça : Receitar analgesico e descanso");
		break;
		case 2 : case 3 : printf("Gripe : Acompanhar evolução de sintomas");
		break;
		case 5 : case 7 : printf("Virose: Descanso e boa alimentação");
		break;
	}
	
	return 0;
}
