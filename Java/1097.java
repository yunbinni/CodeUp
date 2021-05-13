import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int arr[][] = new int[19][19];
		
		for(int i = 0; i < 19; i++){
			for(int j = 0; j < 19; j++){
				arr[i][j] = sc.nextInt();
			}
		}
		
		int n = sc.nextInt();
		
		int x, y;
		
		for(int k = 0; k < n; k++){
			x = sc.nextInt();
			y = sc.nextInt();
			for(int i = 0; i < 19; i++){
				if(arr[x - 1][i]==0) arr[x - 1][i] = 1;
				else arr[x - 1][i] = 0;
			}
			for(int j = 0; j < 19; j++){
				if(arr[j][y - 1]==0) arr[j][y - 1] = 1;
				else arr[j][y - 1] = 0;
			}
		}
		
		for(int i = 0; i < 19; i++){
			for(int j = 0; j < 19; j++){
				System.out.printf("%d ", arr[i][j]);
			}
			System.out.printf("\n");
		}
	}
}