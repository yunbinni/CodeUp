import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i < n; i++){
			arr[i] = sc.nextInt();
		}
		
		for(int i = 0; i < n; i++){
			int k = i;
			for(int j = 0; j < n; j++){
				if(k==n) k = 0;
				System.out.printf("%d ", arr[k]);
				k++;
			}
			System.out.println();
		}
	}
}