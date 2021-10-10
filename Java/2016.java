import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        // 입력 및 초기화
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> stack = new Stack<Character>();

        int n = Integer.parseInt(br.readLine());
        String number = br.readLine();

        // 계산부
        for(int i = 0, c = n - 1; i < n; i++, c--)
        {
            if(i != 0 && i % 3 == 0)
                stack.push(',');
            stack.push(number.charAt(c));
        }

        // 출력부
        while(!stack.empty())
            System.out.printf("%c", stack.pop());
    }
}