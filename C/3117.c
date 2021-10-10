/* �迭����Ʈ ��� Ǯ�� */
#include <stdio.h>
#include <stdbool.h>

/* ���� ���� */ 
typedef struct _stack
{
	int stackArr[100001];
	int topIndex;
} Stack;

/* ���� ���� �Լ� */ 
void Init(Stack* pstack) {
	pstack->topIndex = -1;
}

bool IsEmpty(Stack* pstack) {
	if(pstack->topIndex == -1)
		return true;
	else
		return false;
}

void Push(Stack* pstack, int data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

int Pop(Stack* pstack) {
	int rIdx = pstack->topIndex;
	pstack->topIndex -= 1;
	return pstack->stackArr[rIdx];
}

int Peek(Stack* pstack) {
	return pstack->stackArr[pstack->topIndex];
}

/* ���� �Լ� */
int main(void)
{
	// �Է� �� �ʱ�ȭ
	int K, input, sum = 0, i;
	Stack stack;
	Init(&stack);
	
	scanf("%d", &K);
	
	// ����
	for(i = 0; i < K; i++)
	{
		scanf("%d", &input);
		
		// �Է¹��� ���� 0�� �ƴϸ� Push 
		if(input != 0)
			Push(&stack, input);
		
		// �Է¹��� ���� 0�� Pop
		else
			Pop(&stack);
	}
	
	// ���ձ��ϱ� �� ��º�
	while(!IsEmpty(&stack))
		sum += Pop(&stack);
	printf("%d", sum);
	
	return 0;
}