import java.util.Scanner;

public class Main {
    static int mymin(int a, int b) {
        return a <= b ? a : b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(
                Main.mymin(a, b)
        );
    }
}