/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 7日 10:05:58
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int x, y, z;

	printf("please input three numbers as side of triangle:\n");
	scanf("%d %d %d", &x,&y,&z);
	if (x == y && y == z)
	{
		printf("等边三角形\n");
	}
	else if (x == y || y == z || x == z)
	{
		printf("等腰三角形\n");
	}
	else
	{
		printf("不等边三角形\n");
	}
	return 0;
}
	
