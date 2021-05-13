#include <stdio.h>

int main(){
	long int a, r, n;
	scanf("%ld %ld %ld", &a, &r, &n);
	
	long long int result = a;
	
	for(int i = 1; i < n; i++){
		result *= r;
	}
	printf("%lld", result);
    return 0;
}