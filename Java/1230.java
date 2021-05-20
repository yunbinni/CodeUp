import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int tunnel[] = new int[3];
		
		for(int i = 0; i < tunnel.length; i++) {
			tunnel[i] = sc.nextInt();
		}
		
		for(int i = 0; i < tunnel.length; i++) {
			if(tunnel[i] <= 170){
				 System.out.printf("CRASH %d", tunnel[i]);
				 break;
			}
		}
		
		if(tunnel[0] > 170 && tunnel[1] > 170 && tunnel[2] > 170) {
			System.out.println("PASS");
		}
	}
}