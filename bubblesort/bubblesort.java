import java.util.Scanner;
import java.util.Random;
public class bubblesort {
	public static void main(String[] args) {
		Random rand = new Random();
		Scanner scan = new Scanner(System.in);
		int qtd = scan.nextInt();
		int n[] = new int[qtd];
		for(int i = 0;i<qtd;i++) {
			n[i] = rand.nextInt();
		}
		for(int i=0;i<qtd;i++) {
			for(int j=0;j<qtd-1;j++) {
				if(n[j]>n[j+1]) {
					int aux = n[j];
					n[j] = n[j+1];
					n[j+1] = aux;
				}
			}
		}
		
		for(int i=0;i<qtd;i++) {
			System.out.println(n[i]);
			
		}
	}
}
