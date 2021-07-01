import java.util.Scanner;
import java.util.ArrayList;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String inStr = sc.nextLine();
		String inStrArr[] = inStr.split("");
		
		// 숫자배열과 부호배열로 구분하여 담기
		ArrayList<Integer> numArr = new ArrayList<>();
		ArrayList<String> operArr = new ArrayList<>();
		String tmpNum = "";
		
		for(int i = 0; i < inStrArr.length; i++) {
			switch(inStrArr[i]) {
			case "+":
				numArr.add(Integer.parseInt(tmpNum));
				operArr.add("+");
				tmpNum = "";
				break;
			case "-":
				numArr.add(Integer.parseInt(tmpNum));
				operArr.add("-");
				tmpNum = "";
				break;
			case "*":
				numArr.add(Integer.parseInt(tmpNum));
				operArr.add("*");
				tmpNum = "";
				break;
			case "/":
				numArr.add(Integer.parseInt(tmpNum));
				operArr.add("/");
				tmpNum = "";
				break;
			case "=":
				numArr.add(Integer.parseInt(tmpNum));
				operArr.add("=");
				tmpNum = "";
				break;
			default:
				tmpNum += inStrArr[i];
				break;
			}
		}
		
		// 계산하기
		int num = numArr.get(0);
		int sum = num;
		
		for(int i = 0; i < operArr.size(); i++) {
			switch(operArr.get(i)) {
			case "+":
				num = numArr.get(i + 1);
				sum += num;
				break;
			case "-":
				num = numArr.get(i + 1);
				sum -= num;
				break;
			case "*":
				num = numArr.get(i + 1);
				sum *= num;
				break;
			case "/":
				num = numArr.get(i + 1);
				sum /= num;
				break;
			case "=":
				System.out.println(sum);
				break;
			}
		}
	}
}