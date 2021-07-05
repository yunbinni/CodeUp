#include <stdio.h>

int main() {
	// 초기화(d는 입력받을 data, r은 출력할 result) 
	int d[172][172], r[172][172], i, j;
	int a, b, x, y, z, k;
	
	// 입력
	scanf("%d %d", &a, &b);
	scanf("%d %d %d", &x, &y, &z);
	for(i = 1; i <= a; i++)
		for(j = 1; j <= b; j++) 
		{
			scanf("%d", &d[i][j]);
			r[i][j] = 0;
		}
	scanf("%d", &k);
	
	// 연산
	while(k--) 
	{
		for(i = 1; i <= a; i++)
			for(j = 1; j <= b; j++)
			{
				// 8방향 더하기
				r[i][j] = d[i-1][j-1] + d[i-1][j] + d[i-1][j+1] + d[i][j-1] + d[i][j+1] + d[i+1][j-1] + d[i+1][j] + d[i+1][j+1];
				if(d[i][j] == 0) r[i][j] = r[i][j] == x ? 1 : 0;
				else r[i][j] = (y <= r[i][j] && r[i][j] < z);
			}
			
		// 세대교체
		for(i = 1; i <= a; i++) 
			for(j = 1; j <= b; j++)
				d[i][j] = r[i][j];
	}
	
	// 출력
	for(i = 1; i <= a; i++, puts(""))
		for(j = 1; j <= b; j++)
			printf("%d ", r[i][j]);
	
	return 0;
}
