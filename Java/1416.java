import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[100];
		int len = 0;
		
		if(n==0)
			System.out.println(0);
		else {
			for(int i = 0;;i++){
				if(n==0) break;
				arr[i] = n%2;
				len++;
				n /= 2;
			}
			for(int j = len - 1; j >= 0; j--)
				System.out.printf("%d", arr[j]);
		}
	}
}