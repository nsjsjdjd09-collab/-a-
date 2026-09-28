#include <stdio.h>
#include<stdlib.h>
typedef struct linkqueue
{
	struct queue* front;
	struct queue* rear;
	int len;
}linkqueue;

typedef struct queue
{
	struct queue* next;
	int data;
}queue;

void Initqueue(linkqueue* L)
{
	L->front = malloc(sizeof(queue));
	L->rear = L->front;
	L->len = 0;
}

void Enqueue(linkqueue* L,int i)
{
	struct queue* s=malloc(sizeof(queue));
	s->data = i;
	s->next = NULL;
	L->rear->next = s;
	L->rear = s;
	L->len++;
}

void Dequeue(linkqueue* L)
{
	if (L->front != L->rear)
	{
		struct queue* p = L->front->next;
		L->front->next = p->next;
		free(p);
		L->len--;
		return;
	}
	else
	{
		printf("false\n");
		return;
	}
}

void Getlen(linkqueue* L)
{
	printf("%d\n", L->len);
}

int main()
{
	linkqueue L;
	Initqueue(&L);
	Enqueue(&L, 10);
	Enqueue(&L, 32);
	Enqueue(&L, 34);
	Enqueue(&L, 43);
	Enqueue(&L, 56);
	Dequeue(&L);
	Enqueue(&L, 96);
	Enqueue(&L, 86);
	Getlen(&L);
	struct queue* p = L.front;
	for (int i = 0;i < L.len;i++)
	{
		p = p->next;
		printf("%d\n", p->data);
	}
	return 0;
}