import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int age = sc.nextInt();
        int bYear = 2012 - age + 1;
        
        if(bYear < 2000) System.out.println(bYear - 1900 + " " + 1);
        else System.out.println(bYear - 2000 + " " + 3);
    }
}