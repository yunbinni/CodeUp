import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        long a = sc.nextLong();
        
        if(a < 0) System.out.printf("minus\n");
        else System.out.printf("plus\n");
        
        if(a%2==0) System.out.printf("even");
        else System.out.printf("odd");
    }
}