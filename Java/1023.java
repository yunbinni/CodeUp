import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String num = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(num, ".");
        
        String[] arr = new String[2];
        
        int cnt = 0;
        
        while(token.hasMoreTokens()){
            arr[cnt] = token.nextToken();
            cnt++;
        }
        
        System.out.println(arr[0] + '\n' + arr[1]);
    }
}