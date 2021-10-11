import java.util.Scanner;

public class Main {
    /* 반지름 구하는 함수 */
    static double circle(int r) {
        return r * r * 3.14;
    }

    /* 메인 함수 */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int r = scanner.nextInt();

        System.out.printf("%.2f", Main.circle(r));
    }
}