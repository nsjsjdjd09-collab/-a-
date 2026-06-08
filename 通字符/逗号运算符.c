#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
int main()
{
	//任意输入一个整数
	//变成该数字的绝对值
	//除以三的余数
	//乘以10
	int number = -17;
	printf("%d\n", (number = number >= 0 ? number:-number,number=number%3,number=number*10));
	return 0;
}