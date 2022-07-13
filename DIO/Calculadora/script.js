var op = prompt("Digite sua opção: \n 1 - '+' \n 2 - '-' \n 3 - '/' \n 4 - '*' ");
var number1 = prompt("Digite o primeiro numero : ");
var number2 = prompt("Digite o segundo numero : ");

switch (op){
    case  '1' : adicao(number1,number2);
    break;
    case '2'  : subtracao(number1,number2);
    break;
    case '3'  : divisao(number1,number2);
    break;
    case '4'  : multiplicacao(number1,number2);
    break;
}




function adicao(n1,n2){
    let result = parseInt(n1) + parseInt(n2);
    console.log(result);
}
function subtracao(n1,n2){
    let result = parseInt(n1) - parseInt(n2);
    console.log(result);
}
function divisao(n1,n2){
    let result = parseFloat(n1) / parseFloat(n2);
    console.log(result);
}
function multiplicacao(n1,n2){
    let result = parseInt(n1) * parseInt(n2);
    console.log(result);
}