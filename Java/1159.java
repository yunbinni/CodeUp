import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		if(50 <= n && n <= 70 || n%6==0) System.out.printf("win");
	    else System.out.printf("lose");
	}
}