/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月23日 10:34:44
 ************************************************************************/
/*
 * 求解厄密多项式
 */
#include<stdio.h>
int hermite(int n, int x)
{
	if (n<=0)
		return 1;
	else if(n==1)
		return 2*x;
	else if(n>=2)
		return 2*x*hermite(n-1, x) - 2*(n-1)*hermite(n-2, x);
}

int fibonacci(int n)
{
	int result = 1;
	int pre_result = 0;
	int next_result = 0;

	result = pre_result = 1;

	while(n>2)
	{
		next_result = result;
		result = pre_result + next_result;
		pre_result = next_result;
		next_result = result;
		n--;
	}
	return result;
}

int main(void)
{
	printf("%d, %d\n", hermite(3, 2), fibonacci(10));
	return 0;
}
