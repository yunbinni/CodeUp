import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		long count = 1;
		
		while(count%a!=0 || count%b!=0 || count%c!=0) count++;
		
		System.out.println(count);
	}
}