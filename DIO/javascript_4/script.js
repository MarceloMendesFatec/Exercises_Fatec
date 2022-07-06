var jogador1 = 2;
var jogador2 = 1;

if(jogador2 > jogador1 ){
    console.log(jogador2);
}else if(jogador2 < jogador1){
    console.log('menor valor');
}

let array = ['valor1','valor2','valor3','valor4','valor5'];

//for executado ate que a acao seja falsa
for (let indice = 0 ; indice < array.length ; indice++){
    console.log(indice);
}

//for imprimindo o valor de cada indice
for (i of array){
    console.log(i);
}

// funçoes em javascript

function mensagem(){
    console.log('tudo beleza campeao')
}

mensagem();

// funçao com passagem de parametro 

function mensagem2(parametro1,parametro2){
    console.log(parametro1,parametro2);
}

mensagem2('o ceu esta','lindo hoje');

//expressao de função

var funcao = function(){
    console.log('Eu sou uma variavel de expressao de funcao');
}

funcao();

//arrow function
function teste =() => {
    console.log('Eu sou uma arrow function');
}

teste();