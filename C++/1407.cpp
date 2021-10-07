#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char instr[100];
	gets(instr);
	
	int j = 0;
	for(int i = 0; i < strlen(instr); i++){
		if(instr[i]==' ') continue;
		else cout << instr[i];
	}
}