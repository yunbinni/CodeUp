#include <stdio.h>
#include <string.h>

int main(){
	int cnt1 = 0, cnt2 = 0;
	char s[101];
	scanf("%s", s);
	
	for(int i = 0; i < strlen(s); i++){
		if(s[i]=='c' || s[i]=='C'){
			cnt1++;
			if(s[i+1]=='c' || s[i+1]=='C')
				cnt2++;
		}
	}
	
	printf("%d\n%d", cnt1, cnt2);
	
	return 0;
}