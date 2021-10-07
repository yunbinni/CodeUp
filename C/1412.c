#include <stdio.h>
#include <string.h>

int main(){
	char inStr[90];
	gets(inStr);
	int alpha[26];
	for(int i = 0; i < 26; i++){
		alpha[i] = 0;
	}
	
	for(int j = 0; j < strlen(inStr); j++){
		for(int i = 97; i <= 122; i++){
			if(inStr[j]==i){
				alpha[i - 97]++;
			}
		}
	}
	
	for(int i = 97; i <= 122; i++){
		printf("%c:%d\n", i, alpha[i - 97]);
	}
	return 0;
}