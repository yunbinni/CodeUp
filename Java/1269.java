import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int n = sc.nextInt();
		
		for(int i = 0; i < n - 1; i++){
			a = a*b + c;
		}
		
		System.out.println(a);
	}
}