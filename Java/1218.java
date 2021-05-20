import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8")); // Exception처리를 안해주면 에러
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		if (a + b > c && a + c > b && b + c > a){
			if(a==b && b==c) bw.write("정삼각형");
			else if(a==b || b==c || a==c) bw.write("이등변삼각형");
			else if(Math.pow(a, 2) + Math.pow(b, 2) == Math.pow(c, 2)) bw.write("직각삼각형");
			else bw.write("삼각형");
		} else{
			bw.write("삼각형아님");
		}
		
		bw.close();
	}
}