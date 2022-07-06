/*Vetores guardam qualquer 
tipo de valor */

//vetor com string, int e boolean
 let array = ['string', 1 , true];
 console.log(array);

//vetor com mais vetores dentro

 let array2 = ['string', 1 , true,['array4'],['array5'],['array6'],8];
 console.log(array2);

//forEach -> faz repeticao para cada item ou indice dentro do array
array.forEach(function(item,index){console.log(item,index)});

//push -> add item no final do array

array.push('novo item');
console.log(array);

// pop -> remove item no final do array

array2.pop();
console.log(array2);

//shift -> remove o item no inicio do array

array.shift();
console.log(array);

//unshift -> add item no inicio do array

array.unshift('Novo item Inicio');
console.log(array);

// indexOf -> retorna o indice que o valor esta armazenado

console.log(array.indexOf(1));

//splice -> remove item ou substitui um item pelo indice

array2.splice(0,3);
console.log(array2);

//slice -> retorna uma parte de um array existente

let novoArray = array.slice(1,3);
console.log(novoArray);

   
