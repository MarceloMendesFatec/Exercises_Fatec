/*A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. 
Considerando para este problema que p = 3.14159:

- Efetue o c�lculo da �rea, elevando o valor de raio ao quadrado e multiplicando por p.
*/




#include <stdio.h>  
int main(){

double raio,area,p;

scanf("%lf",&raio);

p = 3.14159;
area= p * (raio*raio);

printf("A=%.4f\n",area);



return 0;
}
