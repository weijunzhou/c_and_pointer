/*************************************************************************
	> File Name: 3.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月23日 11:41:02
 ************************************************************************/

#include<stdio.h>
int ascii_to_integer(char *string)
{
	int retVal = 0;

	while(*string >= '0' && *string <= '9')
	{
		retVal = retVal*10+ *string++-'0';
	}
	if(*string != 0)
		return 0;
	return retVal;
}

int main(void)
{
	char string[] = "12345";
	printf("%d\n", ascii_to_integer(string));
	return 0;
}
