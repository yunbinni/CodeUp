import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String date = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(date, ".");
        
        String[] Str = new String [3];
        
        for(int i = 0; i < Str.length; i++){
            Str[Str.length - 1 - i] = token.nextToken();
        }
        
        System.out.println(Str[0] + "-" + Str[1] + "-" + Str[2]);
    }
}