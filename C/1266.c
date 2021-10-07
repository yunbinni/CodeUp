// 배열을 이용한 풀이
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	
	int *arr = (int *)malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for(int i = 0; i < n; i++) sum += arr[i];
	
	printf("%d", sum);
	
	return 0;
}