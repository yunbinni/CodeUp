#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	// 상단부
	for(int i = 0; i < n; i++){
		// 1번째 공백
		for(int j = 0; j < n - 1 - i; j++) printf(" ");
		// 1번쨰 별
		printf("*");
		// 2번째 공백
		for(int j = 0; j < 2*i; j++) printf(" ");
		// 2번째 별
		printf("*\n");
	}
	
	// 하단부
	for(int i = 0; i < n; i++){
		// 1번째 공백
		for(int j = 0; j < i; j++) printf(" ");
		// 1번쨰 별
		printf("*");
		// 2번째 공백
		for(int j = 0; j < 2*(n-1-i); j++) printf(" ");
		// 2번째 별
		printf("*\n");
	}
	return 0;
}