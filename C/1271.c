#include <stdio.h>
#include <limits.h>

int max = INT_MIN;

int main(){
	int n, temp;
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &temp);
		if(temp > max) max = temp;
	}
	
	printf("%d", max);
	
	return 0;
}