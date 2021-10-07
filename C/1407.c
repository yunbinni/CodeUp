#include <stdio.h>
#include <string.h>

int main(){
	char instr[100];
	gets(instr);
	
	int j = 0;
	for(int i = 0; i < strlen(instr); i++){
		if(instr[i]==' ') continue;
		else printf("%c", instr[i]);
	}
	return 0;
}