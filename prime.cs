using System;

namespace prime
{
    class Program
    {
        static void Main()
        {
        int controle = 0;
        int valorTrue = 0;
        int valorPrimo = 0;
        int Num = Convert.ToInt32(Console.ReadLine());
        controle = Num;
        for (int i=2; i<=Num;i++){
            if (Num%i==0){
                valorPrimo += 1;
            }
        }
        if (valorPrimo>=2){
            Console.WriteLine("Not prime.");
        }
        else if(valorPrimo<2){
            Console.WriteLine("prime");
        }
        }
    }
}