/* 	
   	Atividade Avaliativa de conhecimento  22/03/2022
*/

#include <stdio.h>  
#include <locale.h> 
#include <stdlib.h>
void menu();
void lancarpontos(int n1);// prototipo de funcao 
int ginasta();

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char letter;
	int  num,champion;
	
	menu();//chamada da funcao
	
	do{
		
   		scanf("%c",&letter);
		switch(letter){
		case 'p' : printf("\nQuantos paises estao participando : ") ;
				   scanf("%d",&num);
				   lancarpontos(num);
				   printf("\nDigite a opcao novamente: ");
				   break; 
		case 'g' :  champion = ginasta();//funcao retornando um valor
					if(champion == 0){
						printf("\nEmpate");
					}else 
						printf("\nA ginasta %d é a campea",champion);
						printf("\nDigite a opcao novamente: ");
					break;
		case 's' : exit(0);
		break;
		}
		
	}while(letter !='s');	
	
return 0;

}
	void menu(){// funcao sem retorno
		
		
		printf("******************\n");
		printf("Sistema Olimpiadas\n");
		printf("******************\n");
		printf("\n \n");
		printf("P- total de pontos do país\n");
		printf("G- final de campeonato de ginastica de solo\n");
		printf("S- sair\n");
		printf("Digite a opcao:");
    	
	}
	
	void lancarpontos(int n1){// funcao sem retorno
		
		int i,total,med1,med2,med3;
			
		for(i = 1 ; i <= n1 ; i++){
			printf("Digite o total de medalhas de ouro, prata e bronze respectivamente: \n");
			scanf("%d%d%d",&med1,&med2,&med3);
			total = (med1*3)+(med2*2)+med3;
			printf("O pais numero %d fez um total de %d pontos\n",i,total);
			printf("\n");
		}
	}
	
	int ginasta(){// funcao com retorno iniciada
		
		int note1,note2,note3,note4,total1,total2,champ;
		
		printf("\nDigite as duas notas da ginasta nº:1 : ");
		scanf("%d%d",&note1,&note2);
		printf("Digite as duas notas da ginasta nº:2 : ");
		scanf("%d%d",&note3,&note4);
		
		total1 = note1 + note2; // ginasta 1
		total2 = note3 + note4; // ginasta 2
		
		printf("A ginasta 1 recebeu %d pontos e a ginasta 2 recebeu %d pontos",total1,total2);
		
		if(total1 > total2){
			champ = 1;
		}else if(total2 > total1){  // condicao para saber o valor do retorno
			champ = 2;
		}else if (total1 == total2){
			champ == 0;
		}
		
		return champ;// retorna o valor obtido para MAIN
	}
