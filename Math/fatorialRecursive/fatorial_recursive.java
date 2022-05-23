public class fatorial_recursive {

    public static void main(String[] args) {
		int Fat;
		Fat = fat(5);
		System.out.println(Fat);
    }
    public static int fat(int n){
    	if (n == 0 || n == 1){
    		return 1;
		}
    	else{
    		return n*fat(n-1);
		}
	}
}