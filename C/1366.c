#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		// 첫째줄 
		if(i==0){
			for(int j = 0; j < n; j++)
				printf("*");
			printf("\n");
		}
		
		// 2~(n-1)번째줄(가운데줄 제외) 
		else if(0 < i && i!=(n-1)/2 && i < n-1) {
			for(int j = 0; j < n; j++){
				if(j==0 || j==i || j==(n-1)/2 || j==n-1-i || j==n-1) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
		
		// 가운데줄 
		else if(i==(n-1)/2){
			for(int j = 0; j < n; j++)
				printf("*");
			printf("\n");
		}
		
		// n번째줄
		else if(i==n-1){
			for(int j = 0; j < n; j++)
				printf("*");
		}
	}
	return 0;
}