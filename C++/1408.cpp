#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char s[20];
	cin >> s;
	
	for(int i = 0; i < strlen(s); i++){
		printf("%c", s[i]+2);
	}
	
	cout << endl;
	
	for(int i = 0; i <strlen(s); i++){
		printf("%c", (s[i]*7) % 80 + 48);
	}
}