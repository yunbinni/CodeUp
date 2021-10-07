import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	
    	String word = sc.nextLine();
    	
    	int cnt = 0;
    	
    	for(int i = 0; i < word.length(); i++){
    		if(word.charAt(i)=='l' && word.charAt(i+1)=='o' && word.charAt(i+2)=='v' && word.charAt(i+3)=='e'){
    			cnt++;
    		}
    	}
    	
    	System.out.println(cnt);
    }
}