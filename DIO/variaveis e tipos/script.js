let firstName = 'marcelo';
let lastName  = 'mendes';


let fullName = `nome completo : ${firstName} ${lastName}`
console.log(fullName);


function verificar(string){
    if(!string) return "string inexistente";

   return string.split("").reverse().join("") === string;
}



console.log(verificar("word"));

