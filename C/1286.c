#include <stdio.h>
#include <limits.h>

int main(){
	int max = INT_MIN;
	int min = INT_MAX;
	int temp;
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &temp);
		
		if(temp > max) max = temp;
		if(temp < min) min = temp;
	}
	
	printf("%d\n", max);
	printf("%d", min);
	
	return 0;
}