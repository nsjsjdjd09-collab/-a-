#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(65001);
	//int a = 20; 
	//int	b = 30;
	//printf("%d\n", a % b);
	//("%.2f\n", 1.53/2.43);
	//("%d\n", 623%478);
	//("%d\n", 10/3);
	//("%f\n", 10/ 2.4);
	//整数计算结果一定是一个整数
	//小数计算结果一定是一个小数
	//整数和小数混合计算结果一定是一个小数
	//小数直接参与计算结果不一定精确
	//除法不可以/0
	//("%.20f\n", 10.0 / 3.0);
	//取余的数据必须为整数
	//("%d\n", 10 % 3);
	//("%d\n", 10 % -3);
	//("%d\n", -10 % 3);
	//取余的结果符号与第一个数字正负相同
	//printf("请输入一个三位数：\n");
	//int c;
	//scanf("%d", &c);
	//printf("个位数：%d\n", c%10);
	//printf("十位数：%d\n", c/10%10);
	//printf("百位数：%d\n", c/100);
	// d = 10;
	// e = 3.0;
	// f = a + b;
	//("%f\n", f);
	// g = 32767;
	// h = 1;
	// i = g + h;
	//("%d\n", i);
	// j = 100.6545328623;
	// k = (short)j;
	//("%d\n", k);
	// l = 367.53;
	// m = 11.35;
	// n = (short)(l + m);
	//("%d\n", n);
	// o = 'a';
	// p = o;
	// q = 10;
	//++;
	//--;
	//("%d\n", q);
	//int a = 10;
	//int c = a++;
	//printf("%d\n", c);
	//printf("%d\n", a);
	//前缀优先于后缀
	//++i>i++
	//int d = 10;
	//int	k= ++d + ++d;
	//int i;
	//printf("%d\n",k);
	/*int a = 10;
	int b = 20;
	a += b;
	printf("%d\n", a);
	a *= b;
	printf("%d\n", a);
	printf(" % d\n",a <= b);*/
	int a = 12;
	int b = a==100;
	printf("%d\n", b);

	return 0;
	
}