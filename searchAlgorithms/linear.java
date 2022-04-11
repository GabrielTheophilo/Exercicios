import java.util.Scanner;

public class linear {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
		boolean found = false;
		for(int i = 0;i<10;i++) {
			if(arr[i]==n) {
				System.out.println("Encontrado no índice "+n);
				found = true;
				break;
			}
			
		}
		if(!found) {
			System.out.println("Não encontrado");
		}
		
		
	}
}
