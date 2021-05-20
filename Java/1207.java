import java.util.Scanner;
import java.io.*;

public class Main{
	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out, "utf-8"));
		
		int arr[] = new int[4];
	    for(int i = 0; i < 4; i++){
	        arr[i] = sc.nextInt();
	    }
	    
	    switch(arr[0] + arr[1] + arr[2] + arr[3]){
	        case 1:
	            bw.write("도");
	            break;
	        case 2:
	        	bw.write("개");
	            break;
	        case 3:
	        	bw.write("걸");
	            break;
	        case 4:
	        	bw.write("윷");
	            break;
	        default:
	        	bw.write("모");
	            break;
	    }
		bw.flush();
	}
}