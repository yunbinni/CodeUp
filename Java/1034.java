import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String i = sc.nextLine();
        
        // Integer.parseInt
        int oct = Integer.parseInt(i, 8);
        
        System.out.println(oct);
    }
}