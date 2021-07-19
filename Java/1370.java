import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int h = sc.nextInt();
		int r = sc.nextInt();
		
		// 전체 반복 
		for(int i = 0; i < r; i++){
			
			// 부분 반복(상단부) 
			for(int j = 0; j < h; j++){
				// 공백 반복 
				for(int k = 0; k < j; k++){
					System.out.printf(" ");
				}
				// 별 찍기
				System.out.printf("*\n");
			}
			
			// 부분 반복(하단부)
			for(int j = 0; j < h - 1; j++) {
				// 공백 반복
				for(int k = 0; k < h - j - 2; k++){
					System.out.printf(" ");
				}
				// 별 찍기
				System.out.printf("*\n");
			}
		}
	}
}