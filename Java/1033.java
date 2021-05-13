import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int i = sc.nextInt();
        
        // String.format()
        String hexi = String.format("%X", i);
        
        System.out.println(hexi);
    }
}