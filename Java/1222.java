import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int time = sc.nextInt();
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		for(int i = time; i < 90; i+=5){
			a++;
		}
		
		if(a > b) System.out.println("win");
		else if(a < b) System.out.println("lose");
		else System.out.println("same");
	}
}