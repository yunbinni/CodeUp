import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String inStr = sc.nextLine();
		int alpha[] = new int[26];
		for(int i = 0; i < 26; i++){
			alpha[i] = 0;
		}
		
		for(int j = 0; j < inStr.length(); j++){
			for(int i = 97; i <= 122; i++){
				if(inStr.charAt(j)==i){
					alpha[i - 97]++;
				}
			}
		}
		
		for(int i = 97; i <= 122; i++){
			System.out.printf("%c:%d\n", i, alpha[i - 97]);
		}
	}
}