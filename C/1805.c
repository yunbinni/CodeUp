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
	// �Է� �� �ʱ�ȭ 
	int n, id, gas, i;
	scanf("%d", &n);
	
	Machine* machines = (Machine*)malloc(sizeof(Machine)*n);		// ����ü �迭 ������ �����Ҵ�
	
	for(i = 0; i < n; i++)
		scanf("%d %d", &(machines+i)->id, &(machines+i)->gas);
	
	// ���� 
	machineSort(machines, n);
	
	// ��º�
	for(i = 0; i < n; i++)
		printf("%d %d\n", (machines+i)->id, (machines+i)->gas);
	
	free(machines);
	
	return 0;
}
