import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int h = sc.nextInt();
		int m = sc.nextInt();
		
		if(m < 30){
			if(h==0) System.out.printf("%d %d", 23, m - 30 + 60);
			else System.out.printf("%d %d", h - 1, m - 30 + 60);
		} else{
			System.out.printf("%d %d", h, m - 30);
		}
	}
}