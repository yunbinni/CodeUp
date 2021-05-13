#include <stdio.h>

int main(){
	int count;
	scanf("%d", &count);
	
	int arr[10000];
	
	int number;
	
	for(int i = 0; i < count; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int j = count; j > 0; j--){
		printf("%d ", arr[j-1]);
	}
	return 0;
}