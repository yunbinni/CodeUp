import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		
		for(int i = 0; i < m; i++){
			// 맨 윗줄, 맨 아랫줄 
			if(i==0 || i==m-1){
				for(int j = 0; j < n; j++){
					if(j==0 || j==n-1) System.out.printf("+");
					else System.out.printf("-");
				}
			}
			
			// 나머지줄 
			else{
				for(int j = 0; j < n; j++){
					if(j==0 || j==n-1) System.out.printf("|");
					else System.out.printf(" ");
				}
			} 
			System.out.printf("\n");
		}
	}
}