import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		float a = sc.nextFloat();
		float b = sc.nextFloat();
		float c = sc.nextFloat();
		float d = sc.nextFloat();
		
		if(a/b > c/d) System.out.println(">");
		else if(a/b < c/d) System.out.println("<");
		else System.out.println("=");
	}
}