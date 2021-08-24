import java.util.Scanner;
public class caesar_cypher {
    public static void main(String[] arg){
        Scanner scan = new Scanner(System.in);
        System.out.println("Insira o texto a ser codificado: ");
        String text = scan.nextLine();
        System.out.println("Insira o deslocamento do alfabeto: ");
        int shift = scan.nextInt();
        if(shift>27){
            shift = shift%27;
        }
        int b = text.length();
        int a = 0;
        String c = "\0";
        for(int i = 0; i<b; i++){
            char C = text.charAt(i);
            a = (int)C;
            if (a+shift>=123){
                a += shift-27;
                c +=(char)a;
            }
            else{
                a += shift;
                c +=(char)a;
            }
        }
        System.out.println(c);
    }
}
