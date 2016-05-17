/*************************************************************************
	> File Name: 7.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年05月12日  8:18:33
 ************************************************************************/

#include<stdio.h>

enum Liquid {
	OUNCE = 1,
	CUP = 8,
	PINT = 16,
	QUART = 32,
	GALLON = 128
};

int main(void)
{
	enum Liquid jar;

	jar = QUART;

	printf("%d\n", jar);
	jar = PINT;
	printf("%d\n", jar);

	return 0;
}
