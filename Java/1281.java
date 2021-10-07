import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int sum = 0;
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		for(int i = a; i <= b; i++){
			if(i==a && i%2!=0){
				System.out.printf("%d", i);
				sum += i;
				
			} else if(i==a && i%2==0){
				System.out.printf("-%d", i);
				sum -= i;
				
			} else if(i%2!=0){
				System.out.printf("+%d", i);
				sum += i;
				
			} else if(i%2==0){
				System.out.printf("-%d", i);
				sum -= i;
				
			}
		}
		System.out.printf("=%d", sum);
	}
}