import java.util.Scanner;

public class Main{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String input[] = sc.nextLine().split("H"); // H 문자는 소비된다.
        int cNum = Integer.parseInt(input[0].substring(1));
        int hNum = Integer.parseInt(input[1]);
        
        System.out.println(12 * cNum + hNum);
    }
}