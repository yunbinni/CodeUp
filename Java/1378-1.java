import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int s = 0;
		
		for(int i = 1; i <= n; i++){
			s += (i+1)*i/2;
		}
		
		System.out.println(s);
	}
}