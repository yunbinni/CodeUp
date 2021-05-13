import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int arr[][] = new int[19][19];
		
		// 돌의 갯수만큼 반복(입력받기)
		for(int i = 0; i <= n; i++) {
			String XY = sc.nextLine();
			StringTokenizer token = new StringTokenizer(XY, " ");
			
			while(token.hasMoreTokens()) {
				int x = Integer.parseInt(token.nextToken());
				int y = Integer.parseInt(token.nextToken());
				arr[x-1][y-1] = 1;
			}			
		}
		
		// 출력하기
		for(int i = 0; i < 19; i++) {
			for(int j = 0; j < 19; j++) {
				if(arr[i][j]==1) System.out.printf("%d ", 1);
				else System.out.printf("%d ", 0);
			}
			System.out.print("\n");
		}
	}
}