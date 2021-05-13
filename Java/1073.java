import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        boolean check = true;
        
        while(check){
            int i = sc.nextInt();
            
            if(i != 0) System.out.printf("%d\n", i);
            else break;
        }
    }
}