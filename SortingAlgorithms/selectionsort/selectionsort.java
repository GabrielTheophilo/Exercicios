public class selectionsort {
    public static void main(String[] args){
        int x = 5;
        int y = 3;
        System.out.println("Na main, A: "+x+"\nNa main, B: "+y);
        troca(x,y);
        soma(x,y);
        System.out.println("Na main, A: "+x+"\nNa main, B: "+y);
    }

    public static int soma(int genericaUm, int genericaDois){
        return genericaUm+genericaDois;
    }

    public static void troca(int a, int b){
        int aux = a;
        a = b;
        b = aux;
        System.out.println("Na funcao, A: "+a+"\nNa funcao, B: "+b);
    }
}