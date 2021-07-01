import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int temp;
		int sum = 0;
		
		for(int i = 0; i < n; i++) {
			temp = sc.nextInt();
			if(temp%5==0) sum += temp;
		}
		
		System.out.println(sum);
	}
}