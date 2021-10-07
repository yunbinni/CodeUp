#include <stdio.h>

int main(){
	int n, arr[100], len = 0;
	scanf("%d", &n);
	
	if(n==0)
		printf("%d", 0);
	else{
		for(int i = 0;;i++){
			if(n==0) break;
			arr[i] = n%2;
			len++;
			n /= 2;
		}
		for(int j = len - 1; j >= 0; j--)
			printf("%d", arr[j]);
	}
}