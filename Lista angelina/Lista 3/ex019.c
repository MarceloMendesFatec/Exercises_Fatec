/* 	
   	19) Tr�s candidatos disputam a elei��o para presidente do Sindicato dos 
Feirantes. Os associados votar�o em um computador, onde � digitado o 
n�mero do candidato. 
 N�mero do candidato Nome do candidato 
 1 "Juca Lim�o" 
 2 "Aba Cate" 
 3 "Pedro Laranja" 
4 Voto em Branco 
5 Voto Nulo 
0 Finalizar 
Fa�a o programa para determinar as seguintes informa��es: 
 _ quantidade de votos de cada candidato; 
 _ n�mero de votos nulos; 
 _ n�mero de votos em branco; 
 _ qual candidato venceu � a quantidade do maior n�mero de votos 
_ a diferen�a de votos do mais votado com o menos votado. 
  
*/

#include <stdio.h>  
#include <locale.h>
#include <stdlib.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 int n1,dif,menor,champion;
 int juca = 0;
 int aba  = 0;
 int pedro= 0;
 int branco=0;
 int nulo = 0;


   
//2 input
 	
 
 	printf("Numero do candidato");
 	printf("\t Nome do Candidato\n");
 	printf(" \n1 "); printf("\t\t\t Juca Limao");
 	printf(" \n2 "); printf("\t\t\t Aba Cate");
 	printf(" \n3 "); printf("\t\t\t Pedro Laranja");
 	printf(" \n4 "); printf("\t\t\t voto em Branco");
 	printf(" \n5 "); printf("\t\t\t voto Nulo");
 	printf(" \n0 "); printf("\t\t\t Finalizar");
 	
 //3 calc
 do{
 	printf("\nDigite um numero : ");
 	scanf("%d",&n1);
 	switch (n1){
 		case 1 : juca++;
 		break;
 		case 2 : aba++;
 		break;
 		case 3 : pedro++;
 		break;
 		case 4 : branco++;
 		break;
 		case 5 : nulo++;
	 }
 }while(n1 != 0);
 
 	

// 4 output

printf("\nTotal de votos do Juca limao: %d",juca);
printf("\nTotal de votos do Aba Cate: %d",aba);
printf("\nTotal de votos do Pedro Laranja: %d",pedro);
printf("\nTotal de votos em Branco: %d",branco);
printf("\nTotal de votos Nulos: %d",nulo);

if(juca > aba && juca > pedro ){// condi��o para saber o vencedor
	champion = juca;
	printf("\nO Candidato com maior numero de votos � o Juca Limao!!");
}else if(aba > juca && aba > pedro){
	champion = aba;
	printf("\nO Candidato com maior numero de votos � o Aba Cate!!");
}else if ( pedro > juca && pedro > aba){
	champion = pedro;
	printf("\nO Candidato com maior numero de votos � o Pedro Laranja!!");
}

// estrutura para ver o menor votado

if(juca < aba && juca < pedro ){
	menor = juca;
}else if(aba < juca && aba < pedro){
	menor = aba;
}else if ( pedro < juca && pedro < aba){
	menor = pedro;
}

printf("\n A diferen�a de votos do primeiro para o ultimo lugar � de : %d",dif = champion - menor);
return 0;

}
