
//funcao autoinvocavel
(
    function(){
        let name = "Digital Innovation One"
        return name;
    }
)();

// funcao autoinvocavel com parametros

(
    function(a,b){
        return a + b;
    }
)(2,3)

//pode ser armazenada em uma variavel

const soma5 = (
    function(a,b){
        return a + b;
    }
)(2,4)

console.log(soma5);

// callbacks , uma funcao passada como argumento para outra

const calc = function(operacao,n1,n2){
    return operacao(n1,n2);
}

const soma = function(n1,n2){
    return n1 +n2;
}

const sub = function(n1,n2){
    return n1 - n2;
}

const resultSoma = calc(soma,3,6);
const resultSub = calc(sub,3,9);

console.log(resultSoma);
console.log(resultSub);

// arrays Spread

function sum(x,y,z){
    return x + y + z;
}

const numbers = [1,4,3,];

console.log(sum(...numbers));

// arrays Rest

function confereTamanho(...args){
    console.log(args.length)
}

confereTamanho()//0
confereTamanho(1,2)//2
confereTamanho(3,4,5)//3

// objetos -> Object Destructuring

const user = {
    id: 65,
    displayName: 'jdoe',
    fullName: {
        firstName: 'Jhon',
        lastName: 'Doe'
    }
};

function userId({id}){
    return id;
}

function getFullName({fullName: {firstName:first, lastName: last}}){
    return `${first} ${last}`
}

userId(user) //65

getFullName(user) // Jhon Doe