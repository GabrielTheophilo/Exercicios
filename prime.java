import java.util.Scanner;
public class prime {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int Num = scan.nextInt();
        int controle;
        int valorPrimo = 0;
        
        controle = Num;
        for (int i=2; i<=Num;i++){
            if (Num%i==0){
                valorPrimo += 1;
            }
        }
        if (valorPrimo>=2){
            System.out.println("Not prime.");
        }
        else if(valorPrimo<2){
            System.out.println("prime");
        }
    }
}
