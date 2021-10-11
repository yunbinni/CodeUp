#include <iostream>
#include <stdlib.h>

using namespace std;

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
	cin >> N;
	int* scores = (int*)malloc(sizeof(int)*N);
	
	for(i = 0; i < N; i++)
		cin >> *(scores + i);
	
	// 출력부 
	cout << gapScores(scores, N);
}
