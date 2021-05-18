import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int ymd = sc.nextInt();
        int umm = sc.nextInt();
        
        if(umm==1 || umm==2) {
        	System.out.println(2012 - 1900 - ymd/10000 + 1);
        } else {
        	System.out.println(2012 - 2000 - ymd/10000 + 1);
        }
    }
}