#include <stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int res = 1;
	for(int i = 0; i < k; i++){
		res *= n;
	}
	printf("%d", res);
    return 0;
}