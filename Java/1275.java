import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        int res = 1;
        
        for(int i = 0; i < k; i++) {
        	res *= n;
        }
        
        System.out.println(res);
    }
}