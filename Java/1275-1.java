// Math.pow()를 이용한 다른 풀이
import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        System.out.println((int)Math.pow(n, k));
    }
}