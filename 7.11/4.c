/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月23日 13:16:55
 ************************************************************************/
/*
 * 可变参数列表
 */
#include<stdio.h>
#include<stdarg.h>
int max_list(int n_values, ...)
{
	va_list value_list;
	int count;
	int value;
	int maxValue = 0;

	va_start(value_list, n_values);

	for(count=0; count<n_values; count++)
	{
		value = va_arg(value_list, int);
		if(maxValue<value)
		{
			maxValue = value;
		}
	}
	return maxValue;
}

int main(void)
{
	printf("maxValue:%d\n",max_list(11, 23,34,43,123,612,657,234,567,1289,457,10921));
	return 0;
}

