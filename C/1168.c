#include <stdio.h>

int main(){
	int ymd, _;
	scanf("%d %d", &ymd, &_);
	if(_==1 || _==2){
		printf("%d", 2012 - 1900 - ymd/10000 + 1);
	} else{
		printf("%d", 2012 - 2000 - ymd/10000 + 1);
	}
	return 0;
}