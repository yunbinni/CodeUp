#include <iostream>
#include <stdlib.h>

using namespace std;

char* mysubstr(char *str, int start, int count);

int main(void)
{
	// �Է� �� �ʱ�ȭ 
	char* str = (char*)malloc(101);
	int start, count;
	
	fgets(str, 101, stdin);
	cin >> start >> count;
	
	// ���� 
	char* res = mysubstr(str, start, count);
	
	// ��º�
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
