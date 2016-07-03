/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月27日 17:38:57
 ************************************************************************/
/*
 * 计算单位矩阵
 */

#include<stdio.h>
bool identity_matrix(int *matrix, int size)
{
	int x_index = 0;
	int y_index = 0;

	while(x_index<size)
	{
		if(*(matrix + x_index*size + y_index)!=1&&x_index==y_index)
		{
			break;
		}
		if(*(matrix + x_index*size + y_index)!=0&&x_index!=y_index)
		{
			break;
		}
		y_index++;
		if(y_index>=size)
		{
			y_index = 0;
			x_index++;
		}
	}
	if(x_index>=size)
		return true;
	else
		return false;
}

int main(void)
{
	int matrix[11][11] = {
		{1},
		{0,1},
		{0,0,1},
		{0,0,0,1},
		{0,0,0,0,1},
		{0,0,0,0,0,1},
		{0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,0,0,0,1}
	};

	printf("%d\n", identity_matrix((int*)matrix, 11));

	return 0;
}
