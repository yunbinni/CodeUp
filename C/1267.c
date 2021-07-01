#include <stdio.h>

int main(){
	int n, temp, sum = 0;
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &temp);
		if(temp%5==0) sum += temp;
	}
	
	printf("%d", sum);
	
	return 0;
}