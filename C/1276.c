#include <stdio.h>

int main(){
	int n, res = 1;
	scanf("%d", &n);
	
	while(n){
		res *= n;
		n--;
	}
	
	printf("%d", res);
	
	return 0;
}