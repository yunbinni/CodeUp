#include <stdio.h>

int main(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	int k;
	scanf("%d", &k);
	
	printf("%d", arr[k - 1]);
	return 0;
}