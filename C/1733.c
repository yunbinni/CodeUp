#include <stdio.h>

int main(){
	char word[100];
	scanf("%s", word);
	
	if(word[0]=='I' && word[1]=='O' && word[2]=='I' && word[3]=='\0')
		printf("IOI is the International Olympiad in Informatics.");
	else
		printf("I don't care.");
	
	return 0;
}