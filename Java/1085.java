import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        long h = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long s = sc.nextLong();
        
        double MB = h*b*c*s;
        
        System.out.printf("%.1f MB", MB/(8*1024*1024));
    }
}