import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String in = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(in, " ");
        
        String[] arr = new String[2];
        
        int i = 0;
        
        while(token.hasMoreTokens()){
            arr[i] = token.nextToken();
            i += 1;
        }
        
        long a = Long.parseLong(arr[0]);
        long b = Long.parseLong(arr[1]);
        
        System.out.println(a + b);
    }
}