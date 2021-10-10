/* 연결리스트 기반 문제풀이 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* 문자열 뒤집기 관련 함수 */
void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverseString(char* pStr) {
	int i;
	int len = strlen(pStr);
	int loop = len / 2;
	
	for(i = 0; i < loop; i++)
		swap(pStr + i, pStr + len - 1 - i);
}

/* 스택 관련 함수 */
typedef struct _node {
	int data;
	struct _node* next;		// 바로 아래노드 
} Node;

typedef struct _stack {
	Node* head;
} Stack;

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
	Node* rNode = pstack->head;
	int rdata = rNode->data;
	
	pstack->head = pstack->head->next;
	
	free(rNode);
	return rdata;
}

int Peek(Stack* pstack) {
	return pstack->head->data;
}

/* 메인 함수 */
int main(void)
{
	// 입력 및 초기화 
	char a[101];
	char b[101];
	int i;
	int oneNum, tenNum = 0, sum = 0;
	
	Stack stack;
	Init(&stack);
	
	gets(a);
	gets(b);
	
	// 계산부
	reverseString(a);	strcat(a, "0");
	reverseString(b);	strcat(b, "0");

	if( strlen(a) >= strlen(b) )
		for(i = 0; i < strlen(b) - strlen(a); i++)
			strcat(b, "0");
	else
		for(i = 0; i < strlen(a) - strlen(b); i++)
			strcat(a, "0");
	
	int loop = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
	
	for(i = 0; i < loop; i++)
	{
		sum = *(a + i) - 48 + *(b + i) - 48 + tenNum;		// ASCII CODE
		oneNum = sum % 10;
		tenNum = sum / 10;
		
		Push(&stack, oneNum);
	}
	
	// 출력부
	i = 0;
	while(!IsEmpty(&stack))
	{
		if(i == 0 && Peek(&stack) == 0)
			Pop(&stack);
		printf("%d", Pop(&stack));
		i++;
	}
	
	return 0;
}
