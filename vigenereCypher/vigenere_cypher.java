import java.util.Scanner;
public class vigenere_cypher {
    public class cypher{
        public static void main(String[] args){
            Scanner scan = new Scanner(System.in);
            System.out.println("Insira o texto a ser codificado: ");
            String texto = scan.nextLine();
            System.out.println("Insira a chave: ");
            String shift = scan.nextLine();
            int media;
            int e=0;
            int d=0;
            String cifrado = "\0";
            int c = texto.length();
            for(int i=0;i<c;i++){
                char a = texto.charAt(i);
                char b = shift.charAt(i);
                e = (int)a;
                d = (int)b;
                media = ((e-96)+(d-96))+97;
        
                if((media)>=123){
                    media = media-26;
                }
                cifrado += media;
        
            }
            System.out.println(cifrado);
        
        }
    }
}
