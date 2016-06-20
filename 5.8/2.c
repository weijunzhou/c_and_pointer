/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月14日 17:25:09
 ************************************************************************/
/*
 * 测试运算优先级
 */
#include<stdio.h>
int func(void)
{
	static int counter = 1;
	printf("%d\n", counter);
	return ++counter;
}

int main()
{
	int answer;
	answer = func() - func()*func();
	printf("%d\n", answer);
	return 0;
}
