/*************************************************************************
	> File Name: 7.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月11日 10:01:55
 ************************************************************************/
/*
 * 从一个字符串中去除多余的空格
 */
#include<stdio.h>
#include<string.h>

void deblank(char string[])
{
	int i = 0;
	int strLen = strlen(string);
	int blankNum = 0;
	while(strLen>0)
	{
		blankNum = 0;
		for(i=strLen-1;i>=0;i--)
		{
			if(string[i]==32)
			{
				blankNum++;
			}
			else if(blankNum >= 2)
			{
				strcpy(&string[i+2],&string[i+1+blankNum]);
				break;
			}
		}
		strLen = i;
	}
}

int main(void)
{
	char string[100] = {0};

	gets(string);

	deblank(string);

	puts(string);

	return 0;
}
