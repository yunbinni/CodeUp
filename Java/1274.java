import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int cnt = 0;
		
		for(int i = 1; i <= n; i++) {
			if(n%i==0) cnt++;
		}
		
		if(cnt==2) System.out.println("prime");
		else System.out.println("not prime");
	}
}