/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年08月 6日 11:28:18
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define DELTA 10

char *input_string(void)
{
	char *buffer = (char*)malloc(DELTA);
	int buffIdx = 0;
	int buffSize = DELTA;

	while(fgets(buffer+buffIdx, DELTA, stdin) != NULL)
	{
		buffIdx = strlen(buffer);
		if(buffSize < buffIdx+DELTA)
		{
			buffSize = buffSize+DELTA;
			buffer = (char*)realloc(buffer, buffSize);
		}
	}
	printf("strlen:%d,buffSize:%d\n", strlen(buffer), buffSize);
	return buffer;
}

int main(void)
{
	printf("%s\n", input_string());
	return 0;
}

