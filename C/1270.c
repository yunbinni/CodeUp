#include <stdio.h>

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(i%10==1) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}