#include <stdio.h>

int main(){
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int concls = y - m + d;
    if(concls%10==0) printf("대박");
    else printf("그럭저럭");
	return 0;
}