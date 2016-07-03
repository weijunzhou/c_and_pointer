/*************************************************************************
	> File Name: 8.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月29日 11:20:02
 ************************************************************************/
/*
 * 八皇后问题：回溯算法
 */
#include<stdio.h>
void printchess(char *chess)
{
	int x=0, y=0;
	static int count = 0;

	printf("printf %d chess\n", count++);

	for(x=0; x<8; x++)
	{
		printf("	{");
		for(y=0; y<8; y++)			
		{
			printf("%d,", *(chess + x*8 + y));
		}
		printf("}\n");
	}
}
bool existattrack(char *chess, int line, int col)
{	
	int j = 0;

	/*
	 * 与接下来的0行到7行判断是否有攻击
	 */
	for(j=0; j<8; j++)
	{
		if(j==line)
			continue;
		if(*(chess+j*8+col) == true)
		{
			return true;
		}
		if(*(chess+j*8+col+j-line) == true && col+j-line>=0 && col+j-line<8)
		{
			return true;
		}
		if(*(chess+j*8+col+line-j) == true && col+line-j>=0 && col+line-j<8)
		{
			return true;
		}
	}
	return false;
}

void backtracking(char *chess, int line)
{
	int x = 0;
	/*
	 * 判断皇后放在line行第1列到第8列是否存在互相攻击
	 * 如果皇后可以放在line行某列，
	 * 判断是否是最后一行，
	 * 如果是最后一行，打印棋盘，清除皇后位置，函数返回
	 * 否则调用自身，皇后放在下一行
	 * 函数返回有两种情况，一种是打印棋盘，另一种是此路不通
	 * 所以清除本行皇后位置，对于第一种是寻找下一种棋盘，对于第二种是寻找下一条路
	 * 如果8列都存在互相攻击，函数返回
	 */
	for(x=0; x<8; x++)
	{
		//printf("试探下一行，line:%d, x:%d\n",line, x);	
		if(existattrack(chess, line, x) == false)
		{
			//printf("皇后可以放在这个位置，line:%d, x:%d\n", line, x);
		 
			*(chess + line*8 + x) = true;
			if(line>=7)
			{
				/*
				 * 因为最后一行只有唯一位置可以放置皇后，所以直接返回
				 */
				printchess(chess);
				*(chess + line*8 + x) = false;
				return;
			}
			else
			{
				backtracking(chess, line+1);
				*(chess + line*8 + x) = false;
			}	
		}
	}
}

int main(void)
{
	char chess[8][8] = {0};
	
	for(int i=0; i<8; i++)			
	{
		for(int j=0; j<8; j++)
		{
			//printf("%d,", chess[i][j]);
			chess[i][j] = false;
		}
	}

	backtracking((char *)chess, 0);
	return 0;
}
