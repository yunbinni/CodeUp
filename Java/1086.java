import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int w = sc.nextInt();
        int h = sc.nextInt();
        int b = sc.nextInt();
        
        double MB = w*h*b;
        
        System.out.printf("%.2f MB", MB/(8*1024*1024));
    }
}