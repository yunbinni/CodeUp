#include <stdio.h>

int f(int n) {
	if(n == 1) printf("%d\n", 1);
	else return f(n - 1);
	printf("%d\n", n);
}

int main() {
	int n;
	scanf("%d", &n);
	
	f(n);
	
	return 0;
}
