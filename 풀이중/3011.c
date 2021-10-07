#include <stdio.h>

int main() {
	int n, i, j, temp, cnt = 0, inCnt, arr[1001];
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	// 정렬(Bubble)
	for(i = 0; i < n - 1; i++) {
		cnt++;
		for(j = i + 1; j < n - 1; j++) {
			if(arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		// 순서 check 
		for(j = 0; j < n - 1; j++) {
			inCnt = 0;
			if(arr[j] < arr[j + 1])
			inCnt++;
		}
		if(inCnt == n - 1) {
			printf("%d", cnt);
			return 0;
		}
	}
	return 0;
}
