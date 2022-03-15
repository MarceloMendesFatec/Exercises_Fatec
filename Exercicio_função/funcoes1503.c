#include <stdio.h>  
#include <locale.h> 
#include <stdlib.h>


void   menu();//prototipo da fun��o
float  receber();
void   somar(float n1,float n2);
void   subt(float n1,float n2);
void   mult(float n1,float n2);
void   divi(float n1,float n2);


int main ()
{// inicio da fun��o main
	setlocale(LC_ALL, "Portuguese");
	char op;
	float n1,n2,result;
	menu();
	
	op = getche();
	n1 = receber();//fun��o que recebera e retornara um numero valido
	n2 = receber();
	
	
		switch(op){
		
		case '+': somar(n1,n2);
		break;
		case '-': subt(n1,n2);
		break;
		case '*': mult(n1,n2);
		break;
		case '/': if(n2 == 0){
			printf("Erro!Nao e possivel dividir por 0");
			break;
		}divi(n1,n2);
		break;
		}
	
	
	printf("\n\n");
	system("pause");
	
	return 0;
	
	
}//fim da fun��o main

void menu(){// inicio da fun��o
	printf("\n---------Calculadora---------\n");
	system("time /t");
	printf("\n +  -  *  / \n");
	printf("\nEscolha a opera��o: \n");
	
}// fim da fun��o menu

//fun��o � do tipo float porque retornara um valor float

float receber(){//inicio da fun��o receber
				//Regra-- So aceitar numero de 0 a 10
	  float num; //� local -- pertence a fun��o receber, so existe enquanto a fun��o receber estiver sendo executada	
	 
	 do{
	 	printf("\nInforme o valor: ");
	 	scanf("%f",&num);
	 	if(num < 0 || num > 10){
	 		printf("Erro!Digite um numero entre 0 a 10\n");
		}
	 	
	 }while(num < 0 || num > 10);			 
	  
	  
	  return num;
	  
}//final da fun��o receber


void somar(float n1,float n2){
	float soma;
	soma = n1 + n2;
	printf("\n A soma � %.2f",soma);
	//nao tem return pois a fun��o � VOID
}

void subt(float n1,float n2){
	float subt;
	subt = n1 - n2;
	printf("\nA subtra��o e %.2f",subt);
}


void mult(float n1,float n2){
	float mult;
	mult = n1 * n2;
	printf("\nA multiplica��o � %.2f",mult);
}

void divi(float n1,float n2){
	float divi;
	divi = n1/n2;
	printf("\n A divisao � %.2f",divi);
}

