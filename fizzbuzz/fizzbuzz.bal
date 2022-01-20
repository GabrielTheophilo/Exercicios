import ballerina/io;

public function main() {
    int v = 100;
    int i = 0;
    while i<v {
        if i%3==0 && i%5==0{
            io:println("FizzBuzz");
            i+=1;
        }
        else if i%3==0{
            io:println("Fizz");
            i+=1;
        }
        else if i%5==0{
            io:println("Buzz");
            i+=1;
        }
        else{
            i+=1;
        }
    }

}
