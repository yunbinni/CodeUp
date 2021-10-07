#include <stdio.h>

int main(){
	int n, end = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < 2*n - 1; i++){
		
		if(i < n) end++;
		else end--;
		
		for(int j = 0; j < end; j++) printf("*");
		
		printf("\n");
	}
	return 0;
}