import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int d = sc.nextInt();
        int n = sc.nextInt();
        
        int result = a;
        
        for(int i = 1; i < n; i++) {
        	result += d;
        }
        System.out.printf("%d", result);
    }
}