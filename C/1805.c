#include <stdio.h>
#include <stdlib.h>

typedef struct _machine
{
	int id;
	int gas;
} Machine;

void machineSort(Machine* pmachine, int len) {
	int i, j;
	Machine temp;
	
	for(i = 0; i < len - 1; i++) {
		for(j = 0; j < len - 1 - i; j++) {
			if( (pmachine+j)->id > (pmachine+j+1)->id ) {
				temp = *(pmachine+j);
				*(pmachine+j) = *(pmachine+j+1);
				*(pmachine+j + 1) = temp;
			}
		}
	}
}

int main(void)
{
	// 입력 및 초기화 
	int n, id, gas, i;
	scanf("%d", &n);
	
	Machine* machines = (Machine*)malloc(sizeof(Machine)*n);		// 구조체 배열 포인터 동적할당
	
	for(i = 0; i < n; i++)
		scanf("%d %d", &(machines+i)->id, &(machines+i)->gas);
	
	// 계산부 
	machineSort(machines, n);
	
	// 출력부
	for(i = 0; i < n; i++)
		printf("%d %d\n", (machines+i)->id, (machines+i)->gas);
	
	free(machines);
	
	return 0;
}
