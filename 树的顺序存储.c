#include <stdio.h>

#define Maxsize 100

typedef struct tree
{
	int parent;
	int data;
}tree;//定义结点结构

typedef struct treenode
{
	tree arr[Maxsize];
	int len;//节点个数
}treenode;//按数组排序

void Initreenode(treenode* L)
{
	for (int i = 0;i < Maxsize;i++)
	{
		L->arr[i].data = 0;
		L->arr[i].parent = -1;
	}
	L->len = 0;
}//初始化

void Insernode(treenode* L,int j,int e)
{
	if (L->len < Maxsize)
	{
		L->arr[L->len].data = e;
		if (L->len == 0 && j == -1)
		{
			L->arr[L->len].parent = j;
		}
		if (L->len == 0 && j != -1)
		{
			printf("false\n");
			return;
		}
		if (L->len != 0)
		{
			if (j > -1 && j < L->len)
			{
				L->arr[L->len].parent = j;
			}
			else
			{
				printf("false\n");
				return;
			}
		}
		L->len++;
	}
	else
	{
		printf("false\n");
		return;
	}
}//在第i个位置插入双亲下标为j的数值e

void Delenode(treenode* L,int j)
{
	if (j > -2 && j < L->len)
	{
		for (int i = j;i < L->len;i++)
		{
			L->arr[i].data = 0;
			L->arr[i].parent = -1;
		}
	}
	else
	{
		printf("false\n");
		return;
	}
}

int main()
{
	treenode L;
	Initreenode(&L);
	Insernode(&L, -1, 25);
	Insernode(&L, 0, 25);
	Insernode(&L, 0, 25);
	Insernode(&L, 1, 25);
	Insernode(&L, 2, 25);
	Delenode(&L, -1);
	for (int i = 0;i < L.len;i++)
	{
		printf("%d\n", L.arr[i].data);
		printf("%d\n", L.arr[i].parent);
	}
	return 0;
}