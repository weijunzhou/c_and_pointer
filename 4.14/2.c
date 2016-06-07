/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 7日  9:03:01
 ************************************************************************/

#include<stdio.h>
#include<math.h>
/*
 * 计算1~100之间的所有质数
 */
int main(void)
{
	int n = 0, m = 0;
	int i = 0;

	scanf("%d", &m);
	for (n=2; n<=m; n++)
	{
		for (i=2; i<=sqrt(n); i++)
		{
			if (n%i == 0)
			{
				break;
			}
		}
		if (i>sqrt(n))
		{
			printf("%d\n", n);
		}
	}
	return 0;
}
