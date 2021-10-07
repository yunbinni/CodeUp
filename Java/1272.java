import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int k = sc.nextInt();
		int h = sc.nextInt();
		int kMoney = 0;
		int hMoney = 0;
		
		if(k%2!=0) kMoney = (k + 1)/2;
		else kMoney = 5*k;
		
		if(h%2!=0) hMoney = (h + 1)/2;
		else hMoney = 5*h;
		
		System.out.println(kMoney + hMoney);
	}
}