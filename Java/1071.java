import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int num;
        
        boolean check = true;
        
        while(check){
            num = sc.nextInt();
            
            if(num == 0){
                check = false;
            } else{
                System.out.printf("%d\n", num);
            }
        }
    }
}