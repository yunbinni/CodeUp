import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        // 입력 및 초기화
        Scanner scanner = new Scanner(System.in);
        Stack<Integer> stack = new Stack<>();

        int K, input, sum = 0;
        K = scanner.nextInt();

        // 계산부
        for(int i = 0; i < K; i++)
        {
            input = scanner.nextInt();

            // 입력받은 값이 0이 아니면 Push
            if(input != 0)
                stack.push(input);

                // 입력받은 값이 0면 Pop
            else
                stack.pop();
        }

        // 출력부
        System.out.println(stack.stream().reduce(0, Integer::sum));
    }
}