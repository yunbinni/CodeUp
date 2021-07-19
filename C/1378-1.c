#include <stdio.h>

int main(){
	int n, s = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		s += (i+1)*i/2;
	}
	printf("%d", s);
	
	return 0;
}