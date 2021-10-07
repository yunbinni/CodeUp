import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int temp;
		int cnt = 0;
		
		for(int i = 0; i < n; i++){
			temp = sc.nextInt();
			if(temp%2==0) cnt++;
		}
		
		System.out.println(cnt);
	}
}