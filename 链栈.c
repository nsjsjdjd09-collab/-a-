#include <stdio.h>
#include <stdlib.h>

typedef struct sqstack
{
	int data;
	struct sqstack* next;
}sqstack;//数据结点

typedef struct stack
{
	int len;
	struct sqstack* top;
}stack;//头结点

void Initstack(stack* L)
{
	L->len = 0;
}//初始化

void push(stack* L, int e)
{
	sqstack* p = malloc(sizeof(sqstack));
	p->data = e;
	if (L->top == NULL)
	{
		L->top = p;
		p->next = NULL;
	}
	if (L->top != NULL)
	{
		p->next = L->top;
		L->top = p;
	}
	L->len++;
}//入栈

void pop(stack* L)
{
	if (L->len == 0)
	{
		printf("false\n");
	}
	sqstack* p = L->top;
	L->top = p->next;
	free(p);
	L->len--;
}//出栈

void Gettop(stack* L)
{
	if (L->len == 0)
	{
		printf("false\n");
	}
	printf("%d\n", L->top->data);
}//获取栈顶元素

void stackEmpty(stack* L)
{
	if (L->len == 0)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}//判断是否为空

int main()
{
	stack L;
	Initstack(&L);
	push(&L, 10);
	push(&L, 20);
	push(&L, 50);
	push(&L, 40);
	//pop(&L);
	pop(&L);
	Gettop(&L);
	stackEmpty(&L);
	for (int i = 0;i < L.len;i++)
	{
		printf("%d\n", L.top->data);
		L.top = L.top->next;
	}
	return 0;
}