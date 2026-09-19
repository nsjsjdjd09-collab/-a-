#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}node;//定义节点

typedef struct linklist
{
	int len;
	struct node* head;
}linklist;//定义指向头结点的头指针，同时记录单链表长度

void Initlist(linklist *L)
{
	L->head = malloc(sizeof(node));
	L->head->next = NULL;
	L->len = 0;
}//初始化

void Insertlist(linklist *L,int i,int e)
{
	node*p = L->head;
	node* s;
	s=malloc(sizeof(node));
	s->data = e;
	if (i<1 || i>L->len+1)
	{
		printf("false");
		return ;
	}
	for (int j = 0;j < i - 1;j++)
	{
		p = p->next;
	}
	s->next = p->next;
	p->next = s;
	L->len++;
}//在第i位插入数值为e的数

void Deletelist(linklist*L,int i)
{
	node* p = L->head;
	if (i<1 || i>L->len)
	{
		printf("false");
		return;
	}
	for (int j = 0;j < i - 1;j++)
	{
		p = p->next;
	}
	node* s = p->next;
	p->next = s->next;
	free(s);
	L->len--;
}//删除

void Getelem(linklist* L, int i)
{
	if (i<1 || i>L->len)
	{
		printf("false");
		return;
	}
	node* p = L->head;
	for (int j = 0;j < i;j++)
	{
		p = p->next;
	}
	printf("%d\n", p->data);
}//按位查找

void LocateElem(linklist* L,int e)
{
	int count = 1;
	node* p = L->head;
	for (int j = 0;j < L->len;j++)
	{
		p = p->next;
		if (p->data == e)
		{
			printf("%d\n",count);
			return;
		}
		count++;
	}
	if(p->data != e)
	{
		printf("false");
	}
}//按值查找

void Getlen(linklist*L)
{
	printf("%d\n", L->len);
}//求链表长度

int main()
{
	linklist L;//声明单链表
	Initlist(&L);//初始化L
	Insertlist(&L,1,10);
	Insertlist(&L, 2, 3);
	Insertlist(&L, 3, 43);
	Insertlist(&L, 4, 23);
	//Deletelist(&L, 3);
	node* p = L.head->next;
	for (int i = 0;i < L.len;i++)
	{
		printf("%d\n",p->data);
		p = p->next;
	}//遍历
	Getelem(&L, 1);
	LocateElem(&L, 43);
	Getlen(&L);
	return 0;
}