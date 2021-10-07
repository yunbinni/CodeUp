import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	
    	String word = sc.nextLine();
    	
    	if(word.equals("IOI"))
    		System.out.println("IOI is the International Olympiad in Informatics.");
    	else
    		System.out.println("I don't care.");
    }
}