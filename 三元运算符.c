#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
int main()
{
	//俩个变量中取个最大值
	int	a = 10;
	int	b = 20;
	//通过三元运算符来实现
	int c = a > b ? a : b;
	//输出结果；若正确则为a=10，若错误则为b=20
	printf(" %d\n", c);
	//取三个或多个变量中的最大值
	//先取其中俩个最大值之后最大值再与第三个变量进行比较
	int d = 30;
	int e = 50;
	int f = 80;
	int temp = d > e ? d : e;
	int max = temp > f ? temp : f;
	printf(" %d\n", max);
	return 0;
}