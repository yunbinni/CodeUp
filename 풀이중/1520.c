#include <stdio.h>

void creature(int array[], int a, int b, int x, int y, int z) {
	int cnt = 0;
	for(int i = a - 1; i <= a + 1; i++) {
		for(int j = b - 1; j <= b + 1; j++) {
			if(i == a && j == b) continue;
			if(array[i][j] == 1) cnt++;
		}
	}
	
	if(cnt == x) array[i][j] = 1;
	else if()
}

int main() {
	int a, b, x, y, z, k, i, j;
	int array[171][171];
	for(i = 0; i < 171; i++) {
		for(j = 0; j < 171; j++) {
			array[i][j] = 0;
		}
	}
	
	// ÀÔ·Â
	scanf("%d %d", &a, &b);
	scanf("%d %d %d", &x, &y, &z);
	for(i = 1; i <= a; i++) {
		for(j = 1; j <= b; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	scanf("%d", &k);
	
	
	return 0;
}
