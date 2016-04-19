/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年04月18日 18:15:43
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(void)
{
	int ch;
	int	count = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch == '{')
		{
			count++;
		}
		else if(ch == '}')
		{
			count--;
		}
	}
	printf("Is it paired?:%s\n", count == 0?"Yes":"No");
	printf("error:%s\n", strerror(errno));
	return 0;
}
