import java.util.Arrays;
import java.util.OptionalInt;
import java.util.Scanner;

public class Main {
    /* 메인 함수 */
    public static void main(String[] args)  {
        Scanner scanner = new Scanner(System.in);

        // 입력 및 초기화
        int N = scanner.nextInt();
        int[] scores = new int[N];

        for(int i = 0; i < N; i++)
            scores[i] = scanner.nextInt();

        // 계산부
        OptionalInt max = Arrays.stream(scores).max();
        OptionalInt min = Arrays.stream(scores).min();

        int maxInt = max.orElse(0);
        int minInt = min.orElse(0);

        // 출력부
        System.out.println(maxInt - minInt);
    }
}