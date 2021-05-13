import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int arr[][] = new int[10][10];
		
		// 배열 입력받기 
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				arr[i][j] = sc.nextInt();
			}
		}
		
		int x = 1;
		int y = 1;
		
		while(arr[y][x] != 2){
			arr[y][x] = 9;
			
			// 방향바꾸기 (길이 있거나, 먹이거나)
			if(arr[y][x+1] != 1) x++;
			else if(arr[y+1][x] != 1) y++;
			else break;
		}
		
		arr[y][x] = 9;
		
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				System.out.printf("%d ", arr[i][j]);
			}
			System.out.printf("\n");
		}
	}
}