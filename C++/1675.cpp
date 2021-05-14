#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char *s = (char *)malloc(sizeof(char)*200);
	gets(s);
	
	for(int i = 0; s[i] != '\0'; i++){
		if(97 <= s[i] && s[i] <= 99) printf("%c", s[i] + 23);
		else if(s[i] == 32) printf("%c", s[i]);
		else printf("%c", s[i] - 3);
	}
	
	free(s);
	return 0;
}