import java.util.Scanner;
 
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String hexNum = sc.nextLine();
        
        int num = Integer.parseInt(hexNum, 16);
        
        String octNum = Integer.toOctalString(num);
        
        System.out.print(octNum);
        
    }
}