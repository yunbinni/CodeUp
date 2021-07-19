#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int end = (n + 1)/2;
	
	for(int i = 0; i < end; i++){
		for(int j = end - 1 - i; j > 0; j--){
			printf(" ");
		}
		for(int k = 0; k < 2*i + 1; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}