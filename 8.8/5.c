/*************************************************************************
	> File Name: 5.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月28日 10:58:03
 ************************************************************************/
/*
 * 矩阵乘法
 */
#include<stdio.h>
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
	int i=0, j=0, k=0;

	while(i<x)
	{
		*(r+i*z+j) = 0;
		for(k=0; k<y; k++)
		{
			//printf("i:%d,k:%d,j:%d,m1[i][k]:%d,m2[k][j]:%d\n",
			//		i,k,j,*(m1+i*y+k),*(m2+k*z+j));
			*(r+i*z+j) += *(m1+i*y+k)**(m2+k*z+j);
		}
		j++;
		if(j>=z)
		{
			i++;
			j = 0;
		}
	}
}
int main(void)
{
	int m1[3][2] = {{2,-6},{3,5},{1,-1}};
	int m2[2][4] = {{4,-2,-4,-5},{-7,-3,6,7}};
	int r[3][4] = {0};

	matrix_multiply((int *)m1, (int *)m2, (int *)r, 3, 2, 4);
	
	puts("{");
	for(int i=0; i<3; i++)
	{
		printf("	{");
		for(int j=0; j<4; j++)
		{
			printf("%d,", r[i][j]);
		}
		printf("}\n");
	}
	puts("}");

	return 0;
}
