// math.h를 이용한 다른 풀이
#include <stdio.h>
#include <math.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int res = pow(n, k);
	printf("%d", res);
    return 0;
}