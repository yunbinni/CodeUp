import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int count = sc.nextInt();
		
		int arr[] = new int[23];
		
		for(int i = 0; i < count; i++) {
			int number = sc.nextInt();
			arr[number - 1] += 1; 
		}
		
		for(int j = 0; j < arr.length; j++) {
			System.out.printf("%d ", arr[j]);
		}
	}
}