/*************************************************************************
	> File Name: 5.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年04月 9日 23:06:40
 ************************************************************************/
#include <stdio.h>

int main(int argc, char **argv)
{
	int quantity = 0;
	int price = 0;
	char department[100];

	puts("input quantity, price, department:");
	scanf("%d %d %s", &quantity, &price, department);
	printf("%d %d %s\n", quantity, price, department);
	return 0;
}
