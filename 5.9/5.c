/*************************************************************************
	> File Name: 5.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月16日 14:29:05
 ************************************************************************/
/*
 * 把一个给定的值存储到一个整数中指定的几个位
 */
#include<stdio.h>

int store_bit_field(int original_value, int value_to_store,
		unsigned starting_bit, unsigned ending_bit)
{
	int retVal;
	int mask = 0;
	int strLen = sizeof(int)*8;
	/*
	 * 创建掩码
	 */
	while(strLen--)
	{
		if(starting_bit>=strLen && ending_bit<=strLen)
		{
			mask |= 1<<strLen;
		}
	}
	printf("%x\n", mask);
	original_value &= ~mask;
	value_to_store <<= ending_bit;
	value_to_store &= mask;
	retVal = value_to_store | original_value;
	return retVal;
}

int main(void)
{
	int retVal = store_bit_field(0xffff, 0x123, 15, 4);
	printf("0x%x\n", retVal);
	return 0;
}
