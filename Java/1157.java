import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		float y = sc.nextFloat();
		
		if(50 <= y && y <= 60) System.out.println("win");
		else System.out.println("lose");
	}
}