import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int temp;
		int max = Integer.MIN_VALUE;
		
		for(int i = 0; i < n; i++) {
			temp = sc.nextInt();
			if(temp > max) max = temp;
		}
		
		System.out.println(max);
	}
}