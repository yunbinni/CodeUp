import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// 초기화(d는 입력받을 data, r은 출력할 result) 
		int d[][] = new int[172][172];
		int r[][] = new int[172][172];
		int a, b, x, y, z, k, i, j;
		
		// 입력받기
		a = sc.nextInt(); b = sc.nextInt();
		x = sc.nextInt(); y = sc.nextInt(); z = sc.nextInt();
		
		for(i = 1; i <= a; i++)
			for(j = 1; j <= b; j++) 
			{
				d[i][j] = sc.nextInt();
				r[i][j] = 0;
			}
		k = sc.nextInt();
		
		// 연산 
		while(k > 0) 
		{
			for(i = 1; i <= a; i++)
				for(j = 1; j <= b; j++)
				{
					// 8방향 더하기 
					r[i][j] = d[i-1][j-1] + d[i-1][j] + d[i-1][j+1] + d[i][j-1] + d[i][j+1] + d[i+1][j-1] + d[i+1][j] + d[i+1][j+1];
					if(d[i][j] == 0) r[i][j] = r[i][j] == x ? 1 : 0;
					else r[i][j] = (y <= r[i][j] && r[i][j] < z) ? 1 : 0;
				}
				
			// 세대 업데이트
			for(i = 1; i <= a; i++) 
				for(j = 1; j <= b; j++)
					d[i][j] = r[i][j];
			
			k--;
		}
		
		// 출력
		for(i = 1; i <= a; i++)
		{
			for(j = 1; j <= b; j++)
				System.out.printf("%d ", r[i][j]);
			System.out.println();
		}
	}
}