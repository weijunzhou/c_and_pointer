/*************************************************************************
	> File Name: main.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年04月18日 13:37:48
 ************************************************************************/

#include<stdio.h>

int increment(int dwAdd);
int negate(int dwNegate);
int main(void)
{	
	printf("%d %d\n", increment(10), negate(10));
	printf("%d %d\n", increment(0), negate(0));
	printf("%d %d\n", increment(-10), negate(-10));
	return 0;
}
