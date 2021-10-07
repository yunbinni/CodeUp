import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	
    	String s = sc.nextLine();
    	int cnt1 = 0, cnt2 = 0;
    	
    	for(int i = 0; i < s.length(); i++) {
    		if(s.charAt(i)=='c' || s.charAt(i)=='C') {
    			cnt1++;
    			if(i < s.length() - 1 && (s.charAt(i+1)=='c' || s.charAt(i+1)=='C'))
    				cnt2++;
    		}
    	}
    	
    	System.out.printf("%d\n%d", cnt1, cnt2);
    }
}