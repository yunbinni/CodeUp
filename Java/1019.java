import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String inStr = sc.nextLine();
		
		String[] proStr = inStr.split("\\.");
		
		System.out.printf("%04d.", Integer.parseInt(proStr[0]));
		System.out.printf("%02d.", Integer.parseInt(proStr[1]));
		System.out.printf("%02d", Integer.parseInt(proStr[2]));
	}
}