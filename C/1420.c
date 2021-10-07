#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char name[n][10];
	int score[n];
	int rank[n];
	
	for(int i = 0; i < n; i++){
		scanf("%s %d", name[i], &score[i]);
		rank[i] = 1; 
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(score[i] < score[j]){
				rank[i]++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(rank[i]==3)
			printf("%s", name[i]);
	}
	
	return 0;
}