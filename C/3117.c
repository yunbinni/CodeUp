/* 배열리스트 기반 풀이 */
#include <stdio.h>
#include <stdbool.h>

/* 스택 정의 */ 
typedef struct _stack
{
	int stackArr[100001];
	int topIndex;
} Stack;

/* 스택 관련 함수 */ 
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

/* 메인 함수 */
int main(void)
{
	// 입력 및 초기화
	int K, input, sum = 0, i;
	Stack stack;
	Init(&stack);
	
	scanf("%d", &K);
	
	// 계산부
	for(i = 0; i < K; i++)
	{
		scanf("%d", &input);
		
		// 입력받은 값이 0이 아니면 Push 
		if(input != 0)
			Push(&stack, input);
		
		// 입력받은 값이 0면 Pop
		else
			Pop(&stack);
	}
	
	// 총합구하기 및 출력부
	while(!IsEmpty(&stack))
		sum += Pop(&stack);
	printf("%d", sum);
	
	return 0;
}
