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
        
        int min = 9999;
        
        for(int j = 0; j < count; j++){
            if(min > arr[j]) min = arr[j];
        }
        
        System.out.printf("%d", min);
    }
}