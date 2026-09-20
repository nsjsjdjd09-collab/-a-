#include <stdio.h>

#define Maxsize 10//定义可预存的最大内存空间

typedef struct//定义改顺序表
{
	int data[Maxsize];
	int len;
}seqlist;

void Initlist(seqlist* L)//初始化
{
	L->len = 0;
}

void listInsert(seqlist*L, int i, int e)//在第i位插入数值e
{
	if (i < 1 || i > Maxsize - 1)
	{
		printf("false\n");
	}
	for (int j = L->len; j >= i-1; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->len++;
}

void listDelete(seqlist* L, int i)//删除第i位的元素
{
	if (i < 1 || i > Maxsize)
	{
		printf("false\n");
		return;
	}
	for (int j = i; j <= L->len; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->len--;
}

void Getelem(seqlist* L, int i)//按位查找
{
	if (i > L->len || i < 1)
	{
		printf("false\n");
		return;
	}
	else
	{
		printf("%d\n", L->data[i - 1]);
		return;
	}
}

void Locatelem(seqlist* L, int e)//按值查找
{
	for (int i = 0;i < L->len;i++)
	{
		if (L->data[i] == e)
		{
			printf("%d\n", i + 1);
			return;
		}
	}
		printf("false\n");
}
int main()
{
	seqlist L;
	Initlist(&L);
	listInsert(&L, 1, 10);
	listInsert(&L, 2, 20);
	listInsert(&L, 3, 30);
	listInsert(&L, 4, 50);
	Getelem(&L, 3);
	Locatelem(&L, 330);
	for (int i = 0;i < L.len;i++)
	{
		printf("%d\n", L.data[i]);
	}
	return 0;
}