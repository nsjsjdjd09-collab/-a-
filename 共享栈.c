#include <stdio.h>
#define Maxsize 10
typedef struct stack
{
	int data[Maxsize];
	int top1;
	int top2;
}stack;

void Initstack(stack* L)
{
	L->top1 = -1;//栈底
	L->top2 = Maxsize;//栈顶
	for (int i = 0;i < Maxsize;i++)
	{
		L->data[i] = 0;
	}
}

void push1(stack* L, int i)
{
	if (L->top1 + 1 != L->top2)
	{
		L->data[++L->top1] = i;//栈底插入i元素
		return;
	}
	else
	{
		printf("false\n");
		return;
	}
}


void push2(stack* L, int i)
{
	if (L->top1 + 1 != L->top2)
	{
		L->data[--L->top2] = i;//栈顶插入i元素
		return;
	}
	else
	{
		printf("false\n");
		return;
	}
}

void full(stack* L)
{
	if (L->top1 + 1 != L->top2)
	{
		printf("no full\n");
		return;
	}
	if (L->top1 + 1 == L->top2)
	{
		printf("full\n");
		return;
	}
}

void pop1(stack* L)
{
	if (L->top1 == -1)
	{
		printf("false\n");
		return;
	}
	else
	{
		L->data[--L->top1];
		return;
	}
}

void pop2(stack* L)
{
	if (L->top2 == Maxsize)
	{
		printf("false\n");
		return;
	}
	else
	{
		L->data[++L->top2];
		return;
	}
}

void Gettop1(stack* L)
{
	if (L->top1 < 0)
	{
		printf("false\n");
		return;
	}
	printf("%d\n", L->data[L->top1]);
}

void Gettop2(stack* L)
{
	if (L->top2 == Maxsize)
	{
		printf("false\n");
		return;
	}
	printf("%d\n", L->data[L->top2]);
}

int main()
{
	stack L;
	Initstack(&L);
	push1(&L, 10);
	push1(&L, 5);
	push1(&L, 7);
	push1(&L, 45);
	pop1(&L);
	push2(&L, 95);
	push2(&L, 55);
	push2(&L, 85);
	pop2(&L);
	Gettop1(&L);
	Gettop2(&L);
	full(&L);
	for (int i = 0;i < L.top1+1;i++)
	{
		printf("%d\n", L.data[i]);
	}
	for (int i = Maxsize-1;i > L.top2-1;i--)
	{
		printf("%d\n", L.data[i]);
	}
	return 0;
}