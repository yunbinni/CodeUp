#include <stdio.h>
#include <malloc.h>

double ABS(double* pNum)
{
	if(*pNum >= 0)
		return *pNum;
	else
		return -*pNum;
}

int main(void)
{
	// 입력 및 초기화 
	double* num = (double*)malloc(sizeof(double));
	scanf("%lf", num);
	
	// 출력부 
	printf("%.10g", ABS(num));
	
	return 0;
}
