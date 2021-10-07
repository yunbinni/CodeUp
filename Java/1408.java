import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	
    	String s = sc.nextLine();
    	
    	for(int i = 0; i < s.length(); i++) {
    		System.out.printf("%c", s.charAt(i)+2);
    	}
    	
    	System.out.println();
    	
    	for(int i = 0; i < s.length(); i++) {
    		System.out.printf("%c", (s.charAt(i)*7) % 80 + 48);
    	}
    }
}