#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		int k = i;
		for(int j = 0; j < n; j++){
			if(k==n) k = 0;
			printf("%d ", arr[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}