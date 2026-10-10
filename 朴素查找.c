#include <stdio.h>

typedef struct string
{
    int len;
    char arr[100];
}string;//定义模式串和主串的结构

void index(string* s, string* t)
{
    int i = 0;//主串指针
    int j = 0;//模式串指针
    while (i <s->len && j < t->len)//当j=3时或者i>6时则循环停止
    {
        if (s->arr[i] == t->arr[j])
        {
            i++;
            j++;
        }//对应时俩个数值同时往后移动一位直到匹配成功或者匹配失败
        else
        {
            i = i - j + 1;
            j = 0;
        }//匹配失败时模式串整体相对主串向后移动一位，j回到模式串首位重新匹配
    }
    if (j == t->len)
    {
        printf("%d\n", i - t->len + 1);
    }//
    else
    {
        printf("false\n");
    }//
}


int main()
{
    string s = { 10,"ABCDAADBBC" };//声明一个主串
    string t = { 2,"BC" };//声明一个模式串
    index(&s, &t);
    return 0;
}
