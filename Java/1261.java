import java.util.Scanner;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		
		int s = 0;
		int arr[] = new int[10];
		
		for(int i = 0; i < 10; i++) {
			arr[i] = sc.nextInt();
		}
		
		for(int i = 0; i < 10; i++) {
			if(arr[i]%5==0) {
				System.out.println(arr[i]);
				s = 1;
				break;
			}
		}
		
		if(s == 0) {
			System.out.println(0);
		}
	}
}