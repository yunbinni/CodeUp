import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int rcb = sc.nextInt();
        
        int ten = rcb%10;
    	int one = rcb/10;
    	
    	int res = (10*ten + one)*2;
    	if(res >= 100) res = res - 100;
    	
    	System.out.println(res);
    	
    	if(res <= 50) System.out.println("GOOD");
    	else System.out.println("OH MY GOD");
    }
}