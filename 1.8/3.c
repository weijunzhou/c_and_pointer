/*************************************************************************
	> File Name: 3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年04月10日 19:59:48
 ************************************************************************/

#include<stdio.h>
int main(int argc, char **argv)
{
	int ch;
	char checksum = -1;

	while(ch = getchar())
	{
		checksum += ch;
		putchar(ch);
		if (ch == '\n')
			break;
	}

	printf("%d\n", checksum);
	return 0;
}
