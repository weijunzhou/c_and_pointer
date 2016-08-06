/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 2日 15:34:17
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DELTA 100
int main(void)
{
	char *buffer = NULL;
	int buffLen = 0;
	int ch = 0, buffIdx = 0;

	buffLen = DELTA + 1;
	buffer = (char *)malloc(buffLen*sizeof(int));
	while(scanf("%d", &ch) == 1)
	{
		if(buffIdx >= DELTA)
		{
			buffLen = buffIdx + DELTA;
			buffer = (char*)realloc(buffer, buffLen*sizeof(int));
		}
		*(buffer+buffIdx++) = ch;
	}
	
	if(buffIdx < buffLen)
	{
		buffer = (char*)realloc(buffer, buffIdx*sizeof(int));
	}

	free(buffer);

	return 0;
}
