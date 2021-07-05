import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s1 = sc.next();
		String s2 = sc.next();
		
		if(s1.length() < s2.length())
			System.out.println(s1 + " " +s2);
		else if(s1.length() > s2.length())
			System.out.println(s2 + " " + s1);
		else {
			for(int i = 0; i < s1.length(); i++) {
				if(s1.charAt(i) < s2.charAt(i)) {
					System.out.println(s1 + " " +s2);
					break;
				} else if(s1.charAt(i) > s2.charAt(i)) {
					System.out.println(s2 + " " + s1);
					break;
				} else
					continue;
			}
		}
	}
}