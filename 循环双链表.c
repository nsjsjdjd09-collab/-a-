#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* prior;
}node;

typedef struct linklist
{
	struct node* head;
	int len;
}linklist;

void Initlist(linklist* L)
{
	L->head = malloc(sizeof(node));//指向头结点
	L->head->next = L->head;
	L->len = 0;//长度为0
}

void Insertlist(linklist* L, int i, int e)
{
	node* s = malloc(sizeof(node));
	s->data = e;
	if (i<0 || i>L->len + 1)
	{
		printf("false\n");
		return;
	}
	node* p = L->head;
	for (int j = 0;j < i - 1;j++)
	{
		p = p->next;
	}
	if (p->next = L->head)
	{
		s->next = p->next;
		s->prior = p;
		p->next = s;
	}
	if (p->next != L->head)
	{
		s->next = p->next;
		s->prior = p;
		s->next->prior = s;
		p->next = s;
	}
	L->len++;
}

void Deletelist(linklist* L, int i)
{
	if (i<0 || i>L->len)
	{
		printf("false\n");
		return;
	}
	node* p = L->head;
	for (int j = 0;j < i - 1;j++)
	{
		p = p->next;
	}
	node* s = p->next;
	if (s->next == L->head)
	{
		p->next = s->next;
	}
	if (s->next != L->head)
	{
		p->next = s->next;
		s->next->prior = s->prior;
	}
	free(s);
	L->len--;
}

void Getelem(linklist* L, int i)
{
	if (i<0 || i>L->len)
	{
		printf("false\n");
		return;
	}
	node* p = L->head;
	for (int j = 0;j < i - 1;j++)
	{
		p = p->next;
	}
	printf("%d\n", p->next->data);
}//按位查找

void Loctaeelem(linklist* L, int e)
{
	int count = 0;
	node* p = L->head;
	for (int i = 0;i < L->len;i++)
	{
		p = p->next;
		count++;
		if (p->data == e)
		{
			printf("%d\n", count);
			return;
		}
	}
	if (p->data != e)
	{
		printf("flase\n");
		return;
	}
}//按值查找

void Getlen(linklist* L)
{
	printf("%d\n", L->len);
}//求链长

int main()
{
	linklist L;
	Initlist(&L);
	Insertlist(&L, 1, 10);
	Insertlist(&L, 2, 8);
	Insertlist(&L, 3, 7);
	Insertlist(&L, 4, 9);
	Insertlist(&L, 5, 23);
	Deletelist(&L, 2);
	//Loctaeelem(&L, 8);
	//Getelem(&L, 3);
	Getlen(&L);
	node* p = L.head;
	for (int i = 0;i < L.len;i++)
	{
		p = p->next;
		printf("%d\n", p->data);
	}
	return 0;
}