#include <stdio.h>
#include <string.h>

int main(){
	char S1[21];
	char S2[21];
	char S3[21];
	
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	
	if(S1[strlen(S1)-1]==S2[0] && S2[strlen(S2)-1]==S3[0] && S3[strlen(S3)-1]==S1[0]){
		printf("good");
	} else{
		printf("bad");
	}
	
	return 0;
}