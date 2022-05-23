function Fib(n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return Fib(n-1)+Fib(n-2);
    }
}
var input = 5;
var a = Fib(input);
console.log(a);