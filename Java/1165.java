import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int min = sc.nextInt();
		int score = sc.nextInt();
		
		while(min < 90) {
			min += 5;
			score++;
		}
		
		System.out.println(score);
	}
}