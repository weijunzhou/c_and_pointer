/*************************************************************************
	> File Name: 1.c
	> Author: weijun
	> Mail: 20044439@163.com 
	> Created Time: 2016年06月15日  9:23:20
 ************************************************************************/
/*
 * 从标准输入读取字符，将大写字母转换为小写字母并写到标准输出中
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = {0};
	int strLen = 0;

	while(1)
	{
		gets(str);
		strLen = strlen(str);
		while(strLen--)
		{
			if (str[strLen]>='A' && str[strLen]<='Z')
				str[strLen] = str[strLen]+13>'Z'?str[strLen]-13:str[strLen]+13;
			if (str[strLen]>='a' && str[strLen]<='z')
				str[strLen] = str[strLen]+13>'z'?str[strLen]-13:str[strLen]+13;
		}

		puts(str);
	}

	return 0;
}
