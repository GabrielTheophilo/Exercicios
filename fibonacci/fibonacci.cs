using System;

public class Program
    {
    public static int Fib(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return Fib(n-1)+Fib(n-2);
        }
    }
    public static void Main()
    {
        int input = 0;
        input = Convert.ToInt32(Console.ReadLine());
        int fibonacci = Fib(input);
        Console.WriteLine(fibonacci);
    }
}