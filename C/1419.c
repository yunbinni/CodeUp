#include <stdio.h>
#include <string.h>

int main(){
	int cnt = 0;
	char word[101];
	gets(word);
	
	for(int i = 0; i < strlen(word); i++){
		if(word[i]=='l' && word[i+1]=='o' && word[i+2]=='v' && word[i+3]=='e'){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}