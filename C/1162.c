#include <stdio.h>

int main(){
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int concls = y - m + d;
    if(concls%10==0) printf("���");
    else printf("�׷�����");
	return 0;
}