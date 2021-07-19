#include <stdio.h>

int main(){
	int h, k;
	char d;
	scanf("%d %d %c", &h, &k, &d);
	
	for(int i = 0; i < h; i++){
		if(d == 76){ // 아스키 코드 
			for(int j = 0; j < i; j++){
				printf(" ");
			}
			for(int m = 0; m < k; m++){
				printf("*");
			}
			printf("\n");
		} else{
			for(int j = h - 1 - i; j > 0; j--){
				printf(" ");
			}
			for(int m = 0; m < k; m++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}