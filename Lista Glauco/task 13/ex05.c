/* 	
    5. A prefeitura de uma cidade de 15 habitantes 
	fez uma pesquisa coletando sal�rio e n�mero de filhos de cada um. 
    A prefeitura deseja saber: 
   
   - m�dia do sal�rio da popula��o; 
   - m�dia do n�mero de filhos; 
   - maior sal�rio; 
   - percentual de pessoas com sal�rio at� R$ 500,00. 	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration

	int filhos,media_filhos,sumfilhos,i;
	float salary,percent,high_salary,sumsalary,maior_salary,media_salary,x;
	
	i=1;
	x=0;
	
	sumsalary=0;
	sumfilhos=0;
 	maior_salary=0;
 	

//2 calc
	do{
		printf("Digite o numero de filhos: \n");
		scanf("%d",&filhos);
		printf("Digite o valor do salario: R$ \n");
		scanf("%f",&salary);
		sumsalary+=salary;
		
		if(maior_salary < salary){
			maior_salary = salary;
		}
		
		if(salary <= 500){
			x++;
			
		}
		
		
		i++;
		
	}while(i <= 15);
	
	media_salary=sumsalary/15;
	media_filhos=sumfilhos/15;
	percent= (x/15)*100;
	
	printf("A Media de filhos � de: %d filhos\n",filhos);
	printf("A media de salario � de: R$%.2f\n",media_salary);
	printf("O Maior salario � de: R$ %.2f\n",maior_salary);
	printf("O percentual de salario abaixo de R$500 � de: %.2f ",percent);
	
return 0;

}
