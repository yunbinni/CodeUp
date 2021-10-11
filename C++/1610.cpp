#include <iostream>
#include <stdlib.h>

using namespace std;

char* mysubstr(char *str, int start, int count);

int main(void)
{
	// 입력 및 초기화 
	char* str = (char*)malloc(101);
	int start, count;
	
	fgets(str, 101, stdin);
	cin >> start >> count;
	
	// 계산부 
	char* res = mysubstr(str, start, count);
	
	// 출력부
	cout << res;
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
