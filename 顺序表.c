#include <stdio.h>

#define Maxsize 10//定义可预存的最大内存空间

typedef struct//定义改顺序表
{
	int data[Maxsize];
	int len;
}seqlist;

void Initlist(seqlist* p)//初始化
{
	(*p).len = 0;
	for (int i = 0; i < Maxsize; i++)
	{
		(*p).data[i] = 0;
	}
}

void listInsert(seqlist* p,int i,int e)//在第i位插入数值e
{
	if (i < 1 || i > Maxsize-1)
	{
		printf("false\n");
		return;
	}
	if ((*p).len >= Maxsize)
	{
		printf("false\n");
		return;
	}
	for (int j = (*p).len; j >= i; j--)
	{
		(*p).data[j] = (*p).data[j - 1];
	}
	(*p).data[i - 1] = e;
	(*p).len++;
}

void listDelete(seqlist* p,int i)//删除第i位的元素
{
	if (i < 1 || i > Maxsize)
	{
		printf("false\n");
		return;
	}
	for (int j = i; j <= (*p).len; j++)
	{
		(*p).data[j - 1] = (*p).data[j];
	}
	(*p).len--;
}

void Getelem(seqlist* p,int i)//按位查找
{
	if (i < 1 || i > (*p).len-1)
	{
		printf("false\n");
	}
	if (i > (*p).len || i < 1)
	{
		printf("false\n");
	}
	printf("%d\n", (*p).data[i-1]);
}

void Locatelem(seqlist* p,int e)//按值查找
{
	for (int i = 0;i < (*p).len;i++)
	{
		if ((*p).data[i] = e)
		{
			printf("%d\n", i + 1); // 以1为基准的位序
		}
	}
}
int main()
{
	seqlist L = { {1,2,3,4,5},5 };//给顺序表赋值
	// 不需要再初始化，或如果需要可以调用Initlist(&L);
	listInsert(&L, 3, 10);
	Getelem(&L, 5);
	for (int i = 0;i < L.len;i++)
	{
		printf("%d\n", L.data[i]);
	}
	return 0;
}