/*************************************************************************
	> File Name: 23.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年05月18日  7:57:58
 ************************************************************************/

#include<stdio.h>
extern int x();
int y()
{
	static int b = 2;
	x();
	return 1;
}

int a = 1;

int x()
{
	int c = 3;
	static float d = 4;
	b = c;
	return 0;
}

int main()
{
	y();
	return 0;
}
