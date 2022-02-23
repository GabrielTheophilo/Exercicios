let lista = [];
let temp = 0;
for(let i = 0; i < 12; i++){
    lista[i] = Math.random();
}
console.log(lista);
for(let i = 0; i < lista.length; i++){
    for(let j = 0; j < lista.length-1; j++){
        if(lista[j]>lista[j+1]){
            temp = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = temp;
        }
    }
}

for(let i = 0; i<lista.length;i++){
    console.log(lista[i]);
}
