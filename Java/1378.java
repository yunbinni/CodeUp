import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int sum = 0;
		int res = 0;
		
		for(int i = 1; i <= n; i++){
			sum = 0;
			for(int j = 1; j <= i; j++){
				sum += j;
			}
			res += sum;
		}
		
		System.out.println(res);
	}
}