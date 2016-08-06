/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 6日  9:16:50
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<string.h>
void *calloc(size_t length)
{
	void *ptr = NULL;
	ptr = malloc(length);

	memset(ptr, 0, length);

	return ptr;
}

int main(void)
{
	char *ptr = (char *)calloc(100);

	return 0;
}
