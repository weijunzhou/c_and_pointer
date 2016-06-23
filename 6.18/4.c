/*************************************************************************
	> File Name: 4.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月22日 13:33:39
 ************************************************************************/
/*
 * 使用Eratosthenes算法筛选法计算质数
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

void eraosthenes(char array[], unsigned long arrLen)
{
	unsigned long arrIdx = 0;
	unsigned long i = 0;

	while(arrIdx++<arrLen*8)
	{
		//printf("arrIdx:%d\n",arrIdx);
		if(test_bit(array,arrIdx)==false)
		{
			continue;
		}
		i = 1;
		while((2*arrIdx+1)*(2*i+1)<2*arrLen*8+1)
		{
			clear_bit(array,((2*arrIdx+1)*(2*i+1)-1)/2);
			i++;
			//printf("i:%d\n",i);
		}
	}
}

int main(void)
{
	char array[62563] = {true};
	unsigned char primeCnt[1010] = {0};
	unsigned long i = 0;

	for(i=0; i<sizeof(array); i++)
	{
		array[i] = 0xff;
	}
	for(i=0; i<sizeof(primeCnt); i++)
	{
		primeCnt[i] = 0;
	}
	eraosthenes(array, sizeof(array));

	i = 0;
	while(i<sizeof(array)*8)
	{
		if(test_bit(array,i++)==true)
		{
			printf("%d,", 2*(i-1)+1);
			primeCnt[(2*(i-1)+1)/1000]++;
		}
	}
	for(i=0; i<sizeof(primeCnt); i++)
	{
		printf("between %d to %d primeCnt:%d\n", i*1000, (i+1)*1000, primeCnt[i]);
	}
	return 0;
}

