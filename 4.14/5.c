/*************************************************************************
	> File Name: 5.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 8日 12:45:05
 ************************************************************************/

#include<stdio.h>
#include<string.h>
/*
 * 打印相邻行有相同文本行的第一行
 */
#define true 1
#define false 0
int main(void)
{
	char recvStr[128] = {0};
	char saveStr[128] = {0};
	bool isNotSame = false;

	while(gets(recvStr) != NULL)
	{
		if (strcmp(recvStr, saveStr) == 0)
		{
			if (isNotSame == true)
			{
				isNotSame = false;
				puts(recvStr);
			}
		}
		if (strcmp(recvStr, saveStr) != 0)
		{
			isNotSame = true;
			strcpy(saveStr, recvStr);
		}
	}
	return 0;
}
