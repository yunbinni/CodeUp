import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static int[] d;

    static int maxi(int a, int b) {
        int rIdx = a-1;

        for(int i = a-1; i < b; i++)
            rIdx = Main.d[i] > Main.d[rIdx] ? i : rIdx;

        return ++rIdx;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = Integer.parseInt(scanner.nextLine());

        Main.d = Arrays.stream(scanner.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(maxi(a, b));
    }
}