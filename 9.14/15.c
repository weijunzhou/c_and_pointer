/*************************************************************************
	> File Name: 15.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年07月31日  3:45:02
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void dollars(char *dest, char const *src)
{
	int strLen = strlen(src);
	int i = 0, j = 1;

	*dest = '$';
	if(strLen < 1)
	{
		*(dest+j++) = '0';
		*(dest+j++) = '.';
		*(dest+j++) = '0';
		*(dest+j++) = '0';
		return;
	}
	else if(strLen < 2)
	{
		*(dest+j++) = '0';
		*(dest+j++) = '.';
		*(dest+j++) = '0';
		*(dest+j++) = *(src+0);
		return;
	}
	else if(strLen < 3)
	{
		*(dest+j++) = '0';
		*(dest+j++) = '.';
		*(dest+j++) = *(src+0);
		*(dest+j++) = *(src+1);
		return;
	}

	for(i=0; i<strLen; i++)
	{
		if((strLen-i-2)%3 == 0)
		{
			if(strLen-i-2 == 0)
				*(dest+j++) = '.';
			else if(i != 0)
				*(dest+j++) = ',';
		}
		*(dest+j++) = *(src+i);
	}
}

int main(void)
{
	char dollar[10] = {0};
	char szDollars[20] = {0};

	gets(dollar);

	dollars(szDollars, dollar);

	puts(szDollars);

	return 0;
}





