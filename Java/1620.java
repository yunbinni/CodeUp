import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static String f(String str) {
        String[] strArr = str.split("");
        Integer sum = Arrays.stream(strArr).mapToInt(Integer::parseInt).sum();

        return sum.toString();
    }

    /* 메인 함수 */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 입력 및 초기화
        String str = scanner.next();

        // 계산부
        while(str.length() > 1)
            str = Main.f(str);

        // 출력부
        System.out.println(str);
    }
}