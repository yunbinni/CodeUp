#include <stdio.h>
#include <stdlib.h>

char* mysubstr(char *str, int start, int count);

int main(void)
{
	// 입력 및 초기화 
	char* str = (char*)malloc(101);
	int start, count;
	
	gets(str);
	scanf("%d %d", &start, &count);
	
	// 계산부 
	char* res = mysubstr(str, start, count);
	
	// 출력부
	printf("%s", res);
	 
	return 0;
}

char* mysubstr(char *str, int start, int count)
{
	char* res = (char*)malloc(count);
	
	for(int i = 0; i < count; i++)
	{
		*(res + i) = *(str + start + i);
	}
	
	return res;
}
