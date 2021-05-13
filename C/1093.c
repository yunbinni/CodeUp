#include <stdio.h>

int main(){
	int arr[23] = {};
	
	int count;
	scanf("%d", &count);
	
	int number;
	
	for(int i = 1; i <= count; i++){
		scanf("%d", &number);
		arr[number] += 1;
	}
	
	for(int j = 1; j <= sizeof(arr)/4; j++){
		printf("%d ", arr[j]);
	}
    return 0;
}