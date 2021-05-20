import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int bmi = sc.nextInt();
		
		if(bmi <= 10) bw.write("정상");
		else if(bmi <= 20) bw.write("과체중");
		else bw.write("비만");
		
		bw.flush();
	}
}