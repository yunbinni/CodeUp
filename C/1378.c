#include <stdio.h>

int main(){
	int n, sum = 0, res = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		sum = 0;
		for(int j = 1; j <= i; j++){
			sum += j;
		}
		res += sum;
	}
	printf("%d", res);
	return 0;
}