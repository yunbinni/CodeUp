import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        
        sc.close();
        
        if(90 <= a && a <= 100) System.out.printf("A");
        else if(70 <= a && a < 90) System.out.printf("B");
        else if(40 <= a && a < 70) System.out.printf("C");
        else System.out.printf("D");
    }
}