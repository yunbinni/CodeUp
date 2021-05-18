import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int y = sc.nextInt();
		int m = sc.nextInt();
		int d = sc.nextInt();
		
		int concls = y - m + d;
		
		if(concls%10==0) bw.write("대박");
		else bw.write("그럭저럭");
		
		bw.flush();
	}
}