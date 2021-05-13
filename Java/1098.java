import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int h, w, n, l, d, x, y;
		
		// 세로, 가로 입력 받기
		h = sc.nextInt();
		w = sc.nextInt();
		
		// 배열선언
		int arr[][] = new int[h][w];
		
		// 막대기 수 입력받기
		n = sc.nextInt();
		
		// 막대기 정보 입력받기
		for(int i = 0; i < n; i++) {
			l = sc.nextInt();
			d = sc.nextInt();
			x = sc.nextInt();
			y = sc.nextInt();
			
			for(int j = 0; j < l; j++){
				if(d==0){
					arr[x-1][y+j-1] = 1;
				}
				else{
					arr[x+j-1][y-1] = 1;
				}
			}
		}
		
		// 출력하기
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				System.out.printf("%d ", arr[i][j]);
			}
			System.out.print("\n");
		}
	}
}