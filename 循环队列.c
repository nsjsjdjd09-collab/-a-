#include <stdio.h>
#define Maxsize 10
typedef struct queue
{
	int data[Maxsize];
	int front;//前指针
	int rear;//后指针
}queue;

void Initqueue(queue* L)
{
	L->front = 0;
	L->rear = 0;
}

void Enqueue(queue* L, int i)
{
	if ((L->rear+1)%Maxsize != L->front)
	{
		L->data[L->rear] = i;
		L->rear = (L->rear+1) % Maxsize;
		return;
	}
	else
	{
		printf("false\n");
		return;
	}
}

void Dequeue(queue* L)
{
	if (L->rear==L->front)
	{
		printf("false\n");
		return;
	}
	else
	{
		L->front = (L->front + 1) % Maxsize;
		return;
	}
}

void Isfull(queue* L)
{
	if ((L->rear+1)%Maxsize == L->front)
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
	Enqueue(&L, 65);
	Enqueue(&L, 34);
	Dequeue(&L);
	Dequeue(&L);
	Dequeue(&L);
	Dequeue(&L);
	Enqueue(&L, 34);
	Enqueue(&L, 34);
	int p = L.front;
		for (int i =0;i < (Maxsize+L.rear-L.front)%Maxsize;i++)
		{
			printf("%d\n", L.data[p]);
			p=(p+1)%Maxsize;
		}
	return 0;
}