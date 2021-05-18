import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int car[] = new int[3];
        
        for(int i = 0; i < 3; i++){
            car[i] = sc.nextInt();
        }
        
        int s = 1;
        
        for(int i = 0; i < 3; i++){;
        	if(car[i]<=170){
        		s = 0;
        		break;
    		}
    	}
    	
    	if(s == 1){
    	    System.out.printf("PASS");
    	} else{
    	    System.out.printf("CRASH");
    	}
    }
}