#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	scanf("%s", s);
	
	for(int i = 0; i < strlen(s); i++){
		printf("%c", s[i]+2);
	}
	
	printf("\n");
	
	for(int i = 0; i <strlen(s); i++){
		printf("%c", (s[i]*7) % 80 + 48);
	}
	return 0;
}