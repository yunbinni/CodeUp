import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int end = (n + 1)/2;
		
		for(int i = 0; i < end; i++){
			for(int j = end - 1 - i; j > 0; j--){
				System.out.print(" ");
			}
			for(int k = 0; k < 2*i + 1; k++){
				System.out.print("*");
			}
			System.out.println();
		}
	}
}