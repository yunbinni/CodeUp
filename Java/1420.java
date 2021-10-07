import java.util.Scanner;
import java.util.StringTokenizer;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String name[] = new String[n];
		int score[] = new int[n];
		int rank[] = new int[n];
		
		for(int i = 0; i < n; i++) {
			name[i] = sc.next();
			score[i] = sc.nextInt();
			rank[i] = 1;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(score[i] < score[j]){
					rank[i]++;
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			if(rank[i]==3)
				System.out.println(name[i]);
		}
	}
}