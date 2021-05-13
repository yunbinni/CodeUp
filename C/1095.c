#include <stdio.h>

int main(){
	int count;
	scanf("%d", &count);
	
	int arr[10000];
	
	int number;
	
	for(int i = 0; i < count; i++){
		scanf("%d", &arr[i]);
	}
	
	int min = 9999;
	
	for(int i = 0; i < count; i++){
		if (min > arr[i]) min = arr[i];
	}
	
	printf("%d", min);
	return 0;
}