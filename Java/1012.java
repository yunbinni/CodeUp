import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float x = sc.nextFloat();
        // 소수점 맞춰주기
        String s = String.format("%.6f", x);
        System.out.println(s);
    }
}