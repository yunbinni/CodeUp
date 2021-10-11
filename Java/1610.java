import java.util.Scanner;

public class Main {
    static String mysubstr(String str, int start, int count) {
        String res = "";

        for(int i = start; i < start + count; i++){
            res += str.charAt(i);
        }

        return res;
    }

    /* 메인 함수 */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 입력 및 초기화
        String str = scanner.next();
        int start = scanner.nextInt();
        int count = scanner.nextInt();

        // 출력부
        System.out.println(
                Main.mysubstr(str, start, count)
        );
    }
}