#include <stdio.h>

int main(){
	int n ; scanf("%d", &n);
	
	int arr[100][100];
	
	int count = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i%2==0){
				arr[i][j] = count;
				count++;
			} else{
				arr[i][n - 1 - j] = count;
				count++;
			}
		}
		
		for(int k = 0; k < n; k++){
			printf("%d ", arr[i][k]);
		}
		printf("\n");
	}
	return 0;
}