import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		double max = Long.MIN_VALUE;
		
		if(a+b > max) max = a+b;
		if(a-b > max) max = a-b;
		if(b-a > max) max = b-a;
		if(a*b > max) max = a*b;
		if(a/b > max) max = a/b;
		if(b/a > max) max = b/a;
		if(Math.pow(a, b) > max) max = Math.pow(a, b); // Math는 인스턴스를 생성할 필요 없음.
		if(Math.pow(b, a) > max) max = Math.pow(b, a);
		
		System.out.printf("%.6f", max);
	}
}