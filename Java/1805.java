import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

class Machine {
    int id;
    int gas;

    // Constructor
    public Machine(int id, int gas) {
        this.id = id;
        this.gas = gas;
    }
}

public class Main {
    /* 기계들 오름차순 정렬 함수 */
    public static void machineSort(Machine[] machines) {
        int len = machines.length;
        Machine temp;

        for(int i = 0; i < len - 1; i++) {
            for(int j = 0; j < len - 1 - i; j++) {
                if( machines[j].id > machines[j+1].id ) {
                    temp = machines[j];
                    machines[j] = machines[j + 1];
                    machines[j + 1] = temp;
                }
            }
        }
    }

    /* 메인 함수 */
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 입력 및 초기화
        int n, id, gas, i;
        StringBuffer sb;
        String input;
        n = Integer.parseInt(br.readLine());

        Machine[] machines = new Machine[n];

        for (i = 0; i < n; i++) {
            sb = new StringBuffer(br.readLine());
            id = Integer.parseInt(sb.toString().split(" ")[0]);
            gas = Integer.parseInt(sb.toString().split(" ")[1]);

            machines[i] = new Machine(id, gas);
        }

        // 계산부
        machineSort(machines);

        // 출력부
        Arrays.stream(machines).forEach(m -> System.out.printf("%d %d\n", m.id, m.gas));
    }
}