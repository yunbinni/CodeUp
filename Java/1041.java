import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        char word = sc.next().charAt(0);
        
        System.out.println((char)(word+1));
    }
}