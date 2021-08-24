using System;
					
public class Program
{
	public static int Main()
	{ 
        Console.WriteLine(Fat(5));
		return 0;
    }

    public static int Fat(int n)
    {
        if (n == 0 || n == 1){
            return 1;
        }
        else{
            return n*Fat(n-1);
        }
    }
}