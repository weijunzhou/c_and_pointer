/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年07月 3日  9:19:33
 ************************************************************************/

#include<stdio.h>
int my_strlen(char *str, int len)
{
	int stringLen = 0;

	while(*str++ != 0 && stringLen <= len)
	{
		stringLen++;
	}
	
	return stringLen;
}

int main(void)
{
	char string[100] = {0};
	
	gets(string);

	printf("strLen:%d\n", my_strlen(string, 100));

	return 0;
}
