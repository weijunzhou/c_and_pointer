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
	char string2[1000] = {0};
	char *pString = string1;
	char *pMaxString = string2;
	char *pTempString = NULL;
	int stringLen = 0;
	int maxStringLen = 0;
	while(gets(pString) != NULL && strlen(pString) != 0)
	{
		stringLen = strlen(pString);
		if (stringLen > maxStringLen)
		{
			pTempString = pString;
			pString = pMaxString;
			pMaxString = pTempString;
			maxStringLen = stringLen;
		}
	}
	puts(pMaxString);
	return 0;
}

