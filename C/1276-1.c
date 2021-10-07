// 재귀용법을 이용한 다른 풀이
#include <stdio.h>

int fac(int n){
	if(n==1) return 1;
	else return n*fac(n - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	
	printf("%d", fac(n));
	return 0;
}