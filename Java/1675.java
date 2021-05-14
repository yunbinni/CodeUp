import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String inStr = br.readLine();
		br.close();
		
		for(int i = 0; i < inStr.length(); i++) {
			if(97 <= inStr.charAt(i) && inStr.charAt(i) <= 99) System.out.printf("%c", inStr.charAt(i) + 23);
			else if(inStr.charAt(i) == 32) System.out.printf("%c", inStr.charAt(i));
			else System.out.printf("%c", inStr.charAt(i) - 3);
		}
	}
}