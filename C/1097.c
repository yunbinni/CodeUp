#include <stdio.h>

int main(){
	int arr[19][19] = {};
	
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int n;
	scanf("%d", &n);
	
	int x, y;
	for(int k = 0; k < n; k++){
		scanf("%d %d", &x, &y);
		
		for(int i = 0; i < 19; i++){
			if(arr[x - 1][i]==0) arr[x - 1][i] = 1;
			else arr[x - 1][i] = 0;
		}
		for(int j = 0; j < 19; j++){
			if(arr[j][y - 1]==0) arr[j][y - 1] = 1;
			else arr[j][y - 1] = 0;
		}
	}
	
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}