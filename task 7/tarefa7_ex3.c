/* 	

3. Calcular o IMC (�ndice de Massa Corporal) de uma pessoa atrav�s da f�rmula 
IMC = Peso (kg) / (Altura * Altura) (m). Informe a classifica��o do IMC na tela de acordo com as regras abaixo:

< 18,5 Abaixo do peso 
De 18,5 a menor que 25,0 Saud�vel 
De 25,0 a menor que 30,0 Sobrepeso
De 30,0 a menor que 35,0 Obesidade Grau I 
De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
De 40,0 em diante Obesidade Grau III (m�rbida)
    	  
*/


int main ()
{


//1 Var declaration
 
 	float alt,peso,imc;

   
//2 input

	printf("\nCalculo para calculo de IMC");
	printf("\n\nDigite a sua altura em  ex( 1,78): ");
	scanf("%f",&alt);
	printf("\nDigite o seu peso em KG: ");
	scanf("%f",&peso);

//3 calc

	imc= peso / (alt*alt);
	printf("\nIMC= %.2f",imc);
	
	if ( imc < 18.5)
	{
		printf("\nAbaixo do peso");
	}
	else if ( imc >= 18.5 && imc <= 25)
	{
		printf("\nSaudavel");
	}
	else if ( imc >= 25 &&  imc <= 30)
	{
		printf("\nSobrepeso");
	}
	else if (imc >= 30 && imc <= 35)
	{
		printf("\nObesidade Grau I");
	}
	else if (imc >= 35 && imc <= 40)
	{
		printf("\nObesidade Grau II (severa)");
	}
	else 
	{
		printf("\nObesidade Grau III (m�rbida)");
	}
	


	
return 0;

}
