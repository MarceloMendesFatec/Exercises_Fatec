
#include <stdio.h>
#include <locale.h>
#include <ctype.h>// para usar toupper()

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	char resp;
	

do{
	do{//inicia o laço de repetição
		
		system("cls");
		printf("\n Digite o numero do codigo: ");
		scanf("%d",&num);
		if(num < 1 || num > 7 || num == 6 || num == 4){
			printf("Invalido, Digitar novamente!");
			_sleep(1000);// Pausa de 1 segundo
		}
		
	}while(num < 1 || num > 7 || num == 6 || num == 4); // Encerra o laço de repetição
	
	switch(num){//teste a variavel num para o diagnostico
		
		case 1 : printf("Dor de cabeça : Receitar analgesico e descanso");
		break;
		case 2 : case 3 : printf("Gripe : Acompanhar evolução de sintomas");
		break;
		case 5 : case 7 : printf("Virose: Descanso e boa alimentação");
		break;
	}//fim do switch
	
	do
		{printf("\nExistem mais pacientes: <S/N> ?");
		//scanf(" %c",&resp); //Necessita de um enter
		resp = getche();
		resp = toupper(resp);// guarda em maiusculo 
	}while(resp != 'S' && resp != 'N');	
		
}while (resp == 'S');//transforma o 's' minusculo em 'S' maiusculo
//while( resp == 's' || resp =='S');
	
	
	return 0;
}
