import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int repArr[] = new int[6];
		int myArr[] = new int[6];
		int bonus = 0 ; int count = 0 ; int isSec = 0;
		
		for(int i = 0; i < 6; i++){
			repArr[i] = sc.nextInt();
		}
		
		bonus = sc.nextInt();
		
		for(int i = 0; i < 6; i++){
			myArr[i] = sc.nextInt();
		}
		
		for(int i = 0; i < 6; i++){
			for(int j = 0; j < 6; j++){
				if(repArr[i]==myArr[j]){
					count++;
					continue;
				}
			}
		}
		
		if(count==5){
			for(int i = 0; i < 6; i++){
				if(bonus==myArr[i]){
					isSec = 1;
					break;
				}
			}
		}
		
		switch(count){
		case 6:
			System.out.println(1);
			break;
		case 5:
			if(isSec==1) System.out.println(2);
			else System.out.println(3);
			break;
		case 4:
			System.out.println(4);
			break;
		case 3:
			System.out.println(5);
			break;
		default:
			System.out.println(0);		
		}
	}
}