#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int num[n];
	char oper[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	
	for(int i = 0; i < n; i++){
		printf("%d: ", i+1);
		for(int j = 0; j < n; j++){
			if(i!=j){
				if(num[i] > num[j])
					printf("> ");
				else if(num[i] == num[j])
					printf("= ");
				else
					printf("< ");
			}
		}
		printf("\n");
	}
	return 0;
}