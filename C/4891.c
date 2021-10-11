#include <stdio.h>
#include <stdlib.h>

// �ִ�, �ּ� ���� ����ϴ� �Լ�
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
	// �Է� �� �ʱ�ȭ 
	int N, i;
	scanf("%d", &N);
	int* scores = (int*)malloc(sizeof(int)*N);
	
	for(i = 0; i < N; i++)
		scanf("%d", scores + i);
		
	printf("%d", gapScores(scores, N));
	
	return 0;
}
