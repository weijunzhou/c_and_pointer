/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月23日 11:22:21
 ************************************************************************/
/*
 * 求最大公约数
 */
#include<stdio.h>
int gcd(int m, int n)
{
	if(m<=0 || n<=0)
		return 0;

	if (m%n == 0)
		return n;
	else
		return gcd(n,m%n);
}

int main(void)
{
	printf("%d\n", gcd(2469,45));
	return 0;
}
