/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 8日  8:49:18
 ************************************************************************/

#include<stdio.h>
#include<string.h>
/*
 * 编写strncpy函数
 */

void copy_n(char dst[], char src[], int n)
{
	for (int i=0; i<n; i++)
	{
		if (i >= strlen(src))
		{
			dst[i] = 0;
		}
		else
		{
			dst[i] = src[i];
		}
	}
}

int main(void)
{
	char a[15] = "Hello, world!";
	char b[8];

	copy_n(b, a, 7);
	printf("%s\n", b);

	return 0;
}
