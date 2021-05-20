import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int arr[] = {400, 340, 170, 100, 70};
        
        int i = sc.nextInt();
        int j = sc.nextInt();
        
        if(arr[i - 1] + arr[j - 1] > 500) System.out.println("angry");
        else System.out.println("no angry");
    }
}