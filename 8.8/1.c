/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月24日 14:29:53
 ************************************************************************/

#include<stdio.h>
unsigned char char_value[3][6][4][5] = 
{
	{//3-1
		
	},
	{//3-2
		{
		},
		{
			{},
			{0,' '},
			{},
			{},
		},
		{
			{},
			{},
			{0,0,0,'A'},
			{0,0,0,0,'x'},
		},
		{
			{},
			{},
			{0,0,0xf3},
			{},
		},
		{
			{},
			{},
			{0,0,0,'\n'},
			{},
		},
		{
		},
	},
	{//3-3
		{
		},
		{
			{},
			{0,0,0320},
			{},
			{},
		},
		{
			{},
			{0,'0'},
			{0,0,'\''},
			{0,'\121'},
		},
		{
		},
		{
			{},
			{},
			{},
			{0,0,'3',3},
		},
		{
			{},
			{},
			{},
			{0,0,0,0,125},
		},
	},
};

int main(void)
{
	printf("{\n");
	for(int i=0; i<3; i++)
	{
		printf("	{\n");
		for(int j=0; j<6; j++)
		{
			printf("		{");
			for(int k=0; k<4; k++)
			{
				printf("{");
				for(int l=0; l<5; l++)
				{
					printf("0x%02x,",char_value[i][j][k][l]);
				}
				printf("},");
			}
			printf("}\n");
		}
		printf("	}\n");
	}
	printf("}\n");

	return 0;
}
			
