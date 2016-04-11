/*************************************************************************
	> File Name: 2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年04月10日 16:24:57
 ************************************************************************/

#include<stdio.h>
int main(int argc, char **argv)
{
	int ch;
	int line = 0;
	int at_beginning = 0;

	while ((ch = getchar()) != EOF)
	{
		if (at_beginning == 0)
		{
			printf("%d ", line++);
			at_beginning = 1;
		}
		printf("%c", ch);

		if (ch == '\n')
		{
			at_beginning = 0;
		}
	}
	return 0;
}
