/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年04月19日  3:11:10
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
int main(void)
{
	printf("char_min:%d char max:%d uchar_max:%d\n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
	printf("shrt_min:%d shrt_max:%d ushrt_max:%d\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
	printf("int_min:%d int_max:%d uint_max:%d\n", INT_MIN, INT_MAX, UINT_MAX);
	printf("long_min:%d long_max:%d ulong_max:%d\n", LONG_MIN, LONG_MAX, ULONG_MAX);
	return 0;
}
