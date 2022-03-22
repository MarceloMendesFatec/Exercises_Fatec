/* 	
   	  revisao uso de fun��o
*/

#include <stdio.h>  
#include <locale.h> 
#include <stdio.h>

 // prot�tipo da fun��o
 float celsiusToFahrenheit(float tempC);

 // m�todo main (principal)
 int main()
 {
 	setlocale(LC_ALL, "Portuguese");
 	float tempC, tempF;
 	
	 printf("Convers�o Celsius para Fahrenheit\n");
 	 printf("(valor menor que -273.15 encerra o programa)\n\n");
 	 printf("Temperatura em Celsius: ");
 	 scanf("%f", &tempC);

 	if (tempC >= -273.15) {
 		tempF = celsiusToFahrenheit(tempC);
 		printf("%.2f graus Celsius = %.2f graus Fahrenheit.\n",tempC, tempF);
 	}
 
 return 0;
 }
 
 // defini��o da fun��o
 float celsiusToFahrenheit(float tempC)
 {
 	float f;
 	f = 1.8 * tempC + 32;
 	return f;
 }
