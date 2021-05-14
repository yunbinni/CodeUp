#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++){
		// 맨 윗줄, 맨 아랫줄 
		if(i==0 || i==m-1){
			for(int j = 0; j < n; j++){
				if(j==0 || j==n-1) printf("+");
				else printf("-");
			}
		}
		
		// 나머지줄 
		else{
			for(int j = 0; j < n; j++){
				if(j==0 || j==n-1) printf("|");
				else printf(" ");
			}
		} 
		printf("\n");
	}
	return 0;
}