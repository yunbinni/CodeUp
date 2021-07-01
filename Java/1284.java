import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cnt = 0;
		int idx = 0;
		int arr[] = new int[2];
		int n = sc.nextInt();
		
		for(int i = 2; i < n; i++){
			if(n%i==0){
				cnt++;
				
				if(i==2 && idx < 2){
					arr[idx] = i;
					idx++;
				} else if(i%2!=0 && idx < 2){
					arr[idx] = i;
					idx++;
				}
			}
		}
		
		if(cnt==2 && idx==2) System.out.printf("%d %d", arr[0], arr[1]);
		else System.out.printf("wrong number");
		
	}
}