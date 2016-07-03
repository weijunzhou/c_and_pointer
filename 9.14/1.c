/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年07月 3日  7:01:54
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int chr;
	int count[8] = {0};

	while((chr=getc(stdin)) != EOF)
	{
		if(iscntrl(chr))
		{
			count[0]++;
		}
		else if(isspace(chr))
		{
			count[1]++;
		}
		else if(isdigit(chr))
		{
			count[2]++;
		}
		else if(islower(chr))
		{
			count[3]++;
		}
		else if(isupper(chr))
		{
			count[4]++;
		}
		else if(ispunct(chr))
		{
			count[5]++;
		}
		else if(!isprint(chr))
		{
			count[6]++;
		}
		else
			count[7]++;
	}
	for(int i=0; i<8; i++)
	{
		printf("%d, ", count[i]);
	}
	return 0;
}
