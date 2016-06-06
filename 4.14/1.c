/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月 6日  8:51:35
 ************************************************************************/

#include<stdio.h>
/*
 * 计算平方根
 */
int main(void)
{
	int n = 0;
	float pre_a = 1;
	float last_a = 0;

	scanf("%d", &n);
	while(1)
	{
		last_a = (pre_a + n/pre_a)/2;
		printf("%f\n", last_a);
		if (last_a == pre_a)
		{
			break;
		}
		pre_a = last_a;
	}
	printf("%f\n", last_a);
	return 0;
}
