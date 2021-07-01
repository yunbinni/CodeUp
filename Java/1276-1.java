// 재귀용법을 이용한 다른 풀이
import java.util.Scanner;

public class Main{
	
	public int fac(int n) {
		if(n==1) return 1;
		else return n*fac(n - 1);
	}
	
	
	public static void main(String[] args) {
		Main m = new Main();
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		System.out.println(m.fac(n));
		
	}
}