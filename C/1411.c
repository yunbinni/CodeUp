#include <stdio.h>

int main(){
	int N, cnt;
	scanf("%d", &N);
	int arr[N-1];
	for(int i = 0; i < N-1; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int j = 1; j <= N; j++){
		cnt = 0;
		for(int i = 0; i < N-1; i++){
			cnt++;
			if(j==arr[i]){
				cnt = 0;
				break;
			}
		}
		if(cnt==N-1){
			printf("%d", j);
			break;
		}
	}
	return 0;
}