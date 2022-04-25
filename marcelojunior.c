#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// alterar o valor da constante como prefirir testar 
#define A 5 // alunos
#define P 3 // nota projetos
#define J 3 // juizes

//prototipo de função 
float VerificarExibir(float sum_aluno);
int projetos();
int main ()

{
	// declaração de variaveis 
	float sum_aluno = 0; 
	char letter;
	int i,vetor[A];
	setlocale(LC_ALL, "Portuguese");
	
	// inicio do menu 
	printf("*****************\n");
 	printf("E - Notas do evento - alunos\n");
 	printf("P - Notas dos projetos - juizes\n");
 	printf("S - Sair\n");
 	printf("Digite a opção:  ");
 	scanf("%c",&letter);
	
	switch(letter){//estrutura de decisao do menu
		
		case 'e': 	for( i = 1 ; i <= A ; i++){
					 	
						printf("\nDigite a nota do aluno entre 0 e 10 %d: ",i);
					 	 scanf("%d",&vetor[A]);
					 	 sum_aluno += vetor[A];// variavel de soma
					 		if(vetor[A] < 0 || vetor[A] > 10)
							{
							printf("ERRO");
							}
						while(vetor[A] < 0 || vetor[A] > 10);
					 	}
					 	
					 	VerificarExibir(sum_aluno);// chamada de função
			break;
		case 'p': projetos();// chamada de função
			break;	
		case 's': exit(0);// encerramento da aplicação
			break;
		default : printf("Opção invalida");	
	}
	
	
	
	
return 0;

}

int projetos(){
	 int i,k;
	 int sum_zero = 0;
	 float media,matriz[P][J];
	 
	 for( i = 0 ; i < P ; i++){
		 float sum_proj = 0;
		 for( k = 0 ; k < J ; k++){
	 		printf("Digite a nota  do projeto [%d] do juiz [%d]: ",i,k );
	 		scanf("%f",&matriz[P][J]);
	 		sum_proj += matriz[P][J];
			 		
		 	}
			
			printf("Media do projeto [%d] é de %.2f\n",i,media = sum_proj/J ); 
	 	}
	 	
	 		printf("A somatoria de notas 0 sao : %d",sum_zero);
	 
		
}

float VerificarExibir(float sum_aluno){
	
	float media = sum_aluno/A;
	printf("media do evento é de  %.2f",media);
	
	return media;// valor  retornado ao main ()
}

