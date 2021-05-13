import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        // 16진수 입력
        int x = sc.nextInt(16);
        
        sc.close();
        
        for(int i = 1; i <= 15; i++){
            System.out.printf("%X*%X=%X\n", x, i, x*i);
        }
    }
}