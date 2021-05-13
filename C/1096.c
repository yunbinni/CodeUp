#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[19][19] = {0, };
	
	int x, y;
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		arr[x - 1][y - 1] = 1;
	}
	
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19; j++){
			if(arr[i][j] == 1) printf("%d ", 1);
			else printf("%d ", 0);
		}
		printf("\n");
	}
	return 0;
}