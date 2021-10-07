#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int cnt1 = 0, cnt2 = 0;
	char s[101];
	cin >> s;
	
	for(int i = 0; i < strlen(s); i++){
		if(s[i]=='c' || s[i]=='C'){
			cnt1++;
			if(s[i+1]=='c' || s[i+1]=='C')
				cnt2++;
		}
	}
	
	cout << cnt1 << endl << cnt2;
}