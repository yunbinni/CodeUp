import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        // 입력 및 초기화
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> stack = new Stack<Integer>();

        String a = br.readLine();
        StringBuffer aSB = new StringBuffer(a);

        String b = br.readLine();
        StringBuffer bSB = new StringBuffer(b);
        int oneNum, tenNum = 0, sum = 0;

        // 계산부
        aSB.reverse();  aSB.append("0");
        bSB.reverse();  bSB.append("0");

        if( a.length() >= b.length() )
            for(int i = 0; i < a.length() - b.length(); i++)
                bSB.append("0");
        else
            for(int i = 0; i < b.length() - a.length(); i++)
                aSB.append("0");

        int loop = Math.max(aSB.length(), bSB.length());

        for(int i = 0; i < loop; i++)
        {
            sum = (int)(aSB.charAt(i)) - 48 + (int)(bSB.charAt(i)) - 48 + tenNum;

            oneNum = sum % 10;
            tenNum = sum / 10;

            stack.push(oneNum);
        }

        // 출력부
        int i = 0;
        while(!stack.empty())
        {
            if(i == 0 && stack.peek() == 0)
                stack.pop();
            System.out.printf("%d", stack.pop());
            i++;
        }
    }
}