import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    /* 메인 함수 */
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 입력 및 초기화
        int n, m;
        n = Integer.parseInt(br.readLine());
        m = Integer.parseInt(br.readLine());

        System.out.println( (n+m)/2 );
        System.out.println( (n-m)/2 );
    }
}