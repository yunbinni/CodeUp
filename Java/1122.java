import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int s = sc.nextInt();
        
        System.out.printf("%d %d", s/60, s%60);
    }
}