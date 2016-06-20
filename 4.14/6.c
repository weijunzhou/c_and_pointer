/*************************************************************************
	> File Name: 6.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 9日  7:16:08
 ************************************************************************/
#include<stdio.h>
#include<string.h>
/*
 * 从一个字符串中抽取一个子字符串
 */
int substr(char dst[], char src[], int start, int len)
{
	int i = 0;

	if (start <= 0 || len <= 0 || start >= strlen(src))
		dst[0] = 0;

	while (i<len)
	{
		dst[i] = src[start+i];
		if (src[start+i] != 0)
			i++;
	}
	if (i >= len)
		dst[len] = 0;

	return i;

}
int main(void)
{
	char srcStr[20] = "Hello world!";
	char subStr[10] = {0};

	substr(subStr, srcStr, 3, 5);

	printf("%s\n", subStr);

	return 0;
}
