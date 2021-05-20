import java.util.*;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "utf-8"));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
        double h, w, stdw, bimando;
    	h = sc.nextDouble();
    	w = sc.nextDouble();
    	
    	if(h < 150) stdw = h - 100;
    	else if(150 <= h && h < 160) stdw = (h - 150)/2 + 50;
    	else stdw = (h - 100)*0.9;
    	
    	bimando = (w - stdw)*100/stdw;
    	
    	if(bimando <= 10) bw.write("정상");
    	else if(10 < bimando && bimando <= 20) bw.write("과체중");
    	else bw.write("비만");
    	
    	bw.flush();
    	
    }
}