#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char s[11];
	cin >> s;
	
	for(int i = 0; i < strlen(s); i++){
		if(s[i]=='t') cout << i + 1 << " ";
	}
}