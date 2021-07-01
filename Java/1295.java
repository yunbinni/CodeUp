import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String instr = sc.nextLine();
		String result = "";
		
		for(int i = 0; i < instr.length(); i++) {
			char c = instr.charAt(i);
			
			if(65 <= c && c <= 90) {
				result += String.valueOf(c).toLowerCase();
			} else if(97 <= c && c <= 122) {
				result += String.valueOf(c).toUpperCase();
			} else {
				result += c;
			}
		}
		
		System.out.println(result);
	}
}

// 풀이에 도움을 주신 yucheol2님 감사합니다.
// blog.naver.com/hongyou022/221515922699