import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++){
			// 첫째줄 
			if(i==0){
				for(int j = 0; j < n; j++)
					System.out.printf("*");
				System.out.println();
			}
			
			// 2~(n-1)번째줄(가운데줄 제외) 
			else if(0 < i && i!=(n-1)/2 && i < n-1) {
				for(int j = 0; j < n; j++){
					if(j==0 || j==i || j==(n-1)/2 || j==n-1-i || j==n-1) System.out.printf("*");
					else System.out.printf(" ");
				}
				System.out.println();
			}
			
			// 가운데줄 
			else if(i==(n-1)/2){
				for(int j = 0; j < n; j++)
					System.out.printf("*");
				System.out.println();
			}
			
			// n번째줄
			else if(i==n-1){
				for(int j = 0; j < n; j++)
					System.out.printf("*");
			}
		}
	}
}