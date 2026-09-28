#include <stdio.h>
#define Maxsize 10
typedef struct queue
{
	int data[Maxsize];
	int front;//前指针
	int rear;//后指针
	int len;//长度
}queue;

void Initqueue(queue* L)
{
	L->front = 0;
	L->rear = -1;
	L->len = 0;
}

void Enqueue(queue* L, int i)
{
	if (L->len == Maxsize)
	{
		printf("false\n");
		return;
	}
	else
	{
		L->data[++L->rear] = i;
		L->len++;
		return;
	}
}

void Dequeue(queue* L)
{
	if (L->len == 0)
	{
		printf("false\n");
		return;
	}
	else
	{
		L->front++;
		L->len--;
		return;
	}
}

void Isfull(queue* L)
{
	if (L->len == Maxsize)
	{
		printf("true\n");
		return;
	}
	else
	{
		printf("false\n");
		return;
	}
}

void Getlen(queue* L)
{
	if (L->len > Maxsize)
	{
		printf("false\n");
		return;
	}
	else
	{
		printf("%d\n", L->len);
		return;
	}
}

int main()
{
	queue L;
	Initqueue(&L);
	Enqueue(&L, 13);
	Enqueue(&L, 32);
	Enqueue(&L, 43);
	Enqueue(&L, 23);
	Enqueue(&L, 44);
	Enqueue(&L, 76);
	Enqueue(&L, 12);
	Dequeue(&L);
	Dequeue(&L);
	Enqueue(&L, 12);
	Enqueue(&L, 12);
	Enqueue(&L, 12);
	Isfull(&L);
	Getlen(&L);
	for (int i = L.front;i < L.rear + 1;i++)
	{
		printf("%d\n", L.data[i]);
	}
	return 0;
}