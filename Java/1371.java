import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		// 상단부
		for(int i = 0; i < n; i++){
			// 1번째 공백
			for(int j = 0; j < n - 1 - i; j++) System.out.printf(" ");
			// 1번쨰 별
			System.out.printf("*");
			// 2번째 공백
			for(int j = 0; j < 2*i; j++) System.out.printf(" ");
			// 2번째 별
			System.out.printf("*\n");
		}
		
		// 하단부
		for(int i = 0; i < n; i++){
			// 1번째 공백
			for(int j = 0; j < i; j++) System.out.printf(" ");
			// 1번쨰 별
			System.out.printf("*");
			// 2번째 공백
			for(int j = 0; j < 2*(n-1-i); j++) System.out.printf(" ");
			// 2번째 별
			System.out.printf("*\n");
		}
	}
}