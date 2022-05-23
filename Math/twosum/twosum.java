import java.util.Scanner;

public class twosum {
    public static int two(int nums[],int tamanho, int n){
        for(int i=0;i<(tamanho-1);i++){
            for(int j=(i+1);j<tamanho;j++){
                if((nums[i]+nums[j]) == n){
                    System.out.println("Pares com a soma especificada: "+nums[i]+" "+nums[j]+" == "+n);
                    return 1;
                }
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int elementos = scan.nextInt();
        int num[] = new int[elementos];
        for(int i = 0;i<elementos;i++){
            num[i] = scan.nextInt();
        }
        scan.close();
        int x = -2;
        int size = elementos;

        if(two(num, size, x)==1){
            System.out.println("Um par valido foi encotrado");
        }else{
            System.out.println("Nenhum par valido foi encontrado");
        }


    }
}
