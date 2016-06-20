/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月16日 13:46:44
 ************************************************************************/
/*
 * 位数组
 */
#include<stdio.h>

void set_bit(char bit_array[], unsigned bit_number)
{
	bit_array[bit_number/8] |= (1<<bit_number%8);
}
void clear_bit(char bit_array[], unsigned bit_number)
{
	bit_array[bit_number/8] &= ~(1<<bit_number%8);
}
void assign_bit(char bit_array[], unsigned bit_number, int value)
{
	value==0?clear_bit(bit_array, bit_number):set_bit(bit_array, bit_number);
}
int test_bit(char bit_array[], unsigned bit_number)
{
	return (bit_array[bit_number/8]&(1<<bit_number%8))!=0?true:false;
}
int main(void)
{
	char bit_array[32] = {0};

	set_bit(bit_array, 5);
	printf("%d\n", test_bit(bit_array, 5));

	return 0;
}
