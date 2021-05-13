// 시간초과 해결 : BufferedReader 와 BufferedWriter 클래스를 사용
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main{
	public static void main(String[] args) {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			String inStr = br.readLine();
			String[] inArr = inStr.split(" ");
			int count = 0;
			
			BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
			
			for(int i = 0; i < Integer.valueOf(inArr[0]); i++) {
				for(int j = 0; j < Integer.valueOf(inArr[1]); j++) {
					for(int k = 0; k < Integer.valueOf(inArr[2]); k++) {
						bw.write(i + " " + j + " " + k + "\n");
						count++;
					}
				}
			}
			bw.write(String.valueOf(count));
			bw.flush();
		} catch(IOException e) {
			e.printStackTrace();
		}
	}
}