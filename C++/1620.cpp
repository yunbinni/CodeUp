#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

char* f(char* pnum);

/* 메인 함수 */
int main(void)
{
	// 입력 및 초기화
	char* num = (char*)malloc(10000001);
	fgets(num, 10000001, stdin);
	
	// 계산부
	char* res = f(num);
	
	while( strlen(res) > 1 )
		res = f(res);
	
	// 출력부
	cout << res;
}

/* 각 자리의 합을 더하는 함수 */
char* f(char* pnum)
{
	int len = strlen(pnum), sum = 0;
	char* res = (char*)malloc(len);
	
	for(int i = 0; i < len; i++)
		sum += *(pnum+i) - 48;
	
	sprintf(res, "%d", sum);
	
	return res;
}