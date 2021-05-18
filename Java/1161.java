import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		String outStr[] = new String[3];
		
		if(a%2==0) outStr[0] = "¦��" ; else outStr[0] = "Ȧ��";
		if(b%2==0) outStr[1] = "¦��" ; else outStr[1] = "Ȧ��";
		if(outStr[0]==outStr[1]) outStr[2] = "¦��" ; else outStr[2] = "Ȧ��"; // XOR
		
		bw.write(outStr[0] + "+" + outStr[1] + "=" + outStr[2]);
		
		bw.flush();
	}
}