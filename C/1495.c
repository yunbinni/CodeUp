#include <stdio.h>

int main() {
    int n, m, k, x1, y1, x2, y2, u, i, j, l, sum;
    scanf("%d %d %d", &n, &m, &k);
    int d[1001][1001];
    int SumofRows[1001]; // 2�� for���� �ð������� ũ�Ƿ�, row�� ���� ���� �����ϴ� �迭 ���� 
    int out[1001][1001]; // ��¿� �迭 ���� 
    
    // �� �迭 �Ѳ����� �ʱ�ȭ 
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
	
	// ��� 1
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// ������
	// SumofRows�� �ະ �������̶� m���� ���� 
	for(j = 0; j < m; j++) { // ���� ���� 
		for(i = 0; i < n; i++) { // ������ ���� 
			SumofRows[i] += d[i][j];
		}
		sum = 0;
		for(l = 0; l < n; l++) { // ������ ���� 
			sum += SumofRows[l];
			out[l][j] = sum;
		}
	}
	
	// ���2
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ", out[i][j]);
		}
		printf("\n");
	}
    return 0;
}
