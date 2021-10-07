import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		int temp;
		
		for(int i = 0; i < 5; i++) {
			temp = sc.nextInt();
			
			if(temp > max) max = temp;
			if(temp < min) min = temp;
		}
		
		System.out.println(max);
		System.out.println(min);
	}
}