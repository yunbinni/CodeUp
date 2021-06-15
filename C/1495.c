#include <stdio.h>

int main() {
    int n, m, k, x1, y1, x2, y2, u, i, j, l, sum;
    scanf("%d %d %d", &n, &m, &k);
    int d[1001][1001];
    int SumofRows[1001]; // 2중 for문은 시간제한이 크므로, row별 누적 합을 저장하는 배열 선언 
    int out[1001][1001]; // 출력용 배열 선언 
    
    // 세 배열 한꺼번에 초기화 
    for(i = 0; i < n; i++) {
    	SumofRows[i] = 0;
    	for(j = 0; j < m; j++) {
    		d[i][j] = 0;
    		out[i][j] = 0;
		}
	}
	
    for(i = 0; i < k; i++) {
    	scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
    	
    	d[x1][y1] = d[x1][y1]+u;
		d[x2+1][y2+1] = d[x2+1][y2+1]+u;
		
		d[x1][y2+1] = d[x1][y2+1]-u;
		d[x2+1][y1] = d[x2+1][y1]-u;
	}
	
	// 출력 1
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// 누적합
	// SumofRows는 행별 누적합이라서 m까지 수행 
	for(j = 0; j < m; j++) { // 열로 진행 
		for(i = 0; i < n; i++) { // 행으로 진행 
			SumofRows[i] += d[i][j];
		}
		sum = 0;
		for(l = 0; l < n; l++) { // 행으로 진행 
			sum += SumofRows[l];
			out[l][j] = sum;
		}
	}
	
	// 출력2
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ", out[i][j]);
		}
		printf("\n");
	}
    return 0;
}
