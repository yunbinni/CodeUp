#include <stdio.h>
#include <stdlib.h>

// 최대, 최소 차이 출력하는 함수
int gapScores(int* pscores, int len) {
	int i;
	int min = *(pscores);
	int max = *(pscores);
	
	for(i = 1; i < len; i++)
	{
		if( *(pscores+i) < min )
			min = *(pscores+i);
		if( *(pscores+i) > max )
			max = *(pscores+i);
	}
	
	return max - min;
}

int main(void)
{
	// 입력 및 초기화 
	int N, i;
	scanf("%d", &N);
	int* scores = (int*)malloc(sizeof(int)*N);
	
	for(i = 0; i < N; i++)
		scanf("%d", scores + i);
		
	printf("%d", gapScores(scores, N));
	
	return 0;
}
