import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception{
    	BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
    	
        bw.write("\u250c\u252c\u2510\n");
        bw.write("\u251c\u253c\u2524\n");
        bw.write("\u2514\u2534\u2518");
        
        bw.flush();
    }
}