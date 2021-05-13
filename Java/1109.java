import java.util.Scanner;

public class Main{	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String name = sc.nextLine();
		int age = sc.nextInt();
		char dep = sc.next().charAt(0);
		float key = sc.nextFloat();
		
		System.out.println(name);
		System.out.println(age);
		System.out.println(dep);
		System.out.println(key);
	}
}