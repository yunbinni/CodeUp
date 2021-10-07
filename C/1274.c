#include <stdio.h>

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(n%i==0) cnt += 1;
	}
	
	if(cnt==2) printf("prime");
	else printf("not prime");
	
	return 0;
}