using System;
					
public class Program
{
	public static void Main()
	{ 

    for(int loop = 1; loop <= 100; loop++){

			if (loop%3==0 && loop%5==0){
				Console.WriteLine("FizzBuzz");
			}
			else if(loop%3==0){
				Console.WriteLine("Fizz");
			}
			else if(loop%5==0){
				Console.WriteLine("Buzz");
			}
		else{
    		Console.WriteLine(loop);
		    }
		}
    }
}
