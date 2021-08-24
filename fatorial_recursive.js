function fat(n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}

var Fatorial= fat(5)
console.log(Fatorial)