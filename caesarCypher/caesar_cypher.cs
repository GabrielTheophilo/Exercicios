using System;
					
public class Program
{
	public static void Main()
	{ 
    string texto;
    Console.WriteLine("Insira o texto a ser codificado: ");
    texto = Console.ReadLine();
    Console.WriteLine("Insira o deslocamento do alfabeto: ");
    int shift = Convert.ToInt32(Console.ReadLine());
    if (shift > 27){
        shift = shift%27;
    }
    else{
        shift = shift;
    }
    int b = texto.Length;
    for (int i=0; i<b;++i){
         int a = texto[i];
         if (a+shift>=123){
             a += shift-27;
         }
         else{
             a += shift;
         }
         
         char finaltexto = Convert.ToChar(a);
		 Console.WriteLine(finaltexto);
    }

    }
}
