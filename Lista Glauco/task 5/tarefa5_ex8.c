/* 	
   8. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, 
independente de utiliz�-los integralmente ou n�o. 
Por�m, se voc� utilizar mais do que 50 minutos, 
� cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
Receber quantos minutos foram gastos no m�s e calcular o valor da conta. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	float fixo,min,total;

   
//2 input
 
 	printf("\nDigite a quantidade de minutos gastos no mes: ");
 	scanf("%f",&min);

//3 calc
	fixo = 50;
	total= ((min-fixo)*1.5);
	
	if (min<=50)
	{
		printf("\nO Total da fatura � de %.2f",fixo);
	}
	else
	{
		printf("\nO Total da sua fatura � %.2f",total);
	}

return 0;
}

