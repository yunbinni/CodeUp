import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        long num = sc.nextLong();
        
        if(0 <= num  && num <= 4294967295L){
            System.out.println(num);
        } else {
            System.out.println("");
        }
    }
}