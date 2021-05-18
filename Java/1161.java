import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		String outStr[] = new String[3];
		
		if(a%2==0) outStr[0] = "Â¦¼ö" ; else outStr[0] = "È¦¼ö";
		if(b%2==0) outStr[1] = "Â¦¼ö" ; else outStr[1] = "È¦¼ö";
		if(outStr[0]==outStr[1]) outStr[2] = "Â¦¼ö" ; else outStr[2] = "È¦¼ö"; // XOR
		
		bw.write(outStr[0] + "+" + outStr[1] + "=" + outStr[2]);
		
		bw.flush();
	}
}