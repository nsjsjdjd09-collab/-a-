#include <stdio.h>
#include<stdlib.h>
typedef struct string
{
	int len;
	char arr[100];
}string;

void index(string* s, string* t)
{
	int i = 0;
	int j = -1;
	int *next=malloc((t->len+1)*sizeof(int));
	next[0] = -1;
	while (i < t->len)
	{
		if (j == -1 || t->arr[i] == t->arr[j])
		{
			j++;
			i++;
			next[i] = j;
		}
		else
		{
			j = next[j];
		}
	}
	i = 0;
	j = 0;
	while (j<t->len && i<s->len)
	{
		if (j == -1 || s->arr[i] == t->arr[j])
		{
			j++;
			i++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j == t->len)
	{
		printf("%d\n", i - j+1);
	}
	else
	{
		printf("false\n");
	}
}

int main()
{
	string s = { 10,"ABBBCAABAB"};
	string t= { 4,"AABAB" };
	index(&s, &t);
	return 0;
}