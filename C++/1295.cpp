#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char s[1000];
	cin >> s;
	
	for(int i = 0; i < strlen(s); i++){
		if(65 <= s[i] && s[i] <= 90) printf("%c", s[i] + 32); // 대문자 -> 소문자
		else if(97 <= s[i] && s[i] <= 122) printf("%c", s[i] - 32); // 소문자 -> 대문자
		else printf("%c", s[i]);
	}
}