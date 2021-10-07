#include <stdio.h>
#include <string.h>

int main(){
	char s1[101], s2[101];
	scanf("%s %s", s1, s2);
	
	if(strlen(s1) < strlen(s2))
		printf("%s %s", s1, s2);
	else if(strlen(s1) > strlen(s2))
		printf("%s %s", s2, s1);
	else{
		for(int i = 0; i < strlen(s1); i++){
			if(s1[i] < s2[i]){
				printf("%s %s", s1, s2);
				break;
			}
			else if(s1[i] > s2[i]){
				printf("%s %s", s2, s1);
				break;
			}
			else
				continue;
		}
	}
	
	return 0;
}