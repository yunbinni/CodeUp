import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		
		int n, k, s, e, u, sum = 0, i;
		n = sc.nextInt();
		k = sc.nextInt();
		int arr[] = new int[n + 1];
		
		for(i = 0; i < k; i++) {
			s = sc.nextInt();
			e = sc.nextInt();
			u = sc.nextInt();
			
			arr[s - 1] += u;
			arr[e] -= u;
		}
		
		// Ãâ·Â
		for(i = 0; i < n; i++) {
			System.out.printf("%d ", arr[i]);
		}
		System.out.println();
		for(i = 0; i < n; i++) {
			sum += arr[i];
			System.out.printf("%d ", sum);
		}
	}
}