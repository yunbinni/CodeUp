#include <iostream>
#include <malloc.h>

using namespace std;

double ABS(double* pNum)
{
	if(*pNum >= 0)
		return *pNum;
	else
		return -*pNum;
}

int main(void)
{
	// �Է� �� �ʱ�ȭ 
	double* num = (double*)malloc(sizeof(double));
	scanf("%lf", num);
	
	// ��º� 
	printf("%.10g", ABS(num));
}