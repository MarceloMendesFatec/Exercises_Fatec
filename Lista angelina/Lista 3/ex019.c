/* 	
   	19) Três candidatos disputam a eleição para presidente do Sindicato dos 
Feirantes. Os associados votarão em um computador, onde é digitado o 
número do candidato. 
 Número do candidato Nome do candidato 
 1 "Juca Limão" 
 2 "Aba Cate" 
 3 "Pedro Laranja" 
4 Voto em Branco 
5 Voto Nulo 
0 Finalizar 
Faça o programa para determinar as seguintes informações: 
 _ quantidade de votos de cada candidato; 
 _ número de votos nulos; 
 _ número de votos em branco; 
 _ qual candidato venceu – a quantidade do maior número de votos 
_ a diferença de votos do mais votado com o menos votado. 
  
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

if(juca > aba && juca > pedro ){// condição para saber o vencedor
	champion = juca;
	printf("\nO Candidato com maior numero de votos é o Juca Limao!!");
}else if(aba > juca && aba > pedro){
	champion = aba;
	printf("\nO Candidato com maior numero de votos é o Aba Cate!!");
}else if ( pedro > juca && pedro > aba){
	champion = pedro;
	printf("\nO Candidato com maior numero de votos é o Pedro Laranja!!");
}

// estrutura para ver o menor votado

if(juca < aba && juca < pedro ){
	menor = juca;
}else if(aba < juca && aba < pedro){
	menor = aba;
}else if ( pedro < juca && pedro < aba){
	menor = pedro;
}

printf("\n A diferença de votos do primeiro para o ultimo lugar é de : %d",dif = champion - menor);
return 0;

}
