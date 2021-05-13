import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        float d = sc.nextFloat();
        
        System.out.printf("%.3f", (9.0/5.0*d)+32);
    }
}