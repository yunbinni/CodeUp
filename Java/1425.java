import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int C = sc.nextInt();
		int tmp = 0;
		int idx = 0;
		int arr[] = new int[N];
		for(int i = 0; i < N; i++){
			arr[i] = sc.nextInt();
		}
		
		// 선택정렬 
		for(int i = 0; i < N; i++){
			int min = 9999;
			for(int j = i; j < N; j++){
				if(arr[j] < min){
					min = arr[j];
					idx = j;
				}
			}
			tmp = arr[i];
			arr[i] = arr[idx];
			arr[idx] = tmp;
		}
		
		for(int i = 0; i < N; i++){
			if(i%C==0 && i > 0)
				System.out.println();
			System.out.printf("%d ", arr[i]);
		}
	}
}