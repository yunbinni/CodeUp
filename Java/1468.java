import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[][] = new int[n][n];
		
		int count = 1;
		
		for(int i = 0; i < n; i++) {
			if(i%2==0) {
				for(int j = 0; j < n; j++) {
					arr[i][j] = count;
					count++;
				}
			} else {
				for(int j = 0; j < n; j++) {
					arr[i][n - 1 -j] = count;
					count++;
				}
			}
			
			for(int k = 0; k < n; k++) {
				System.out.printf("%d ", arr[i][k]);
			}
			System.out.println();
		}
	}
}