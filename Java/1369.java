import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int rem = k-2;
		
		for(int i = 0; i < n; i++){
			// 첫째줄 
			if(i==0){
				for(int j = 0; j < n; j++)
					System.out.printf("*");
				System.out.println();
			}
			
			// 2~(n-1)번째줄 
			else if(0 < i && i < n-1) {
				for(int j = 0; j < n; j++){
					if(j==0 || j%k==rem || k==1 ||j==n-1) System.out.printf("*");
					else System.out.printf(" ");
				}
				System.out.println();
				
				// 나머지 갱신
				if(0 < rem && rem <= k-1){
					rem--;
				} else{
					rem = k-1;
				}
			}
			
			// n번째줄
			else if(i==n-1){
				for(int j = 0; j < n; j++)
					System.out.printf("*");
			}
		}
	}
}