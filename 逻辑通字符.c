#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1 means true, 0 means false
	// && means and
	printf("%d\n", 1 && 1); // 1
	printf("%d\n", 1 && 0); // 0
	printf("%d\n", 0 && 1); // 0
	printf("%d\n", 0 && 0); // 0
	// || means or
	printf("%d\n", 1 || 1); // 1
	printf("%d\n", 1 || 0); // 1
	printf("%d\n", 0 || 0); // 0
	printf("%d\n", 0 || 1); // 1
	// ! means logical not
	printf("%d\n", !1); // 0
	printf("%d\n", !0); // 1
	// Exercise:
	// Read a two-digit integer from keyboard, require that it does not contain 7.
	// If valid output 1, otherwise output 0.
	int num1;
	printf("Please enter an integer:\n");
	scanf("%d", &num1);
	printf("%d\n", num1);
	int ge = num1 % 10;
	int shi = num1 / 10 % 10;
	printf("%d\n", ge != 7 && shi != 7);
	return 0;
}
