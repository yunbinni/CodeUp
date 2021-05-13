import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String inStr = sc.nextLine();
        
        char[] nums = inStr.toCharArray();
        
        for(int i = 0; i < nums.length; i++){
            System.out.println("'" + nums[i] + "'");
        }
    }
}