#include <graphics.h>//图形界面库
#include <stdio.h>
int main()
{
	initgraph(500, 480); // 初始化图形界面，高度480，宽度500，单位px
	fillrectangle(0,0,100,120);//左上角与右下角的对角线（left,top,right,bottom)
	getchar(); // 等待用户输入，防止程序立即结束
	return 0;
}