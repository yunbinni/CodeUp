import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		float res = a;
		float net;
		
		int per[] = new int[b];
		for(int i = 0; i < per.length; i++) {
			per[i] = sc.nextInt();
		}
		
		for(int i = 0; i < b; i++){
			res = res + res*(per[i]/(float)100);
		}
		
		net = res - a;
		
		System.out.printf("%.0f\n", net);
		
		if(-0.5 < net && net < 0.5) System.out.println("same");
		else if(net >= 0.5) System.out.println("good");
		else if(net <= -0.5) System.out.println("bad");
	}
}