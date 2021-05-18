import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		String outStr[] = new String[3];
		
		if(a%2==0) outStr[0] = "礎熱" ; else outStr[0] = "�汝�";
		if(b%2==0) outStr[1] = "礎熱" ; else outStr[1] = "�汝�";
		if(outStr[0]==outStr[1]) outStr[2] = "礎熱" ; else outStr[2] = "�汝�"; // XOR
		
		bw.write(outStr[0] + "+" + outStr[1] + "=" + outStr[2]);
		
		bw.flush();
	}
}