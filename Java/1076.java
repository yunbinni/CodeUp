import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        char x = sc.next().charAt(0);
        
        int i = 97;
        
        do{
            System.out.printf("%c ", i);
            i++;
        } while(i <= x);
    }
}