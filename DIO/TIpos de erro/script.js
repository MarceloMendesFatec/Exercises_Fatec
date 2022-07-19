function validaArray(arr,num){
     try {
        if(!arr && !num) throw new ReferenceError('Envie os Parametros');

        if(typeof arr !== 'object')  throw new TypeError('Array precisa ser do tipo object');

        if(typeof num !== 'number') throw new TypeError('Array precisa ser do tipo number');


        if(arr.lenght !== num) throw new RangeError('Tamanho invalido');

        return arr;

     } catch (error) {
        
         if(error instanceof ReferenceError){
            console.log("Este erro é um Reference Error")
            console.log(error.message)
         }else if (error instanceof TypeError){
            console.log("Este erro é um type Error")
            console.log(error.message)
        }else if (error instanceof RangeError){
            console.log("Este erro é um range Error")
            console.log(error.message)
        }else {
            console.log("Tipo de erro nao esperado: " + error);
        }
    }

}    


console.log(validaArray([1,2,3,4,5],5));