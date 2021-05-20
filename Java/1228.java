import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		
		double std = (a - 100) * 0.9;
		double bimando = (b - std) * 100 / std;
		
		if(bimando <= 10) bw.write("정상");
		else if(bimando <= 20) bw.write("과체중");
		else bw.write("비만");
		
		bw.flush();
	}
}