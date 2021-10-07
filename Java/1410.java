import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String inStr[] = sc.nextLine().split("");
		int c1 = 0;
		int c2 = 0;
		
		for(int i = 0; i < inStr.length; i++) {
			switch(inStr[i]) {
			case "(":
				c1++;
				break;
			case ")":
				c2++;
				break;
			}
		}
		
		System.out.println(c1 + " " + c2);
	}
}