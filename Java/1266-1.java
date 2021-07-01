// 반복문을 이용한 풀이
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int temp = 0 ; int sum = 0;
		
		for(int i = 0; i < n; i++) {
			temp = sc.nextInt();
			sum += temp;
		}
		
		System.out.println(sum);
	}
}