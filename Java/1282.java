import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int k = 0;
		
		for(int i = n; i > 0; i--){
			double t = Math.sqrt((double)i);
			
			if(t - (int)t == 0){
				System.out.printf("%d %.0f\n", k, t);
				break;
			} else{
				k++;
			}
		}
	}
}