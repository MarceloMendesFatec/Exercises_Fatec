/*var number1 = prompt("Digite o primeiro numero: ");
var number2 = prompt("Digite o  segundo numero: ");

comparar(number1,number2);

function comparar(n1,n2){
    if(number1 === number2){
        console.log("Os numeros 1 e 2 sao iguais.");
    }else if(number1 != number2){
        console.log("Os numeros 1 e 2 nao sao iguais.")
    }
    let soma = parseFloat(number1) + parseFloat(number2);  

    console.log("Sua soma é :",soma);

}*/

function comparaNumeros(num1, num2) {
	const primeiraFrase = criaPrimeiraFrase(num1, num2);
	const segundaFrase = criaSegundaFrase(num1, num2);

	return `${primeiraFrase} ${segundaFrase}`;
}

function criaPrimeiraFrase(num1, num2) {
	let primeiraFrase = `Os números ${num1} e ${num2}`;
	let simNao = 'não';

	if (num1 === num2) {
		simNao = '';
	}

	return `${primeiraFrase} ${simNao} são iguais.`;
}

function criaSegundaFrase(num1, num2) {
	const soma = num1 + num2;
	let comparaDez = 'menor';
	let comparaVinte = 'menor';

	if (soma > 10) {
		comparaDez = 'maior';
	}

	if (soma > 20) {
		comparaVinte = 'maior';
	}

	return `Sua soma é ${soma}, que é ${comparaDez} do que 10 e ${comparaVinte} do que 20.`;
}

console.log(comparaNumeros(5, 10));