#include <stdio.h>
#include <string.h>

char* f(char* pnum);

/* 메인 함수 */
int main(void)
{
	// 입력 및 초기화
	char* num = (char*)malloc(10000001);
	gets(num);
	
	// 계산부
	char* res = f(num);
	
	while( strlen(res) > 1 )
		res = f(res);
	
	// 출력부
	printf("%s\n", res);
		
	return 0;
}

/* 각 자리의 합을 더하는 함수 */
char* f(char* pnum)
{
	int len = strlen(pnum), sum = 0;
	char* res = (char*)malloc(len);
	
	for(int i = 0; i < len; i++)
		sum += *(pnum+i) - 48;
	
	sprintf(res, "%d", sum);
//	memset(res, sum, len);
	
	return res;
}