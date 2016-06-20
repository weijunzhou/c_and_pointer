/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月16日  8:31:19
 ************************************************************************/
/*
 * 二进制模式左右变换
 */
#include<stdio.h>
#define GET_POS(i) sizeof(unsigned int)*8 - i - 1
#define SET_POS(i) sizeof(unsigned int)*8 - i*2 - 1
unsigned int reverse_bits(unsigned int value)
{
	unsigned int tmpValue = 0;
	for (int i=0; i<sizeof(unsigned int)*8/2; i++)
	{
		tmpValue |= (value & 1<<i)<<SET_POS(i); 
		tmpValue |= (value & 1<<GET_POS(i))>>SET_POS(i);
	}
	return tmpValue;
}

int main(void)
{
	unsigned int value;
	unsigned int tmpValue = 0;

	scanf("%d", &value);
	
	tmpValue = reverse_bits(value);

	printf("%ul\n", tmpValue);

	return 0;
}
