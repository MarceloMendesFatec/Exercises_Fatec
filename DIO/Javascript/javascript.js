//tipos primitivos

var vOUF = false;
console.log(typeof(vOUF));

//tipo number

var number = 3
console.log(typeof(number));

//tipo string

var nome = 'Marcelo'
console.log(typeof(nome));

var global = 'teste global';
console.log(global);

function testeLocal(){
    let local = 'teste local';
    console.log(local);
}

testeLocal();


// atribuição e comparação

var number5 = '0' == 0; // true
console.log(number5);

var number5 = '0' === 0; // false, compara o tipo da variavel junto
console.log(number5);
