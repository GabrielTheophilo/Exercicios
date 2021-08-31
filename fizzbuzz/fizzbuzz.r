for(val in 1:100)
{
    if((val%%3==0) || (val%%5==0)){
        if(val%%3==0 && val%%5==0){
            print("FizzBuzz")
        }
        else if(val%%3==0 && !val%%5==0){
            print("Fizz")
        }
        else if(val%%5==0 &&  !val%%3==0){
            print("Buzz")
        }
    }
    else{
        print(val)
    }
    
}