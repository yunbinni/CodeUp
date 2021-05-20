import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String inStr = sc.nextLine();
		
		for(int i = 0; i < inStr.length(); i++) {
			
			if(inStr.charAt(i)=='+') {
				StringTokenizer token = new StringTokenizer(inStr, "+");
				int a = Integer.parseInt(token.nextToken());
				int b = Integer.parseInt(token.nextToken());
				System.out.println(a+b);
			}
			
			else if(inStr.charAt(i)=='-') {
				StringTokenizer token = new StringTokenizer(inStr, "-");
				int a = Integer.parseInt(token.nextToken());
				int b = Integer.parseInt(token.nextToken());
				System.out.println(a-b);
			}
			
			else if(inStr.charAt(i)=='*') {
				StringTokenizer token = new StringTokenizer(inStr, "*");
				int a = Integer.parseInt(token.nextToken());
				int b = Integer.parseInt(token.nextToken());
				System.out.println(a*b);
			}
			
			else if(inStr.charAt(i)=='/') {
				StringTokenizer token = new StringTokenizer(inStr, "/");
				int a = Integer.parseInt(token.nextToken());
				int b = Integer.parseInt(token.nextToken());
				System.out.printf("%.2f", (float)a/(float)b);
			}
		}
	}
}