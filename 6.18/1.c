/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月20日  8:59:21
 ************************************************************************/
/*
 * 找匹配的字符
 */
#include<stdio.h>
char *find_char(char const *source, char const *chars)
{
	int srcIdx=0, chrIdx=0;
	if(source == NULL || chars == NULL)
	{
		return NULL;
	}
	while(*(source+srcIdx)!='\0')
	{
		chrIdx = 0;
		while(*(chars+chrIdx)!='\0')
		{
			if(*(source+srcIdx)==*(chars+chrIdx))
			{
				return (char *)(source+srcIdx);
			}
			chrIdx++;
		}
		srcIdx++;
	}
	return NULL;
}
int main(void)
{
	char *pStr;
	char string[50] = {0};

	while(gets(string))
	{
		pStr = find_char(string, "abc");
		if(pStr != NULL)
			puts(pStr);
		else
			puts("not find any char");
	}
	return 0;
}
