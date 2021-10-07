import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String instr = sc.nextLine();
		
		for(int i = 0; i < instr.length(); i++) {
			if(instr.charAt(i)==' ') continue;
			else System.out.print(instr.charAt(i));
		}
	}
}