#include <stdio.h>
#include <string.h>

int main(){
	char n[10000];
	scanf("%s", n);
	int sum = 0;
	
	for(int i = 0; i < strlen(n); i++){
		sum += n[i];
	}
	
	if (sum % 3 == 0)
        printf("1");
    else
        printf("0");
        
	return 0;
}