import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int num[] = new int[n];
		char oper[] = new char[n];
		
		for(int i = 0; i < n; i++) {
			num[i] = sc.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			System.out.printf("%d: ", i+1);
			for(int j = 0; j < n; j++) {
				if(i!=j) {
					if(num[i] > num[j])
						System.out.print("> ");
					else if(num[i] == num[j])
						System.out.print("= ");
					else
						System.out.print("< ");
				}
			}
			System.out.println();
		}
	}
}