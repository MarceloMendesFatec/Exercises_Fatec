/* 	
   	  revisao uso de função
*/

#include <stdio.h>  
#include <locale.h> 
#include <stdio.h>

 // protótipo da função
 void celsiusToFahrenheit(float tempC);

 // método main (principal)
 int main()
 {
 	setlocale(LC_ALL, "Portuguese");
 	float tempC, tempF;
 	
	 printf("Conversão Celsius para Fahrenheit\n");
 	 printf("(valor menor que -273.15 encerra o programa)\n\n");
 	 printf("Temperatura em Celsius: ");
 	 scanf("%f", &tempC);

 	if (tempC >= -273.15) {
 		celsiusToFahrenheit(tempC);
 		
 	}
 
 return 0;
 }
 
 // definição da função
void celsiusToFahrenheit(float tempC)
 {
 	float f;
 	f = 1.8 * tempC + 32;
 	printf("%.2f graus Celsius = %.2f graus Fahrenheit.\n",tempC, f);
 	
 }
