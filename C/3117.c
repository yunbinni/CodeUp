/* ���Ḯ��Ʈ ��� Ǯ�� */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ���ÿ� �� ������ ��� ���� */
typedef struct _node
{
	int data;
	struct _node* next;
} Node;

/* ���� ����(���Ḯ��Ʈ ���) */
typedef struct _stack
{
	Node* head;
} Stack;

/* ���� ���� �Լ� */ 
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

/*  ���� �Լ� */
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
}
