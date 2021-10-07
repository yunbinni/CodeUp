#include <stdio.h>
#include <string.h>

int main(){
	char arr[100000];
	scanf("%s", arr);
	
	int c1 = 0, c2 = 0;
	for(int i = 0; i < strlen(arr); i++){
		switch(arr[i]){
			case '(':
				c1++;
				break;
			case ')':
				c2++;
				break;
		}
	}
	
	printf("%d %d", c1, c2);
	return 0;
}