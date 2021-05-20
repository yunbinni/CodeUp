import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int n = sc.nextInt();
		
		if(n > 0) bw.write("양수");
		else if(n < 0) bw.write("음수");
		else bw.write("0");
		
		bw.flush();
	}
}