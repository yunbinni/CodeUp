import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String C = sc.nextLine();
        int count = Integer.parseInt(C);
        
        String number = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(number, " ");
        
        int arr[] = new int[count];
        
        int i = 0;
        
        while(token.hasMoreTokens()) {
	    	arr[i] = Integer.parseInt(token.nextToken());
	    	i++;
        }
        
        for(int j = count - 1; j >= 0; j--) {
        	System.out.printf("%d ", arr[j]);
        }
    }
}