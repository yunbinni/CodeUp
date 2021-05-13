import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String num = sc.nextLine();
        
        char[] nums = num.toCharArray();
        
        for(int i = 0; i < nums.length; i++) {
        	System.out.print("[" + nums[i]);
        	
        	for(int j = nums.length - 1; j > i; j--) {
        		System.out.print("0");
        	}
        	
        	System.out.println("]");
        }
    }
}