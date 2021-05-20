import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        if(n%10==1 && n!=11){
        	System.out.printf("%dst", n);
    	} else if(n%10==2 && n!=12){
    		System.out.printf("%dnd", n);
    	} else if(n%10==3 && n!=13){
    		System.out.printf("%drd", n);
    	} else{
    		System.out.printf("%dth", n);
    	}
    }
}