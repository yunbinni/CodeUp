import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int arr[][] = new int[101][101];
		int r = 0, c = -1, direct = 1, lim = 0, n = sc.nextInt(), m = sc.nextInt();
		
		// 입력부
		for(int cnt = 1; cnt <= n * m; ) {
			// 가로 채우기
			for(int i = 0; i < m - lim; i++) {
				c += direct;
				arr[r][c] = cnt++;
			}
			// 세로 채우기
			for(int j = 0; j < n - 1 - lim; j++) {
				r += direct;
				arr[r][c] = cnt++;
			}
			
			// 방향전환
			direct *= -1;
			
			// 제한값 증가
			lim++;
		}
		
		// 출력부
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				System.out.printf("%d ", arr[i][j]);
			}
			System.out.println();
		}
	}
}