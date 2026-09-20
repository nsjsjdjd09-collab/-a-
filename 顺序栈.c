#include <stdio.h>

#define Maxsize 10

typedef struct sqstack
{
	int data[Maxsize];
	int top;
}sqstack;

void Initstack(sqstack* L)
{
	L->top = -1;
}//初始化

void push(sqstack* L,int e)
{
	if (L->top == Maxsize)
	{
		printf("false\n");
	}
	L->data[++L->top] = e;
}//入栈

void pop(sqstack* L)
{
	if (L->top == -1)
	{
		printf("false\n");
	}
	L->data[ L->top--];
}//出栈

void Gettop(sqstack* L)
{
	if (L->top == -1)
	{
		printf("false\n");
	}
	printf("%d\n", L->data[L->top]);
}//获取栈顶元素

void stackEmpty(sqstack* L)
{
	if (L->top < 0)
	{
		printf("empty\n");
		return;
	}
	if (L->top > -1||L->top<Maxsize)
	{
		printf("unempty\n");
		return;
	}
}//判断是否为空

int main()
{
	sqstack L;
	Initstack(&L);
	push(&L, 10);
	push(&L, 20);
	push(&L, 50);
	push(&L, 40);
	pop(&L);
	push(&L, 30);
	push(&L, 70);
	push(&L, 90);
	pop(&L);
	Gettop(&L);
	stackEmpty(&L);
	for (int i = 0;i < L.top + 1;i++)
	{
		printf("%d\n", L.data[i]);
	}
	return 0;
}