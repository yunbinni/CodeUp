/* 연결리스트 기반 풀이 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 스택에 들어갈 단위인 노드 정의 */
typedef struct _node
{
	int data;
	struct _node* next;
} Node;

/* 스택 정의(연결리스트 기반) */
typedef struct _stack
{
	Node* head;
} Stack;

/* 스택 관련 함수 */ 
void Init(Stack* pstack) {
	pstack->head = NULL;
}

bool IsEmpty(Stack* pstack) {
	if(pstack->head == NULL)
		return true;
	else
		return false;
}

void Push(Stack* pstack, int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	
	newNode->next = pstack->head;
	pstack->head = newNode;
}

int Pop(Stack* pstack) {
	if(IsEmpty(pstack))
		exit(-1);
	
	int rdata = pstack->head->data;
	Node* rNode = pstack->head;
	
	pstack->head = pstack->head->next;
	
	free(rNode);
	
	return rdata;
}

/*  메인 함수 */
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
}
