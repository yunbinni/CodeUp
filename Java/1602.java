import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
    /* 절댓값 구하는 함수 */
    static double ABS(double pnum) {
        if( pnum >= 0 )
            return pnum;
        else
            return -pnum;
    }

    /* 메인 함수 */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.##########");

        double num = scanner.nextDouble();

        System.out.println(
                df.format(Main.ABS(num))
        );
    }
}