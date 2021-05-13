import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String time = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(time, ":");
        
        String[] timeArr = new String[3];
        
        int i = 0;
        
        while(token.hasMoreTokens()){
            timeArr[i] = token.nextToken();
            i += 1;
        }
        
        // "00" -> 0 (Integer.valueOf()는 문자열 -> 숫자)
        System.out.print(Integer.valueOf(timeArr[1]));
    }
}