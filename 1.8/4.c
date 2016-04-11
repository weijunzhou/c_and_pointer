/*************************************************************************
	> File Name: 4.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年04月10日 20:28:51
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	char string1[1000] = {0};
	char String2[1000] = {0};
	char **pString = string;
	int stringLen = 0;
	int maxStringLen = 0;
	while(gets(pString) != NULL && pString[0] != '\0' )
	{
		stringLen = strlen(string);
		if (stringLen > maxStringLen)
		{
			strcpy(maxString, string);
			maxStringLen = stringLen;
		}
	}
	puts(maxString);
	return 0;
}

