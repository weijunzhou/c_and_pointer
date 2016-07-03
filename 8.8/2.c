/*************************************************************************
	> File Name: 2.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月24日 16:22:44
 ************************************************************************/
/*
 * 计算美国个人所得税
 */
#include<stdio.h>

const float income_limits[5] = {0, 23350, 56550, 117950, 256500};
const float base_tax[5] = {0, 3502.5, 12798.5, 31832.5, 81710.5};
const float percentage[5] = {15, 28, 31, 36, 39.6};

float single_tax(float income)
{
	float tax = 0;
	int	index = 4;

	while(income > 0)
	{
		if(income>income_limits[index])
		{
			tax += base_tax[index] + percentage[index]*(income-income_limits[index])/100;
			income = income_limits[index];
		}
		index--;
	}	
	return tax;
}

int main(void)
{
	printf("%f\n",single_tax(56550));

	return 0;
}
