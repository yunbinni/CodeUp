/* �迭����Ʈ ��� Ǯ�� */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ���� ���� �� ���� �Լ� */ 
typedef char Data;

typedef struct _stack {
	Data stackArr[201 + 200/3];
	int topIndex;
} Stack;

void Init(Stack* pstack) {
	pstack->topIndex = -1;
}

bool IsEmpty(Stack* pstack) {
	if(pstack->topIndex == -1)
		return true;
	else
		return false;
}

void Push(Stack* pstack, Data data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data Pop(Stack* pstack) {
	int rIdx = pstack->topIndex;
	pstack->topIndex -= 1;
	return pstack->stackArr[rIdx];
}

Data Peek(Stack* pstack) {
	return pstack->stackArr[pstack->topIndex];
}

/* ���� �Լ� */
int main(void)
{
	// �Է� �� �ʱ�ȭ 
	int n, i, c;
	char number[201];
	scanf("%d", &n);
	scanf("%s", number);
	
	Stack stack;
	Init(&stack);
	
	// ����
	for(i = 0, c = n - 1; i < n; i++, c--)
	{
		if(i != 0 && i % 3 == 0)
			Push(&stack, ',');
		Push(&stack, *(number + c));
	}
	
	 // ��º�
	 while(!IsEmpty(&stack))
	 	printf("%c", Pop(&stack));
}
