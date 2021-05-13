import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String id = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(id, "-");
        
        String answer = "";
        
        while(token.hasMoreTokens()){
            answer += token.nextToken();
        }
        
        System.out.println(answer);
    }
}