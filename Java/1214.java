import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int y = sc.nextInt();
        int m = sc.nextInt();
        
        int mArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if(m==2){
    		if(y%400==0 || y%4==0 && y%100!=0) System.out.printf("%d", 29);
    		else System.out.printf("%d", 28);
    	} else{
    		System.out.printf("%d", mArr[m - 1]);
    	}
    }
}