import java.util.Scanner;
public class altbash{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Insira o texto a ser codificado: ");
        String texto = scan.nextLine();
        int a = texto.length();
        String cypher = "\0";
        for(int i=0;i<a;i++){
            int b = texto.charAt(i);
            int shift = b%97;
            int newInt = 122-shift;
            cypher += (char)newInt;
        }
        System.out.println(cypher);
    }
}