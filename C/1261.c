#include <stdio.h>
#include <stdlib.h>

int main(){
	int s = 0;
	int *arr = (int *)malloc(sizeof(int) * 10);
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 10; i++){
		if(arr[i]%5==0){
			printf("%d", arr[i]);
			s = 1;
			break;
		}
	}
	if(s==0)
		printf("%d", 0);
	return 0;
}