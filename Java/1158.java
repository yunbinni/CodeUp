import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		if(30 <= n && n <= 40 || 60 <= n && n <= 70) System.out.println("win"); // and�� or���� �켱
		else System.out.println("lose");
	}
}