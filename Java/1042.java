import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String in = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(in, " ");
        
        String[] intArr = new String[2];
        
        int i = 0;
        
        while(token.hasMoreTokens()){
            intArr[i] = token.nextToken();
            i += 1;
        }
        
        int a = Integer.parseInt(intArr[0]);
        int b = Integer.parseInt(intArr[1]);
        
        System.out.println(a/b);
    }
}