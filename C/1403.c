#include <stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	int arr[k];
	for(int i = 0; i < k; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < k; i++){
		printf("%d\n", arr[i]);
	}
	
	for(int i = 0; i < k; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}