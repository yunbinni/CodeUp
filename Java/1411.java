import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int cnt = 0;
		int arr[] = new int[N-1];
		for(int i = 0; i < N-1; i++) {
			arr[i] = sc.nextInt();
		}
		
		for(int j = 1; j <= N; j++){
			cnt = 0;
			for(int i = 0; i < N-1; i++){
				cnt++;
				if(j==arr[i]){
					cnt = 0;
					break;
				}
			}
			if(cnt==N-1){
				System.out.println(j);
				break;
			}
		}
	}
}